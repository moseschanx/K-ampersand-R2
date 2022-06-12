
/*

How would you test the word count program ? 
What kinds of input are most likely to uncover bugs if there are any ? 

Answer :

Write a program that prints its input one word per line .

*/

#define IN 1
#define OUT 0
#include <stdio.h>

main()
{


        char c , prev;
        
        int state = OUT;
        while((c = fgetc(stdin))!=EOF)
        {

            if(!(c == ' ' || c == '\t' || c == '\n'))
                fputc(c , stdout);
            else if((c == ' ' || c == '\t' || c == '\n') && 
                    !(prev == ' ' || prev == '\t' || prev == '\n'))
                fputc('\n' , stdout);

                prev = c;

        }
}


/*

        print out this line by each word
        print
        out
        this
        line
        by
        each
        word
*/