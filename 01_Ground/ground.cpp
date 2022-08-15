#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int cnt = 0;
    map<int, int> map;
    for(int i=0;i<n;i++)
    {
        cnt = 0;
        for(int j = 0; j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
            }
        }
        map[arr[i]] = cnt;       
    }
    int max_freq = 0, max_freq_count = 0;

    for(auto &pr : map)
    {
        if(pr.second > max_freq)
        {
            max_freq = pr.second;
            max_freq_count = 1;
        }
        else if(pr.second == max_freq)
        {
            max_freq_count++;
        }
    }
    if(max_freq_count == 1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





    // for(auto &pr :map)
    // {
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){solve();}
}