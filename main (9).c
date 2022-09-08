/******************************************************************************

Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )

*******************************************************************************/
#include <stdio.h>
void wrev(char s[]);
int main()
{
    char s[100];
    wrev(s);

    return 0;
}
void wrev(char s[])
{
    int i,j,k,l=0;
    char b[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    for(k=0;s[k];k++);
    int temp=k-1;
    for(i=k-2;i>=0;i--)
    {   
       if(s[i]==' ' && s[i+1]!='\0' )
           {  
               for(j=i+1;j<temp;j++)
               {
                  b[l]=s[j];
                    l++;
               }
               b[l]=' ';
               l++;
               temp=i;
           }
            
        else if(s[i]!=' ' && i==0)   
        {
            for(j=i;j<temp;j++)
               {
                  b[l]=s[j];
                    l++;
               }
               b[l]='\0';
        }
       
    }
  printf("%s",b);
  
}
