
/* 
    Write a program to copy its input to its output , replacing 
    each string of one or more blanks by a single blank.

*/

#include <stdio.h>

main()
{
        char c , prevc;
        while((c = fgetc(stdin))!=EOF)
        {
            if(c != ' ')
                fputc(c , stdout);
            if(c == ' ')        //The first time you encounter blank.
                if(prevc != ' ')  // make sure we only print blank once.
                fputc(' ',stdout);

            prevc = c;
        }
}