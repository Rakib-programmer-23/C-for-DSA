#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int flag=0;
    int a[n];
    int i,j;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        
        if(a[i]==a[j]) flag=1;
        else
        {
            flag=0;
           break;
        }
        
    }

    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
      
    return 0;
}