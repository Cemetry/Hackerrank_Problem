#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,sum = 41;
    cin >> y;
    if(y==1918)
        sum-=15;
    else if(y>1918)
        sum-=((y%4==0&&y%100!=0)||(y%400==0)?29:28);
    else
        sum-=(y%4!=0)?28:29;
    cout<<sum<<".09."<<y<<endl;
    return 0;
}
