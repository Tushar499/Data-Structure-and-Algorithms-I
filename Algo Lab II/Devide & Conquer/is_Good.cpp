#include<iostream>
using namespace std;

bool is_good(int n)
{
    if (n%11==0) return true;
    else return false;
}

int sum_of_good( int arr[], int i, int j )
{
    if (i==j)
    {
        if (is_good(arr[i])) return arr[i];
        else return 0;
    }
    else
    {
        int mid = (i+j)/2;
        int x = sum_of_good(arr, i, mid);
        int y = sum_of_good(arr, mid+1, j);
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
    cout << sum_of_good(arr, 0, n-1);
}


