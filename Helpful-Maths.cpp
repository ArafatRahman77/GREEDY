#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, j;
    int l = s.size();
    char chan;
    for (i = 1; i <= l / 2; i++)
    {
        for (j = 0; j < l - 2; j = j + 2)
        {
            if (s[j] > s[j + 2])
            {
                chan = s[j];
                s[j] = s[j + 2];
                s[j + 2] = chan;
            }
        }
    }
    cout << s;
}