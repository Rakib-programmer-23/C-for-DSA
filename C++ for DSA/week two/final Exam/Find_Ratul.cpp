#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   string x="Ratul";
   stringstream ss(s);
   string word;
   bool found=false ;
  

   while(ss>>word)
   {
    if(word.size()==x.size())
    {
        if(word==x)
        {
           found=true;
            break;
      
        }
   
    }
   }

   if(found)
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }
   
  

   
      
    return 0;
}