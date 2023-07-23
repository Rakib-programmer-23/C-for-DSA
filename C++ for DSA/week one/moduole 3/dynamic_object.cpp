#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
          int roll;
          int cls;
          char section;
          string name;

          student(int r,int c, char s,const string & n)
          {
                roll=r;
                cls=c;
                section=s;
                name=n;
          }
};
int main()
{
    student * rahim= new student(25,7,'C',"Rahim Ullah");

    cout<<rahim->roll<<endl;
    cout<<rahim->name<<endl;
    cout<<rahim->section<<endl;
      
    return 0;
}