/*
 Input: 2
        Hi, my name is bob
        and he is my friend
output: Hi, my name is bob
        and he is my friend
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore(); //if we not use this the final output also consider the test case number
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
}
/*
without using cin.ignore() the output is like -> 
                                                Hi, my name is bob
*/