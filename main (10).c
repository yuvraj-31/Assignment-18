/******************************************************************************
Write a function to find the repeated character in a given string.

*******************************************************************************/

#include <stdio.h>
void repeat_c(char s[50]);
int main()
{
    char s[50];
    repeat_c(s);

    return 0;
}
void repeat_c(char s[50])
{
    int i,j,count;
    printf("Enter a string\n");
    fgets(s,50,stdin);
     printf("Repeated chracters are in the string are:\n");
    for(i=0;s[i];i++)
    {   count=0;
        for(j=i+1;s[j];j++)
        {
            if(s[i]==s[j])
               { count++;
                 s[j]=-1;
               }
        }
       
        if(count>0 && s[i]!=-1)
        { 
            printf("%c",s[i]);
        }
    }
}
