//program to print fibonacci series upto nth term
// 0, 1, 1, 2, 3, 5, 8, 13, 21,34 ,-------
#include <iostream>
using namespace std;
int main()
{
   int N;
   int a=0, b=1, next;
   cout<<"\n Enter the number of terms to be printed in fibonacci series: ";
   cin>>N;
   
   cout<<"\n Fibonacci series: ";
   for(int i=0; i<N; i++)
   {
       cout<<a<<" ";
       next=a+b;
       a=b;
       b=next;
   }
   return 0;
}
