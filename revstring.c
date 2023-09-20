#include<stdio.h>
int main()
{
    char str[20];
    printf("enter the  string:");
    scanf("%s",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }

    printf("lenth is :%d",len);
    for(int i=0;i=len-1;len--)
    {
        for(int i=len-1;i<=len;len--)
       {
          printf("%c",str[i]);
       }
    }
}


