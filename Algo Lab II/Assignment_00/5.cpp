#include<bits/stdc++.h>
using namespace std;

void calc_factorial(int n1,int n2)
{
    int fact=1;
    int n=n2-n1+1;
    if (n1 < 0)
        cout <<"Doesn't Exist!";
    else
    {
        while(n--){
        for(int i=1; i<=n1; i++)
        {
            fact*= i;
        }

            cout<<n1<<"! = ";
            for(int j=n1; j>=1; j--)
            {
                if(j!=1)
                cout<<j<<" X ";
            }
            cout<<"1 = "<<fact<<endl;
            n1++;
            fact=1;
        }

    }
}



int main()
{
    int num1,num2;
    cin>>num1>>num2;
    calc_factorial(num1,num2);
    return 0;
}


