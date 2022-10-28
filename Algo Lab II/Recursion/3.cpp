#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

ll fibo(ll n){
    if(n==1)return 0;
    else if(n==2)return 1;
    else return fibo(n-1)+fibo(n-2);

}


int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}


