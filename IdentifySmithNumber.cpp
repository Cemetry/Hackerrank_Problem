#include<bits/stdc++.h>
using namespace std;
int getsumdigit(int n)
{
    int dig;
    int sum = 0;
    while(n!=0)
    {
        dig = n%10;
        sum+=dig;
        n/=10;
    }
    return sum;
}
void idensmit(int n)
{
    int sum;
    sum = getsumdigit(n);

    int factorsum = 0;
    int i = 2;
    while(i<sqrt(n))
    {
        if(n%i==0)
        {
            n/=i;
            factorsum+=getsumdigit(i);
        }
        else
        {
            i++;
        }
    }
    if(n>1)
    {
        factorsum+=getsumdigit(n);
    }
    if(factorsum==sum)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    idensmit(n);
    return 0;
}
