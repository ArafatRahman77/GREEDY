#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    int min = 1001;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (min > (a[i + 1] - a[i]))
            {
                min = (a[i + 1] - a[i]);
            }
        }
        cout << min << "\n";
        min = 1001;
    }

    return 0;
}