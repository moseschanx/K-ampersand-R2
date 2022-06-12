
/*

Write a program that prints its input one word per line .

*/

#include <stdio.h>

main()
{


        char c , prev;
        while((c = fgetc(stdin))!=EOF)
        {

            if(!(c == ' ' || c == '\t' || c == '\n')) // We print out words 
                fputc(c , stdout);
            else if((c == ' ' || c == '\t' || c == '\n') &&  // if the word end , we print new line 
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