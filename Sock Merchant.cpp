#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101]={0};
    int n,ans = 0;
    cin>>n;
    memset(a,0,sizeof(a));
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a[temp]++;
        if(a[temp]==2)
        {

            a[temp] = 0;
            ans++;
        }

    }
    cout<<ans<<endl;

    return 0;
}
