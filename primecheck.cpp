//Write a programtocheck wheather a number is prime or not.
/* Logic: prime number is a number divisible by 1 and number itself (i.e no. should be 
         divisible by exactly 2 numbers).
         Every number is divisible by 1 and itself.
         so if 4 is the number we will check if it dividsible by any other number in 
         between 1 and 4 --> if yes then the number is not prime else it is prime
          */
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Enter the number greater than 1 : ";
    cin>>num;
    int i=2;
    
    while(i<num)
    {
        if(num%i==0)
          {cout<<num<<" is not a prime number"<<endl;
          return 0;
          }
          i++;
    }
    cout<<num<<" is a prime number";
    
    return 0;
}
