#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
     unordered_set<int>s;
    for(auto &i:arr)
    {
            cin>>i;
            s.insert(i);
    }
    for(auto it:s){
    cout<<it<<" ";
    }

    return 0;
}


