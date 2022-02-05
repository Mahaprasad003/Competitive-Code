#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a>=c)
    {
        if(b>=c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    else if(b>=c && b>=a)
    {
        if(c>=a)
        {
            cout<<c;
        }
        else
        {
            cout<<a;
        }
    }
    else
    {
        if(a>=b)
        {
            cout<<a;
        }
        else{
            cout<<b;
        }
    }

    }
    

    return 0;
}