
//Write a program in C to read any Month Number in integer and display Month name in
//the word.(using switch case).
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the the number";
    cin>>num;
    switch (num)
    {
    case 1:"january";

        break;
    case 2:"february";
           break;


           case 3:"march";
           break;

      case 4:"april";
           break;
     case 5:"may";  
       break;
     
     case 6:"june";
           break;

  case 7:"july";

           break;
   case 8:"august";

           break;
           case 9:"september";
           break;
             case 10:"octomber";
             break;
               case 11:"novemver";
           break;
           case 12:"december";
          break;


    default:
        break;
    }

}