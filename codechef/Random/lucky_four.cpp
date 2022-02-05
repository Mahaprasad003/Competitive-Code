#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,num,count,r;
    cin>>t;
    
    while(t--)
    {
        cin>>num;
        count =0;
        for(int i =0;i<=num;i++)
        {
            
            r = num % 10;
            if(r ==4)
            {
                count++;
            }
            num = num/10;
        }
        cout<<count<<endl;
    }
    
    return 0;
}