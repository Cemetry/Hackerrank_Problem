#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    int tc;
    cin>>tc;
    while(tc--)
    {
         cin>>x1>>y1>>x2>>y2;
         cout<<x1+2*(x2-x1)<<" "<<y1+2*(y2-y1)<<endl;
    }
    return 0;

}
