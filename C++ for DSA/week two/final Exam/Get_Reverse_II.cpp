#include<bits/stdc++.h>
using namespace std;
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    
};

int main() 
{
    int N;
    cin >> N;
    cin.ignore();

    Student data[N];
    for (int i = 0; i < N; i++) 
    {
        cin >>data[i].name >> data[i].cls >> data[i].s >> data[i].id;
        cin.ignore();
    }

    for (int i = 0; i<N; i++)
    {
        
       
       cout<<data[i].name<<" "<<data[i].cls<<" "<<data[i].s<<" ";
      
       for(int j=N;j>0;j--)
       {
      
        cout<<data[N-i-1].id<<" ";
        
      break;
       }
      
       cout<<endl;
       
       
    }

    return 0;
}