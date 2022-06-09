
ifeq ($(OS),Windows_NT)


else

ifeq ($(shell uname),Darwin)

	CC := clang
	LD := clang
endif

ifeq ($(shell uname),Linux)

	CC := gcc 
	LD := gcc 

	ULIMIT = ulimit -c unlimited

	CCFLAGS += -pg
	LDFLAGS += -pg
endif

endif

TARGET = main.out
# from gcc manual -std=c90 is equavelent to -ansi 
CCFLAGS = -x c -c -g -std=c90  -O0  -Wextra -pedantic
LDFLAGS = -std=c90 -lm -lpthread

 
CCFLAGS += -D DEBUG

all : $(TARGET) 

$(TARGET) : main.o
	$(LD) $(LDFLAGS) -o $@ $^

main.o : main.c
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY : clean
clean : 
	rm -rf *.o *.out prep core *.a *.so

run : all
	@./main.out

prep : main.c 
	rm -rf prep
	$(CC) -E -D DEBUG -o $@ $^	

set-core : 
	$(ULIMIT)