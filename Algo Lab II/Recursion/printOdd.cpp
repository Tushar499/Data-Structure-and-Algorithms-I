#include<bits/stdc++.h>
using namespace std;

void print_odd(int arr[], int n)
{
    if (n<0) return;
    else
    {
        print_odd(arr,n-1);
        if (arr[n]%2!=0)
            cout << arr[n] << " ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    print_odd(arr, n-1);
}
