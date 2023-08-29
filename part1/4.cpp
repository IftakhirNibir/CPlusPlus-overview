#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=5;
    a = a + 1;
    cout<<a<<endl; // 6
    cout<<a++<<endl; //it returns 6 because, first it read a then increment 1 
    cout<<a<<endl; // so it returns 7
    cout<<++a<<endl; //it returns 8 because first it increment then use/read 
    //Same way work for --a & ++a
    cout<<a--<<endl; // it return 8
    cout<<--a<<endl; //it return 6
}