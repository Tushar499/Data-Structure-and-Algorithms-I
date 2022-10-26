///6. Using STL
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


void reverse_array(int arr[],int n){
      reverse(arr,arr+n);
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    reverse_array(arr,n);
    print_array(arr,n);
    return 0;
}

