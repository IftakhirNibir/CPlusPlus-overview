#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    double b;
    char c; //it always take one char
    cin>>a>>b>>c;// it ignore newline and extra spaces while taking inputs 
    cout<<a<<" "<<b<<" "<<c<<"\n";// this is also newline
    //We can use double quotion for string but single quotion for char
    cout<<(int) c; //return 57(ASCII value of 9)
}