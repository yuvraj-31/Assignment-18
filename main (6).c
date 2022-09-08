/******************************************************************************

                    Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)

*******************************************************************************/

#include <stdio.h>
void alphan(char s[50]);
int main()
{
  char s[50];
  alphan(s);

    return 0;
}
void alphan(char s[50])
{
    int i,count1=0,count2=0;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
           count1++;
        else if(s[i]>=48 && s[i]<=57)
           count2++;
    }
    if(count1 && count2)
    {
        printf("Given string is a Alphanumeric string\n");
    }
    else
      printf("Given string is not a Alphanumeric string\n");
    
    
    
}
