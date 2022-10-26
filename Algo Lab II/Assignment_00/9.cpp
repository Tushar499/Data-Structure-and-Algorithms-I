#include<bits/stdc++.h>
using namespace std;

typedef struct Person
{
    string name;
    int height;
    int age;
}employee;

bool compare(employee a, employee b)
{
    if(a.height > b.height)
    {
        return 1;
    }
    else if(a.height==b.height)
    {
        if(a.age>b.age)
        {
            return 1;
        }
        else return 0;
    }
    else return 0;

}

int main()
{
    int n;
    cin>>n;
    employee persons[n];
    n+=1;
    while(n--)
    {

        for (int i=0; i<n; i++)
        {
            cin>>persons[i].name;
            cin>>persons[i].height;
            cin>>persons[i].age;
        }

        sort(persons,persons+n,compare);
        //cout<<"Employees\n";
        for (int i=0; i<n; i++)
        {
            cout<<persons[i].name<<" ";
            cout<<persons[i].height<<" ";
            cout<<persons[i].age<<endl;
        }


    }
    return 0;
}
