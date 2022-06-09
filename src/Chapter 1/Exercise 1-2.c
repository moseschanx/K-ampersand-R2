
/*
    Experiment to find out what happens when printf's argument string
    contains \c , where c is some character not listed above
*/

#include <stdio.h>


main()
{
    printf("Hello,world! \c \n");
}


/* 

    main.c:13:12: warning: unknown escape sequence: '\c'
   13 |     printf("Hello,world! \c \n");

*/
