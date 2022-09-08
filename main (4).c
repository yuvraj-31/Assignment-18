/**************************
Write a function to transform string into uppercase

***************************/

#include <stdio.h>
int supp( char s1[50]);
int main()
{
    char s1[50];
    char s2[50];
    
    supp(s1); 
    
    return 0;
}

int supp( char s1[50])
{  
    int i,k1,k2;
    char temp;
    printf("Enter a string\n");
    fgets(s1,50,stdin);
    for(i=0;s1[i];i++)
    {
        if(s1[i]>=97 && s1[i]<=122)
        {
            s1[i]=s1[i]-32;
        }
    }
    printf("After converting the string into uppercase\n%s",s1);
    
 
}
