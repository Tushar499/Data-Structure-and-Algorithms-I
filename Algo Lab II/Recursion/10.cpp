#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void printArr(int arr[],int n,int i,int Max)
{
    if(i==n){
        cout<<"Max Element is : "<<Max<<endl;
        return;
    }
    if(Max<arr[i])Max=arr[i];
    i++;
    printArr(arr,n,i,Max);


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    int Max=arr[0];
    printArr(arr,n,0,Max);
    return 0;
}

