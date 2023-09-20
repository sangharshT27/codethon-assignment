#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int temp;
    for (int  i = 0; i <5; i++)
    {

       for(int j=0;j<=i;j++)
       {
         arr[i]>arr[j];
         temp=arr[i];

         

       }
       printf("%d",arr[i]);
    }
    
}