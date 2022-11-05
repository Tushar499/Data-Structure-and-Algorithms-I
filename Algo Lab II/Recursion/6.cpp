#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void print_Arr(int arr[],int n,int i)
{
    if(i==n){
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    print_Arr(arr,n,i);


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    print_Arr(arr,n,0);
    return 0;
}




