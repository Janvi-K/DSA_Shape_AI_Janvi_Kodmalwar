/*Write a program that takes n elements from the user ans displays the second largest element 
  of the array*/
#include <iostream>
using namespace std;
int main()
{
    int arr[100], N,  temp;
    cout<<"\n Enter the number of elements in array:";
    cin>>N;
    cout<<"\n Enter the elements in array: ";
    for(int i=1; i<=N; i++)
    {
        cin>>arr[i];
    }
  
    for(int i=1; i<=N; i++)
    {
        for(int j=i+1; j<=N; j++)
        {
            if(arr[i]<arr[j])
              {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
        }
        
    }
    cout<<"\n Sorted array : ";
    for(int i=1; i<=N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n Second largest element in the array is: "<<arr[2];
    return 0;
}

