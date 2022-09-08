/******************************************************************************

             Write a function to check whether a given string is palindrome or not.          

*******************************************************************************/

#include <stdio.h>                           //1st method
void palind(char s[50]);
int main()
{
  char s[50];
  palind(s);

    return 0;
}
void palind(char s[50])
{   
    int i,k;
    printf("enter a string\n");
    fgets(s,50,stdin);
    for(i=0;s[i];i++);
    i=i-1;
    for(k=0;k<i/2;k++)
    {
      if(s[k]!=s[i-k-1])
      {
          printf("string is not a palindrome");
          break;
      }
    }
    if(k==i/2)
    {
        printf("string is palindrome");
    }
}


                                            //second method
/*#include <stdio.h>
void palind(char s[50]);
int main()
{
  char s[50];
  palind(s);

    return 0;
}
void palind(char s[50])
{   char a[50];
    int i,k,count1=0,count2=0;
    char temp;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    for(i=0;s[i];i++)
    {
        a[i]=s[i];          // copying the original string first into second string variable
    }
    a[i]='\0';           // last character of string converting garbage to null
    
    for(k=0;s[k];k++);       // finding length
    k=k-1;
    for(i=0;i<k/2;i++)
    {
        temp=s[i];
        s[i]=s[k-i-1];
        s[k-i-1]=temp;
    }
    for(i=0;i<(k-1);i++)
    {
      if(a[i]!=s[i])
        {
        printf("string is not  palindrome\n");
        break;
        }
    }
    if(i==(k-1))
      printf("String is palindrome");
         
    
    
    
}  */


