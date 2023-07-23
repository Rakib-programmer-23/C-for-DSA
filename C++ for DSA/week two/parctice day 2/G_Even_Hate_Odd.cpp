#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++ )
    {
        int n;
        cin>>n;
        int even=0;
        int odd=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n%2==0)
        {
            for(int i=0;i<n;i++)
             {
                if(a[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
             }
             if(even==odd)
             {
                cout<<"0"<<endl;
             }
             else if(even==n || odd==n)
             {
                if(even==n)
                {
                    cout<<(even)/2<<endl;
                }
                else
                {
                    cout<<(odd/2)<<endl;
                }
             }
             else if(even>odd || odd>even)
             {
                if(even>odd)
                {
                    cout<<odd+1<<endl;
                }
                else
                {
                    cout<<even+1<<endl;
                }

             }

        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
   
      
    return 0;
}