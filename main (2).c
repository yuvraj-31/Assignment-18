/**************************
Write a function to reverse a string.

***************************/

#include <stdio.h>
int srev( char s[50]);
int main()
{
    char s[50];
    printf("Enter a string\n");
    srev(s); 
    
    return 0;
}

int srev( char s[50])
{  
    int i,k;
    char temp;
   fgets(s,50,stdin);
   for(k=0;s[k];k++);
   for(i=0;i<k/2;i++)
   {
       temp=s[i];
       s[i]=s[k-i-1];
       s[k-i-1]=temp;
   }
 printf("%s",s);
}
