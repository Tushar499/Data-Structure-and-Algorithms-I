#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
   if (y == 0)
   return x;
   return gcd(y, x % y);
}

int getLCM( int n1, int n2)
{
    return (n1/gcd(n1, n2))*n2;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<getLCM(x,y)<<endl;

}

