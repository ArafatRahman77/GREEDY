#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while (n--)
    {
        int p, q, l;
        scanf("%d%d%d", &p, &q, &l);
        if (p == 1 && q == 1)
        {
            count++;
        }

        else if (p == 1 && l == 1)
        {
            count++;
        }
        else if (q == 1 && l == 1)
        {
            count++;
        }
        else if (p == 1 && q == 1 && l == 1)
        {
            count++;
        }
    }
    printf("%d", count);
}