#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		//sorting the array
		int k = sizeof(arr) / sizeof(arr[0]);
		sort(arr, arr + k);
		int high = arr[n-1];
		int cnt = 0;

		cout<<arr[n-1]-arr[0]<<endl;
		// while(arr[0]!=high)
		// {
		// 	for(int j=0;j<n;j++)
		// 	{
		// 		if(arr[j]!=high)
		// 		{
		// 			arr[j] = arr[j]+1;
		// 		}
		//
		// 	}
		// 	cnt++;
		// }
		// cout<<cnt<<endl;

	}
}
