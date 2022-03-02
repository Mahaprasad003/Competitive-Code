#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = c/a;
    int y = d/b;
    cout<<x<<endl;
    cout<<y<<endl;
    // if(x<y)
    // {
	//     cout<<-1<<endl;
    // }
    // else if(x>y)
    // {
	//     cout<<1<<endl;
    // }
    // else{
	//     cout<<0<<endl;
    // }

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
