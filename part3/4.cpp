/* Question: Print all the entered number and when the number is 44 then 
stop
inputs: 1 2 45 96 44 85 69
outputs: 1 
         2
         45
         96
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(true){
        cin>>t;
        if(t==44){
            break;
        }
            cout<<t<<endl;
        }
}