//Write program to find greater out of 3 numbers
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"\n Enter the three numbers (i.e num1, num3, num3):";
    cin>>num1>>num2>>num3;
    if((num1>=num2) && (num1>=num3))
       cout<<" "<<num1<<"(num1) is greater";
    else if((num2>=num1) && (num2>=num3))
       cout<<" "<<num2<<"(num2) is greater";
    else
       cout<<" "<<num3<<"(num3) is greater";
    return 0;
}