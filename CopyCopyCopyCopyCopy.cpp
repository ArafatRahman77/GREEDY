#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, i, temp, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        temp = a[0];
        count = 1;
        for (i = 1; i < n; i++)
        {
            if (a[i] != temp)
            {
                count++;
                temp = a[i];
            }
        }
        cout << count << "\n";
    }

    return 0;
}