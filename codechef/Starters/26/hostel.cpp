#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int sum=x;
		int maxx = INT_MIN;
		for(int i=0;i<n;i++)
		{
			sum = sum+arr[i];
			maxx = max(maxx,sum);
		}
		if(x>maxx)
		{
			cout<<x<<endl;
		}
		else
		{
			cout<<maxx<<endl;
		}

	}

}
