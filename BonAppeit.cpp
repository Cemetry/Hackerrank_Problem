#include<iostream>
using namespace std;
int main()
{
    int n,k;
 int sum = 0;
    int b;
    cin>>n>>k;
       int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>b;
    for(int i = 0;i<n;i++)
    {
        sum+=a[i];
    }
    int d = sum - a[k];
    int div = d/2;
    if((b-div)<=0)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<(b-div)<<endl;
    }

    return 0;


}
