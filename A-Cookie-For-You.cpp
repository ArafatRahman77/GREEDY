#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;

        if (a + b >= n + m)
        {
            if (a > b)
            {
                if (b >= m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (b > a)
            {
                if (a >= m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (a >= m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}