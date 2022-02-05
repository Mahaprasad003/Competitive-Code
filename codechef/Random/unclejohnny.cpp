#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>k;
		int john = arr[k-1];
		int f = sizeof(arr) / n;
		sort(arr, arr + f);
		for(int i=0;i<n;i++)
		{
			if(arr[i]==john)
			{
				cout<<i+1<<endl;
			}
		}


	}
}
