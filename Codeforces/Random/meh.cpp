//WAP to write a program to pass the array through function and find factorial of each number and store
//it in another array
#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
	int arr[n];
	int fact[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int res=1;
		for(int j=1;j<=arr[i];j++)
		{
			res = res*j;
		}
		fact[i]=res;
	}

	for(int i=0;i<n;i++)
	{
		cout<<fact[i]<<'\t';
	}
}

int main()
{
	cout<<"Enter n: ";
	int n; cin>>n;
	func(n);

}
