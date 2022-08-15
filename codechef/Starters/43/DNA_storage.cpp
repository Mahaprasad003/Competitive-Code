#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string res = "";

    // for(int i=0;i<n;i+=2)
    // {
    //      if(s[i]=='0' && s[i+1] == '0'){
    //                    res+='A';
    //                }
    //       else if(s[i]=='0' && s[i+1] == '1'){
    //                     res+='T';
    //                }
    //       else if(s[i]=='1' && s[i+1] == '0'){
    //                     res+='C';
    //                }
    //       else{
    //                     res+='G';
    //                }
    //            }
    //            cout<<res<<endl;


    for(int i=0;i<n;i+=2)
    {
         if(s[i]=='0' && s[i+1] == '0'){
              cout<<'A';
         }
         else if(s[i]=='0' && s[i+1] == '1'){
              cout<<'T';
         }
         else if(s[i]=='1' && s[i+1] == '0'){
              cout<<'C';
         }
         else{
              cout<<'G';
         }
    }
    cout<<endl;
}
//     //
//     // if(s[n-2]=='0' && s[n-1] == '0'){
//     //      cout<<'A';
//     // }
//     // else if(s[n-2]=='0' && s[n-1] == '1'){
//     //      cout<<'T';
//     // }
//     // else if(s[n-2]=='1' && s[n-1] == '0'){
//     //      cout<<'C';
//     // }
//     // else{
//     //      cout<<'G';
//     // }
//
// }


int main()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }

}
