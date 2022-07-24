#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, i, x, s = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (i = 0; i < n - 1; i++)
        {
            s = max(s, v[i] + v[i + 1]);
        }
        s = max(s, v[0] + v[n - 1]);
        cout << s << endl;
    }
}