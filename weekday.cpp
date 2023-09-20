
//Write a program to print weekday of given date.

#include<iostream>
using namespace std;
int main()



{
    int date;
    cout<<"enter the number";
    cin>>date;
    switch(date)
    {
    case 1:
               cout<<"sunday";
        break;
    case 2: 
               cout<<"monday";
               break;
    case 3: 
               cout<<"tuesday";   

               break;
     case 4: 
               cout<<"wedensday";  
               break;     
     case 5: 
               cout<<"thursday";
               break;

     case 6:
               cout<<"friday"; 
               break;
     case 7: 
               cout<<"saturday";    
               break ;     

    default:cout<<"wrong input";
        break;
    }
}