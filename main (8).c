/******************************************************************************

Write a function to count words in a given string

*******************************************************************************/
#include <stdio.h>
void count(char s[]);
int main()
{
    char s[100];
    count(s);

    return 0;
}
void count(char s[])
{
    int i,count=0,temp=1;
    printf("Enter a string\n");
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]!=' ' && s[i+1]!='\0')
          count++;
        else
           {
               if(count>=1 && s[i-1]!=' ')
                  { count=0;
                  temp++;}
                  
            }      
    }
    if(count==0)
     printf("Number of words in the string is %d",temp-1);
    else
     printf("Number of words in the string is %d",temp);
}


