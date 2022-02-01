#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int num,rem,temp,cnt=0; cin>>num;
		temp = num;
		for(int i=0;temp>0;i++)
		{
			temp = temp/10;
			cnt++;
		}
		if(cnt==2)
		{
			if(num%7==0)
			{
				if(num%10==0)
				{
					num = num/10;
				}
				else{
					num=num;
				}
			}
			else
			{
				rem = num%7;
				num = num-rem;
			}

			if(num%10==0)
			{
				num = num/10;
			}
			cout<<num<<endl;
		}
		else
		{	int k;
			rem = num%7;
			k = 7-rem;
			cout<<num+k;

		}

		}


}
