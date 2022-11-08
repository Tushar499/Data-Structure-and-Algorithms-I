#include<iostream>
using namespace std;

bool is_Odd(int n)
{
    if (n%2!=0) return true;
    else return false;
}

int sumOfOdds( int arr[], int i, int j )
{
    if (i==j)
    {
        if (is_Odd(arr[i])) return arr[i];
        else return 0;
    }
    else
    {
        int mid = (i+j)/2;
        int x = sumOfOdds(arr, i, mid);
        int y = sumOfOdds(arr, mid+1, j);
        return x+y;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<< sumOfOdds(arr, 0, n-1);
}


