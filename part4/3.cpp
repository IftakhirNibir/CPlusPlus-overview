/*getline function is taking input till it get the newline*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str); //this function use to take a single line of string 
    cout<<str<<endl;
}
/* If the input is like: Hello, My name is Bob
                         His name is Asif
 then the output is    : Hello, My name is Bob                        
                         */