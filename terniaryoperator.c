// Write a program to compare two no by using the ternary operator in c.


#include<stdio.h>
int main()
{
     int a,b,result;
     printf("enter the two number");
     scanf("%d%d",&a,&b);
     result=a>b?a:b;
     printf("%d",result);
     
}