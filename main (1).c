/**************************
Write a function to calculate length of the string

***************************/

#include <stdio.h>
int slen( char s[50]);
int main()
{
    char s[50];
    printf("Enter a string\n");
    printf("length of the string is %d",slen(s)-1);
    
    return 0;
}

int slen( char s[50])
{  
    int i;
   fgets(s,50,stdin);
   for(i=0;s[i];i++); 
   return i;
}
