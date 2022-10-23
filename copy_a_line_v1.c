#include <stdio.h>
#define MAXLINE 100        //maximum input line size

int getline2pointoh(char s[], int lim);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;                //current line length
    int max;                // maximum length seen so far
    char line[MAXLINE];     //current input line
    char longest[MAXLINE];  //longest line saved here

    max = 0;

    while ((len = getline2pointoh(line, MAXLINE)) > 0)
    if (len > max) {
        max = len;
        copy(longest, line);

    }
    if (max > 0) //there was a line
        printf("%s%d\n", longest, max);
    return 0;
}

//getline: read a line into s, return length
int getline2pointoh(char s[], int lim)
{
    int c, i;
    int q = 1;

    for (i=0; (c=getchar()) != EOF && c!= '\n'; ++i)
    {
        if (i < lim-2)
        {                                                    
        s[i]=c;
        q++;
        }

    }   //ends when we reach the defined maximum

    if (c=='\n' && i>0)                //printf("\n")
    {
        s[q-1]=c;
        ++i;
    }

    s[q]='\0';
    return i;
}

//copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i;

    i=0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
