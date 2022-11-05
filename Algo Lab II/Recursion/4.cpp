#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define nl  "\n"

bool palindrome(int i,string s,int n)
{
    if(i>=n/2)
        return true;
    if(s[i]!=s[n-1-i])
        return false;
    return palindrome(i+1,s,n);

}


int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); ///Upper to Lower if any
    //cout<<s<<nl
    s.erase(remove(s.begin(), s.end(), ' '), s.end());  ///removed space if any
    int n=s.size();
    //cout<<s<<nl;
    bool flag=palindrome(0,s,n);
    (flag)?cout<<"True\n":cout<<"False\n";
    return 0;
}



