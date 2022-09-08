/**************************
Write a function to compare two strings.

***************************/

#include <stdio.h>
int scomp( char s1[50], char s2[50]);
int main()
{
    char s1[50];
    char s2[50];
    
    scomp(s1,s2); 
    
    return 0;
}

int scomp( char s1[50], char s2[50])
{  
    int i,k1,k2;
    char temp;
    printf("Enter first string\n");
    fgets(s1,50,stdin);
    printf("Enter second string\n");
    fgets(s2,50,stdin);
    for(k1=0;s1[k1];k1++);
    for(k2=0;s2[k2];k2++);
    if(k1==k2)
    { 
        for(i=0;i<k2-1;i++)
        {
           if(s1[i]!=s2[i])
              {   
                  printf("String is not equal");
                  break;
              }
        }
        if(i==(k2-1))
          printf("String is equal");
    }
    else
      printf("string is not equal");
 
}
