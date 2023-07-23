#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s;
    cin >> s;

    if (isupper(s))
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if (islower(s))
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else if (isdigit(s))
    {
        cout << "IS DIGIT";
    }

    return 0;
}
