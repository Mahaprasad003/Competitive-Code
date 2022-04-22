#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
         int x; cin>>x;
         v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
         if(i != n)
         {
              cout<<v[i]<<" ";
              if(i==n-1)
              {
                   return;

              }
              cout<<v[n-1]<<" ";
              n = n-1;

         }

         // 1 2 3 4 5
    }
}

int main()
{
    solve();

}
