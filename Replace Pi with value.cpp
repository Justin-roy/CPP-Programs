#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ReplacePI(string s)
{
    if(s.length()==0)
        return;

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        ReplacePI(s.substr(2));
    }
    else{
        cout<<s[0];
    ReplacePI(s.substr(1));
    }
}
int main()
{
    ReplacePI("pipppiiiipippiip");
return 0;
}
