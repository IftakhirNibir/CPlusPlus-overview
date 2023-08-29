/*Double datatype store long values definately but it show precision error
for storeing very long value. So during our contest we need to avoid this
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100000;
    int b = 100000;
    long int c = a*b;
    cout <<c <<endl; // it also not showing the exact output because both value are int
    // To convert the value into long long integer
    long int d = a*1LL*b;
    cout << d <<endl; //return exact output
    double e = 100000;
    double f = 100000;
    double g = e*f;
    cout<<g<<endl; //it returns 1e+10 also correct answer. 
    //if we want to remove scientific notation use 'fixed'
    cout <<fixed<<g<<endl;//now it returns 10000000000.000000
    //if we want to remove extra zero then
    cout <<fixed<<setprecision(0)<<g<<endl; //now it returns 10000000000
}