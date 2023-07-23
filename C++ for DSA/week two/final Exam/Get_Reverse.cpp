#include<bits/stdc++.h>
using namespace std;
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main() 
{
    int N;
    cin >> N;
    cin.ignore();

    Student data[N];
    for (int i = 0; i < N; i++) 
    {
        cin >>data[i].name >> data[i].cls >> data[i].s >> data[i].math_marks >> data[i].eng_marks;
        cin.ignore();
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout <<data[i].name << " " << data[i].cls << " " << data[i].s << " " << data[i].math_marks << " " << data[i].eng_marks << endl;
    }

    return 0;
}