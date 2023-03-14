#include<bits/stdc++.h>
using namespace std;
int rev(string s);
int main()
{
    string s;
    cin>>s;
    int sum=rev(s);
    cout<<sum;
    return 0;
}
int  rev(string s)
{
    int l=s.size()/sizeof(char);
    if(l==1)return s[0]-48;
    else if(l==0)return 0;
    char a,b;
    a=s[l-1];
    b=s[0];
    return a-48+rev(s.substr(1, l-2))+b-48;
}
