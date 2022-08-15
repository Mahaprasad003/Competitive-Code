#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
         int x; cin>>x;
         v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
         if(v[i]<=k)
         {
              k -= v[i];
              cout<<"1";
         }
         else{
              cout<<"0";
         }
    }
    cout<<endl;
    // int i=0;
    // while(k>0)
    // {
    //    if(v[i]<k && k>0)
    //    {
    //         k = k-v[i];
    //         cout<<"1";
    //    }
    //    else{
    //         cout<<"0";
    //    }
    //    i++;
    // }
    // cout<<endl;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
