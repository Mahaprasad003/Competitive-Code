#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     int minn = INT_MAX;
     int temp;
     for(int i=1;i<n;i++)
     {
          for(int j=i+1;j<=n;j++)
          {
               temp = arr[i-1] + arr[j-1] + (j) - (i);
               minn = min(temp,minn);
          }
     }
     cout<<minn<<endl;

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
