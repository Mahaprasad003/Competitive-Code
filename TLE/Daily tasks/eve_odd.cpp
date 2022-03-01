#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int arr[n];
	int eve=0,odd=0,pos=0,neg=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			if(arr[i]>0)
			{
				pos++;
			}
			else if(arr[i]<0){
				neg++;
			}
			eve++;
		}
		else if(arr[i]%2!=0)
		{
			if(arr[i]>0)
			{
				pos++;
			}
			else{
				neg++;
			}
			odd++;
		}
	}
	cout<<"Even: "<<eve<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg<<endl;

}
