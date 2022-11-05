#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void printArr(int arr[],int n,int i)
{
    if(i==n){
        return;
    }
    cout<<arr[n-1]<<" ";
    n--;
    printArr(arr,n,i);


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    printArr(arr,n,0);
    return 0;
}
