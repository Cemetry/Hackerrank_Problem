#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5,0);
    int n;
    cin>>n;
    int m;
    while(n--){
        cin>>m;
        ++v[m-1];

    }
    m=0;
    for(int i = 1;i<5;i++)
    {
        if(v[i]>v[m])
            m = i;
    }
    cout<<m+1<<endl;

    return 0;
}
