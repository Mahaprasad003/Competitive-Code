#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t; cin>>t;

	while(t--)
	{
		long long prod=1, res=INT_MIN;
		long long n;cin>>n;
		long long arr[n];
		for(long long i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long maxx = INT_MIN;
		for(long long i=0;i<n-1;i++)
		{
			maxx = max(arr[i]*arr[i+1],maxx);

			// long long maxx, minn;
			// maxx = arr[i];
			// minn = arr[i];
			// for(long long j=i+1;j<n;j++)
			// {
			// 	maxx = max(maxx,arr[j]);
			// 	minn = min(minn,arr[j]);
			// 	prod = maxx*minn;
			// 	res = max(res, prod);
			// }

		}
		cout<<maxx<<endl;
	}

}
