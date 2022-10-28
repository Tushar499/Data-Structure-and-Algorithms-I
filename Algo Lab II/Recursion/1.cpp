#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

ll fact(ll n){
    if(n==0){
        return 1;
    }else return fact(n-1)*n;

}


int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
