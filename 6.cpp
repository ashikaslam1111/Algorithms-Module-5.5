#include<bits/stdc++.h>
using namespace std;
char fun(string s);
int main()
{
    string s;
    cin>>s;
    cout<<fun(s);
    return 0;
}
char fun(string s)
{
    int l=s.size()/sizeof(char);
    if(l==0)return '0';
    else if(l==1&& s[0]>='A'&& s[0]<='Z')return s[0];
    else if(l==1&& s[0]>='Z')return '0';
    if(s[0]>='A'&& s[0]<='Z')return s[0];
    return fun(s.substr(1,l-1));
}
