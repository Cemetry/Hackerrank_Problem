/**Summing the N series***/
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int t,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n%=1000000007;
        res=n*n%1000000007;;//(n*(2*n-1+1)/2)

        cout<<res<<endl;
    }
    return 0;
}
