#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int holi[8] = {6,7,13,14,20,21,27,28};
    int n; cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<8;j++)
	    {
		    if(arr[i] == holi[j])
		    {
			    cnt++;
		    }
	    }
    }
    cout<<8+n-1<<endl;
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
