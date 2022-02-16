#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		//n = total no of ppl who want to travel
		//x = emmision by bus
		//y= emmision by car
		int res=0;
		int remain=n;;
		if(x<=y)
		{
			for(int i=0;remain!=0;i++)
			{
				remain = n-100;
				if(remain<0){
					remain = 0;
				}
				else{
					remain =remain;
				}
				res++;
			}
			cout<<res;

		}


	}
}
