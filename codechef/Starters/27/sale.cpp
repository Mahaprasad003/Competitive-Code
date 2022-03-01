#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int arr[3];
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		int min=arr[0];
		sort(arr,arr+3);
		cout<<arr[1]+arr[2]<<endl;
		// for(int i=0;i<3;i++)
		// {
		// 	if(arr[i]<min)
		// 	{
		// 		min = arr[i];
		// 	}
		// }
		// int sum=0;
		// for(int i=0;i<3;i++)
		// {
		// 	if(arr[i]>=min)
		// 	{
		// 		sum +=arr[i];
		// 	}
		// }

	}
}
