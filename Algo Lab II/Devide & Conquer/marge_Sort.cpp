#include<iostream>
using namespace std;

#define INF 99999999

void _merge(int A[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1], R[n2+1];
    for (i=0; i<n1; i++)
    {
        L[i] = A[p+i];
        /// 0+0-1 = -1
    }
    for (int j=0; j<n2; j++)
    {
        R[j] = A[q+j+1];
        /// 3+0
    }
    L[n1] = INF;
    R[n2] = INF;
    /// complete yourself
    /// ...
    /*
    while (R[n1] < n1 && R[n2] < n2)
    {
        if (L[R[n1]]<= R[n2])
        {
            A[inleft]= L[R[n1]];
            R[n1]++;
        }
        else
        {
            A[inleft]= R[n2];
            n2++;
        }
        inleft++;
    }
    while (R[n1] < n1)
    {
        A[inleft]= L[R[n1]];
        R[n1]++;
        inleft++;
    }
    while (n2 < n2)
    {
        A[inleft]= R[n2];
        n2++;
        inleft++;
    }
    delete[] L;
    delete[] R;
    */
}


void merge_sort(int A[], int i, int j)
{

    if (i<j)
    {
        int mid = (i+j)/2;
        merge_sort(A, i, mid);
        merge_sort(A, mid+1, j);
        _merge(A, i, mid, j);
    }
}

void printArray(int A[], int n)
{
    for (auto i = 0; i < n; i++)
        cout << A[i] << " ";
}


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    merge_sort(A,0,n-1);
    printArray(A,n);
    return 0;
}

/**
5
5 3 -1 10 7
*/
