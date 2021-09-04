//write a program to check wheather a year entered b a user is a leap year or not
/* logic:
      if divisible by 4 and  by both 100 and 400 then leap year.
      if divisible by 4 and by 100 but not 400 then not a leap year.
      if divisible by 4 but not 100 then it is a leap year.
  but if the number is not divisible by 4 then definately it is not a leap year*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"\n Enter the year : ";
    cin>>year;
    if(year%4==0) //if it is divisible by 4 then we need to check more conditions
      {
         if(year%100==0)
           {
               if(year%400==0)
                 cout<<year<<" is a leap year";
               else
                 cout<<year<<" is not a leap year";
                 
           }
         else
           {
               cout<<year<<" is a leap year";
           }
      }
    else         //if not divisible by 4 then definately it is not a leap year
    {
        cout<<year<<" is not a leap year";
    }

    return 0;
}
