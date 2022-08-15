#include<bits/stdc++.h>
#include<numeric>

using namespace std;

void solve()
{
    int n; cin>>n;

    int min_f, cnt = 0;


    for(int i=1;i<n;i++)
    {
         for(int j=1;j<n;j++)
         {
              if(i+j==n)
              {
                   int gcd_n = __gcd(i,j);
                   int lcm_n = (i*j)/gcd_n;
                   int f = gcd_n + lcm_n;
                   min_f = min(f, min_f);
              }
         }
    }

    for(int i=1;i<n;i++)
    {
         for(int j=1;j<n;j++)
         {
              if(i+j == n)
              {
                   int gcd_n = __gcd(i,j);
                   int lcm_n = (i*j)/gcd_n;
                   int f = gcd_n + lcm_n;
                   if(f == min_f)
                   {
                        cnt++;
                   }
              }
         }
    }
    cout<<cnt<<endl;5

    // min_f = MIN(gcd(a,b) + lcm(a,b))
    // cnt++:
    //    if min_f == f


}

int main()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
