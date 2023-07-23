#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
   char t='$';
   for(int i=0;i<n;i++)
   {
     string s;
     string x;
     string current ;
     string result;
     cin>>s;
     cin>>x;
     int length=s.size();
     for(char c :s)
     {
        current+=c;
        if(current.size()==x.size())
        {
            if(current==x)
            {
            result+=t;
            current="";
            }
            else
            {
                result+=current[0];
                current.erase(0,1);
            }
        }
       

     }
     result+=current;

     cout<<result<<endl;

     
   
    
   }
      
    return 0;
}