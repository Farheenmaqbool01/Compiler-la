#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    printf("Enter the string\n");
    gets(input);
    int len=strlen(input);
    //printf("\n%d",len);
    if(input[0]=='/'&&input[1]=='/')
        {
          printf("The statement entered is a single line comment");
        }
    else
     {
            int flag=0;
        for(int i=0;i<len;i++)
        {
          if(input[0]=='/'&&input[1]=='*'&&input[len-2]=='*'&&input[len-1]=='/')
          {
            flag=1;
          }
        }if(flag==1)
        {
            printf("The statement entered is a multi line comment");
          
        }

    }    
    

}

