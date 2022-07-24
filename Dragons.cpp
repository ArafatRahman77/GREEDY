#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    int s, n, i, count = 0;
    cin >> s >> n;
    pair<int, int> level[1000];
    for (i = 0; i < n; i++)
    {
        cin >> level[i].first >> level[i].second;
    }
    sort(level, level + n);
    for (i = 0; i < n; i++)
    {
        if (level[i].first >= s)
        {
            count++;
            break;
        }
        s += level[i].second;
    }
    if (count == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}