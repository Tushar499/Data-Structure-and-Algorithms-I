#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    vector<int>arr(n);
    for(auto &i:arr)cin>>i;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            //cout<<arr[i]<<" ";
                break;
        }
            if(i==j){
                cout<<arr[i]<<" ";
        }
    }
    return 0;
}

