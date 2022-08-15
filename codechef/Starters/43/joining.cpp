#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    if(k==n)
    {
         cout<<0<<endl;
    }
    else if(k<n)
    {
         cout<<n/5<<endl;
    }
    else{
         cout<<0<<endl;
    }
}

int main()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
