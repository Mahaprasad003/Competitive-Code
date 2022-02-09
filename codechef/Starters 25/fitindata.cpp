#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int x; cin>>x;
		if(x<=n)
		{
			cout<<x<<endl;
		}
		else{
			cout<<x-n-1<<endl;
		}

	}
}
