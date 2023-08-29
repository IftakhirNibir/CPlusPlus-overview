/* Any calculation meantains a sequence of order the datatypes sequence are 
given below:
            1. char
            2. int  
            3. long int
            4. long long int
            5. float
            6. double*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << 7/2 <<endl; // returns 3 
    cout << 7/2.0 <<endl; //returns 3.5
    cout << 'c'+1 <<endl; // returns 100 (ASCII 'c'=99)
    double a = 3/2; //returns 1 because number are integer
    cout << a <<endl;
    cout << 7/2*3 <<endl;//returns 9 because '*','/','%' works from left to right
    cout << 3*7/2 <<endl; //returns 10 because works from left to right
}

