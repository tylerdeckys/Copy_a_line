#include <stdio.h>
#define MAXLINE 100        //maximum input line size
#define MINLINE 1

int getline2pointoh(char s[], int lim);
void copy(char to[], char from[]);
int removeblanks(char to[], char from[], int length, int newlength);
void reverse(char output[],char input[], int length);

/* print longest input line */
int main()
{
    int len;                //current line length
    int max;                // maximum length seen so far
    char line[MAXLINE];     //current input line
    char longest[MAXLINE];  //longest line saved here
    char remove[MAXLINE];    //string (no blanks)
    char final[MAXLINE];    //string with reversed chars

    int new; //new length of updated string

    max = 0;

    while ((len = getline2pointoh(line, MAXLINE)) > 0)
    if (len > MINLINE) {
        copy(longest, line);
        removeblanks(remove, longest, len, new);
        reverse(final, remove, removeblanks(remove, longest, len, new));
        printf("%s\n", final);


    }
 //   if (max > 0) //there was a line
 //       printf("%s%d\n", longest, max);
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

//remove blanks: remove blanks from from[] to to[].
int removeblanks(char to[], char from[], int length, int newlength)
{
    
    int seenChar = 0; 

    int j = 0;

    for (int i = length-1; i >= 0 ; i--)
    {

        if (((from[i-1] != ' ')&&(from[i-1]!='\t')) && seenChar == 0) //check if last index is a char
        {
            to[i] = '\0';
            from[i] = '\0';
            
            seenChar = 1;
        }

        else if (((from[i-1]==' ')||(from[i-1]=='\t')) && seenChar == 0)
        {}

        else
        {
            for (j; j < i+1; j++)
            {
                to[j] = from[j];
                newlength = i+1;
            }
            return newlength;
        }
    }

}

//reverse a string
void reverse(char reversed[],char input[],int length)
{

    for(int i = 0; i<length; i++)
    {
        reversed[length-1-i] = input[i];
        reversed[length] = '\0';
    }
}
