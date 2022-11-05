#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void Min_el(int arr[],int n,int i,int Min)
{
    if(i==n){
        cout<<"Min Element is : "<<Min<<endl;
        return;
    }
    if(Min>arr[i])Min=arr[i];
    i++;
    Min_el(arr,n,i,Min);


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    int Min=arr[0];
    Min_el(arr,n,0,Min);
    return 0;
}


