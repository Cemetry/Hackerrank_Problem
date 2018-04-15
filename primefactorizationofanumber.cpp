#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{ int sum = 0;
    while(n%2==0)
    {
        cout<<"2"<<" ";
        n/=2;
    }
    for(int i = 3;i<=n;i+=2)
    {
        while(n%i==0)
        {

            cout<<i<<" ";
            n/=i;
        }


    }

    //if n is greater than 2 and a prime number
    if(n>2)
    {
        cout<<n<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    while(cin>>n)
    {
        prime(n);
    }
    return 0;
}
