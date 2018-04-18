
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int d,m;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    cin>>d>>m;
int cnt = 0;
    int x,sum = 0;
    for(int i = 0;i<=n-m;i++){
        for(int j = i,x=1;x<=m;x++,j++){
            sum+=a[j];
        }
        if(sum==d)
        {
            cnt++;
        }
        sum=0;
    }
    cout<<cnt<<endl;
}
