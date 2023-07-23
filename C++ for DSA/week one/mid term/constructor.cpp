/*[Constructor]
->> A constructor is a special function ,which is generally named after the name of the Class.

->> Besides a constructor is called automatically when  an object is initialized in the main function of the programme.

->> Though it is a function but it doesn't have any return type.

## WE need a constructor because:

>> with the help of a constructor we can easily initialize an object in one line.

[Creating a constructor]

#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        string  name;
        int roll;
        char section;
        int cls;

        student(int r,int c,char s,const string & n) // This is a Constructor//
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
    cout<<rakib.roll<<endl;
    
     return 0;
}





*/