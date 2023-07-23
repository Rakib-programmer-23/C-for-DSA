#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math_mark;
        int eng_mark;


};
bool cmp(student a, student b)
{
   int sum_a=a.math_mark+a.eng_mark;
   int sum_b=b.math_mark+b.eng_mark;
   if(sum_a>sum_b) return true;
   else if(sum_a<sum_b) return false;
   else  return a.id<b.id;

}

int main()
{
    int n;
    cin>>n;


    student comp[n];
    for(int i=0;i<n;i++)
    {
     
      cin>>comp[i].name;
        cin >> comp[i].cls >> comp[i].s >>comp[i].id >> comp[i].math_mark >> comp[i].eng_mark;
        cin.ignore();
    }

    sort(comp,comp+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout <<comp[i].name << " " << comp[i].cls << " " << comp[i].s << " " <<comp[i].id<<" " <<comp[i].math_mark << " " << comp[i].eng_mark << endl;
    }
      
    return 0;
}