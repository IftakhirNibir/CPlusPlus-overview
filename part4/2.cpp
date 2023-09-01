/* We can use adding operation, finding index in string */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2;
    str = "Hello";
    str2 = "Hello";
    cout<<str+str2<<endl; // HelloHello
    if(str==str2){
        cout<<"equal"<<endl;  //equal
    }
    else{
        cout<<"Not equal"<<endl;
    }
    cout<<str[0]<<endl; // H
    str[0] = 'A'; //we replace a char not str so use single quotation 
    cout<<str<<endl;
    cout<<str.size()<<endl; //finding the size of the string 
    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";   // A e l l o
    }
}