#include<bits/stdc++.h>
using namespace std;

int main(){

    double n,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res+=x;
    }
    cout<<fixed<<setprecision(2)<<res/n<<endl;
    return 0;
}
