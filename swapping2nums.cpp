//Write a program to swap two numbers

#include <iostream>

using namespace std;

int main()
{int num1, num2;
 cout<<"Enter the numbers to be swapped(i.e num1 and num2):";
 cin>>num1>>num2;
 cout<<"The entered numbers are:\nnum1: "<<num1<<"\nnum2: "<<num2;
 int temp = num1;
     num1= num2;
     num2= temp;
 cout<<"\nAfter swapping the numbers are:\nnum1: "<<num1<<"\nnum2: "<<num2;
 return 0;
     
}
