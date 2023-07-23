#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

};

int main()
{
    student rakib;//s is a group,so we cnt write s=
    rakib.roll=23;
    rakib .section='A';
    rakib .cls=9;
    char nm[100]="Rakib";
    strcpy(rakib.name,nm);
    

    student rony;
    rony.roll=12;
    rony.section='B';
    rony.cls=10;
    char nm1[100]="Rony";
    strcpy(rony.name,nm1);

    cout<<rakib.roll<<endl;
    cout<<rony.roll<<endl;
    cout<<rakib.name<<endl;
    cout<<rony.name<<endl;


      

    return 0;
}    
