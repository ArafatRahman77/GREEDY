#include <iostream>
int main()
{
    int n, m, i, n_count = 0;
    std::cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int t1;
    std::cin >> t1;
    while (t1--)
    {
        std::cin >> m;
        a[m - 1] = 0;
    }
    int t2;
    std::cin >> t2;
    while (t2--)
    {
        std::cin >> m;
        a[m - 1] = 0;
    }
    i = 0;
    while (i < n)
    {
        if (a[i] != 0)
        {
            n_count++;
            break;
        }
        i++;
    }
    if (n_count == 0)
        std::cout << "I become the guy.";
    else
        std::cout << "Oh, my keyboard!";
}