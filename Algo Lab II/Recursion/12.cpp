#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

double Average(int arr[],int i,int n)
{
    if (i == n-1)
      return arr[i];
   if (i == 0)
      return ((arr[i] + Average(arr, i+1, n))/n);
      return (arr[i] + Average(arr, i+1, n));


}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr)cin>>i;
    cout<<Average(arr,0,n);
    return 0;
}



