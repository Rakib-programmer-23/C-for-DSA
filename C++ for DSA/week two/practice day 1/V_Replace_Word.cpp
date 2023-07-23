#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string replace=" ";
    string target="EGYPT";
    string current;
    string result;

    for(char c:s)
    {
        current=current+c;
        if(current.size()==target.size())
        {
            if(current==target)
            {
                result += replace;
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

    cout<<result;
      
    return 0;
}