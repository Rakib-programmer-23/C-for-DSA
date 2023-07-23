#include<bits/stdc++.h>
using namespace std;
int main()
{ string s;
    getline(cin, s);
 
    stringstream ss(s);
 
    string word;
    bool isFirstWord = true; // Flag to track the first word
 
    while (ss >> word)
    {
        if (!isFirstWord) {
            cout << " "; // Print space before every word except the first
        }
        
        for (int i = word.length() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
 
        isFirstWord = false; // Update the flag after printing the first word
    }
 
    return 0;
}