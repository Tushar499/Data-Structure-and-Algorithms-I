#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Number of elements you want to sort\n";
    cin>>n;

    int A[n];
    cout<<"Enter the elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    for(int i=1; i<n; i++)
    {

        while(A[i-1]>A[i] && i>0)
        {
            int x=A[i-1];
            A[i-1]=A[i];
            A[i]=x;
            i--;
        }
    }
    cout<<"sorted list\n";
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
