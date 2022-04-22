#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    if(n==1 || n==2)
    {
         cout<<"-1"<<endl;
         return;
    }
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    sort(arr, arr+n);

    int k = 1;
    for(int i=0;i<n;i++)
    {
         int cnt = 0;
         for(int j=0;j<n;j++)
         {
              if(arr[j] == k)
              {
                   cnt++;
              }
              else{
                   k++;
              }
              if(cnt>=3)
              {
                   cout<<arr[i]<<endl;
                   return;
              }

         }

         // int cnt = 0;
         // for(int j=0; j<n-1;j++)
         // {
         //      if(arr[i]==arr[j+1])
         //      {
         //           cnt++;
         //      }
         //      if(cnt>=3)
         //      {
         //           cout<<arr[i]<<endl;
         //           return;
         //      }
      }
         // cout<<"-1"<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        solve();
        cout<<t;
    }

}
