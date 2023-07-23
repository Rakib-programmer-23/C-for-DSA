#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
         string name;
         float height;
         int age;
        
         person(const string & nm,float h,int ag)
         {
            name=nm;
            height=h;
            age=ag;

         }
};
int main()
{
    person *rahim= new person("Rahim",5.7f,24);   

    person *karim= new person("Karim",5.9f,28); 

    int max=(rahim->age,karim->age);
    if(max==(rahim->age))
    {
        cout<<"Rahim";
    }
    else
    {
        cout<<"Karim";
    }
      
    return 0;
}