#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    if (n > 0)
    {
        int len = 0;
        while (n != 0)
        {
            int d = (n % 10);
            if (d == 4 || d == 7)
            {
                len++;
            }
            n = n / 10;
        }

        // printf("%d number of lucky digits\n", len);

        if (len == 4 || len == 7)
        {
            printf("YES\n");
        }
        else
        {
            // printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}