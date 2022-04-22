#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    if(n>=1900)
    {
         cout<<"Division 1"<<endl;
    }
    else if(n>=1600 && n<=1899)
    {
         cout<<"Division 2"<<endl;
    }
    else if(n>=1400 && n<=1599)
    {
         cout<<"Division 3"<<endl;
    }
    else
    {
         cout<<"Division 4"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
