#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
{   int len;
    int count=1; 
    cout<<"\n Enter the string: ";
    cin>>s;
    int i=0;
    len=s.length();
    while(i<len)
    {  
        if(s[i]>='A'&& s[i]<='Z')
          count++;
        i++;
    }
    
    return count;
}
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}








/*#include<string.h>
using namespace std;
int main()
{   char s[20],len;
    int count=1; 
    cout<<"\n Enter the string: ";
    cin>>s;
    int i=0;
    len=strlen(s);
    while(i<len)
    {  
        if(s[i]>='A'&& s[i]<='Z')
          count++;
        i++;
    }
    cout<<"\n Total number of words in the string are: "<<count;
    return 0;

}*/