/**Fibonacci Efficient DP programming**/
/*Author: Tanim Ahmed
**/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib[n];
    fib[0]=fib[1]=1;
    for(int i = 2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(int i = 0;i<n;i++)
    {
        cout<<fib[i]<<" ";
    }
    return 0;
}
/**Learn From Asif**/