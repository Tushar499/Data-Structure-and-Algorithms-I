#include<bits/stdc++.h>
using namespace std;

string remove_ws(string s)
{
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;

}


void conv_to_lower(string s)
{
	for(int i=0;s[i]!='\0';i++)
	{
		if (s[i]>='A' && s[i]<='Z')
			s[i]=s[i] + 32;
	}
	cout<<s;

}



int main()
{
    string s;
    getline(cin,s);
    int len= s.size();
    s=remove_ws(s);
    conv_to_lower(s);
    //cout<<s;
    return 0;
}



