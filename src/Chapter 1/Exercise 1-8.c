/*
    Write a program to count blanks , tabs ,and newlines
*/

#include <stdio.h>


main()
{
    int blanks , tabs , newline;
    blanks = tabs = newline = 0;
    char c;

    while((c = fgetc(stdin))!=EOF)
    {
        if(c == ' ') ++blanks;
        if(c == '\t') ++tabs;
        if(c == '\n') ++newline;
    }

    printf("Blanks count : %d , tabs count : %d ,\
     newlines count : %d \n",blanks,tabs,newline);
    

}



