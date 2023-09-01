/* Reverse the string */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,sr;
    cin>>s;
    for(int i= s.size()-1; i>=0; i--){
        sr.push_back(s[i]);
     // sr = sr+s[i];       a new string is created by combining the current 
//value of sr and the current character s[i]. This can potentially lead to 
//more memory allocations and deallocations, making it less efficient 
//compared to using push_back().  
    }
    cout<<sr<<endl;
}
/* 
Using + for string concatenation might result in more memory 
overhead due to the creation of multiple intermediate strings, 
which can impact the performance of our program, especially for
larger strings.
On the other hand, using push_back() directly modifies the string
in place, adding characters to the end of the string without creating
intermediate strings. This approach is generally more memory-efficient
and can be faster in terms of execution time compared to using the 
+ operator.
*/