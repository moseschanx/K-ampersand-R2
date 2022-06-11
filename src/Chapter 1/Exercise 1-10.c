/*
 Write a program to copy its input to its output ,
 replacing each tab by \t , each backspace by \b , and each backslash by \\ ,
 this makes tabs and baclspaces visible in an unambiguous way,
*/

#include <stdio.h>

main()
{

    char c;
    while((c = fgetc(stdin))!=EOF)
    {
        if(c == '\t')
            fputs("\\t",stdout);
        if(c == '\b')
            fputs("\\b",stdout);
        if(c == '\\')
            fputs("\\\\",stdout);
        else 
            fputc(c , stdout);

    }
}


/*
    Hello    This is tab  \ \
    Hello\t  This is tab  \\ \\
*/