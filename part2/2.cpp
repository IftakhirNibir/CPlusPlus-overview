/* Datatype int range is -10^9 to 10^9
            long int range is -10^12 to 10^12
            long long int range is -10^18 to 10^18*
Overflow concept: Every datatype has a ability to store limited range of 
data. But if we try to add more which is cross the limit then that is 
called overflow. If max range is over then it will take the data into min
range so here a cycle is created  
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100000;
    int b = 100000;
    cout <<a*b <<endl; //it should return 10000000000 but the range is over so return 10^9 range number
    //To solve this issue
    long int c = 100000;
    long int d = 100000;
    long int e = c*d;
    cout << e;
}