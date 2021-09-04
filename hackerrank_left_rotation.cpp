#include<iostream>
using namespace std;

int main()
{   int  N, d, temp; 
    cout<<"\n Enter the number of elements in the array: ";
    cin>>N;
    int arr[N];
    cout<<"\n Enter the elements of the array: ";
    for(int i=1; i<=N; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n  Upto how many steps you want to rotate the array?";
    cin>>d;
     
    
    for(int i=1;i<=d;i++)
       { temp=arr[1];
        for(int j=1;j<=N;j++)
        {
           arr[j]=arr[j+1];
        }
        arr[N]=temp;
       }
    cout<<"Array after rotation: ";
    for(int i=1; i<=N; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}