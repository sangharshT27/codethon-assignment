#include<iostream>
using namespace std;
int main()
{   

    int num,b=2,c;
    cout<<"enter the number";
    cin>>num;

    while(num!=0)
    {
        if(num%b==0)
           c++;
        b++;

    }   
    {
        cout<<"num is not prime:";
    }
    if(c==1)
    {
        cout<<num<<"is prime no:";
    }
    else
     {
         cout<<num<<"is not prime:";
     }

}