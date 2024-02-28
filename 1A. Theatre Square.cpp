#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    long long c = static_cast<long long>((m-1)/a+1);
    long long d = static_cast<long long>((n-1)/a + 1);
    cout<<c*d;
    return 0;
}