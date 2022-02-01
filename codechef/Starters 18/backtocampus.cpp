#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t,quotient,reminder;
    cin>>t;
    quotient = n / k;
    reminder = n % k;


    while(t--)
    {
    cin>>n>>k;
    quotient = n / k;
    reminder = n % k;
    {
        if (reminder == 0)
        {
            cout<<quotient<<endl;
        }
        else if(reminder != 0)
        {
            cout<<quotient + 1<<endl;
        }
    }
    }
    return 0;
}