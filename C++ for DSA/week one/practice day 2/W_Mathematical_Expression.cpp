#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,e;
    int ans;
    cin>>a>>s>>b>>e>>c;
    if(s=='+')
    {
        ans=a+b;
    }
    else if(s=='-')
    {
        ans=a-b;
    }
    else if(s=='*')
    {
        ans=a*b;
    }

    if(ans==c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<ans;
    }

    return 0;
}