#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        string  name;
        int roll;
        char section;
        int cls;

        //constructor is function and class name and constructor will be same 
        //this function will do,t have any return type

        student(int r,int c,char s,const string & n)
        {
            roll=r;
            cls=c;
            section=s;
            name=n;

        } 
};
int main()
{
    student rakib(12,10,'D',"RAKIB HASSAN");
    student karim(5,9,'A',"karim ullah");

    cout<<rakib.roll<<endl;
    cout<<rakib.section<<endl;
    cout<<rakib.cls<<endl;
    cout<<rakib.name<<endl;

    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.name<<endl;

   

    
      
    return 0;
}
