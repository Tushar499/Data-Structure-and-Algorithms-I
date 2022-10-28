#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

ll power(ll x,ll y){
    if(y==0)return 1;
    return power(x,y-1)*x;

}


int main(){
    int x,y;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}

