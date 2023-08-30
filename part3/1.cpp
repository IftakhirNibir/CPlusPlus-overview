/* if-else condition in C++*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"This is even number";
    }
    else if(a%3==0){
        cout<<"This number is divided by 3";
    }
    else{
        cout<<"This is not even number";
    }
}