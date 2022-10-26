#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(auto &i:arr)cin>>i;
    for(int i=0; i<n; i++)
    {
        if(mp.find(arr[i])== mp.end())
        {
            mp[arr[i]]=1;
        }
        else
        {
            mp[arr[i]]++;
        }
    }
    for(auto &it : mp)
        cout<<it.first<<" occurs "<<it.second<<" times\n";


}

