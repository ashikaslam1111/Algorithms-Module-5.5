#include<bits/stdc++.h>
using namespace std;
string rev(string s);
int main()
{
    string s;
    cin>>s;
    s=rev(s);
    cout<<s;
    return 0;
}
string rev(string s)
{
    int l=s.size()/sizeof(char);
    if(l<=1)return s;
    char a,b;
    a=s[l-1];
    b=s[0];
    return a+rev(s.substr(1, l-2))+b;
}

