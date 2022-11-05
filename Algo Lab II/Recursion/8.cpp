#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void printArr(int arr[],int n,int i,int res)
{
    if(i==n){
        cout<<res<<endl;
        return;
    }
    res+=arr[i];
    i++;
    printArr(arr,n,i,res);


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    printArr(arr,n,0,0);
    return 0;
}





