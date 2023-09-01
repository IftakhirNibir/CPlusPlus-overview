/* we can take large number using string.So we can also handle our 
mathematical operation using string
  */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="123456789632587412366874589645554528423664745858";
    cin>>s;
    int last_digit = s[s.size()-1] - '0'; //without -'0' it return ASCII value
    cout<<last_digit<<endl;
}

