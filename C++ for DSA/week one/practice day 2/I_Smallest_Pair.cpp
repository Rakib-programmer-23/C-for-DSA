#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int n;
   
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
       
        cin >> a[i];
    }

    int mn = INT_MAX;

    for (int i = 0; i < t; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                ans = a[j] + a[k] + k - j;
                mn = min(mn, ans);
            }
        }
    }

    cout  << mn << endl;

    return 0;
}
