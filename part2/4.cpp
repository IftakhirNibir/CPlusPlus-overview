/*Find the area of rectangle. Given rectangle of length l and b
range
 1 <=l <= 10^9 
 1 <=b <= 10^9
 input:3 4 
 outut:12*/
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,b;
    cin>>l>>b;
    cout<<l*b<<endl; 
}
/*Why long long int or 1LL?
  Because 10^9*10^9 = 10^18*/
/* we need to use int or long long int, don't need to use long int. because
it sometimes making error in another local machine*/
//or,
// int main()
// {
//     int l,b;
//     cin>>l>>b;
//     cout<<l*1LL*b<<endl; 
// }

