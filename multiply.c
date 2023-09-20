#include <stdio.h>
int main() 
{
 
    int x, y, i, mul=0;
    printf("Enter x and y values : ");
    scanf("%d%d",&x,&y);
 
    for(i=1;i<=y;i++)
    {
        mul = mul + x;
    }
    printf("Multiplication is : %d \n",mul);
    return 0;
}