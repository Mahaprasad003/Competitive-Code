#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,d;
    cin>>n;
    c = 0;
    d = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        arr[i] = x;
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if (c > d)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
    
}