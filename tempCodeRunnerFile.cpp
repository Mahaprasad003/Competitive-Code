#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t>>x>>y>>z;

    while(t--){
    if ( x + y < z || x + y == z)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    
    
    return 0;
}