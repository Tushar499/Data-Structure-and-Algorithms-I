#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

void even_Num(ll x,ll y)
{
    if(x>y)return;
    else
    {
        if(x%2==0)cout<<x<<" ";
        even_Num(x+1,y);
    }
}


int main()
{
    int x,y;
    cin>>x>>y;
    even_Num(x,y);
    return 0;
}


