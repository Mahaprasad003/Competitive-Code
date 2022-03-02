#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,a,b;
    cin>>x>>a>>b;
    if(a + 2*b >=x)
    {
	    cout<<"Qualify"<<endl;
    }
    else{
	    cout<<"NotQualify"<<endl;
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
