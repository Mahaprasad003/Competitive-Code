#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,v;
    // n-> Length before removal
    // k-> Number of elements removed
    // v-> Mean
    cin>>n>>k>>v;
    int arr[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
         long long x; cin>>x;
         s +=x;

    }

    if((v*(n+k)-s)%k)
    {
         cout<<"-1"<<endl;
    }
    else{
         long long res = (v*(n+k)-s)/k;
         if(res<=0)
         {
              cout<<"-1"<<endl;
         }
         else{
              cout<<res<<endl;
         }
    }


    // 3 3 4
    // n k v

    // 2 7 3 4 4 4
    // (2+7+3+4+4+4)/6
    // (a+b+c+k+k+k+...)/n+k = v;
    // v*(n+k) = (d + m+m+m+m...)
    // v*(n+k)-d = mk;
    // v * (n+k) - d/k= m
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
