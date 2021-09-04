#include <bits/stdc++.h>
using namespace std;

void gradingStudents() {
     int n, x;
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        cout<<x<<endl;
     }
}

int main () {
    gradingStudents();
    return 0;
}