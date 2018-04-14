/**Sum the digits. The result must be divisible by 3**/
#include<iostream>
using namespace std;
int main()
{
    long tc;
    long n;
    long sum;
    long  a[1001];
    cin>>tc;
    while(tc--)
    {
        sum = 0;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i = 0;i<n;i++)
        {
             sum+=a[i];
        }
        if(sum%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
