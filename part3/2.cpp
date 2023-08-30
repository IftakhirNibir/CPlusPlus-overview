/* Loop in C++
   for(initialisation;condition;operation){

   }
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    while(i<=10){
        cout<<i<<endl;//return 0 to 10
        i++;
    }
    
    for(int j=0;j<=10;j++){
        cout<<j<<endl;
    }

    int k=2;
    for(;k<=6;){
        cout<<k++<<endl;
    }
    
    for(int p=1 ;p<=10; cout<<p++<<endl){
    }
}