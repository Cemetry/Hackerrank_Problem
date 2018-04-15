/******Closest number ****/
/**
problem explanation:
mx = a^b
m = exp(blog(a)-log(x))
ans = m*x
**/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   cout.precision(10);
   int tc;
   cin>>tc;
   while(tc--)
   {
       double a,b,x;
       cin>>a>>b>>x;
       cout<<round(exp(b*log(a)-log(x)))*x<<endl;
   }
    return 0;
}
