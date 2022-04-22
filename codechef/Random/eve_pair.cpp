#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a; cin>>a;
    int b; cin>>b;
    int greater,smaller;
    int cnt=0;
    if(a>b)
    {
          greater = a;
          smaller = b;
    }
    else{
          smaller = b;
          greater = a;
    }


    for(int i=0;i<=greater;i++)
    {
         for(int j=0;j<=smaller;j++)
         {
              if(i + j % 2 == 0)
              {
                   cnt++;
              }
         }
    }
    cout<<cnt<<endl;
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
