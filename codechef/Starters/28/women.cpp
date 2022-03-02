#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
	    if(arr[i]>=10 && arr[i]<=60)
	    {
		    cnt++;
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
