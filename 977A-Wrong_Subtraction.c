#include <stdio.h>


int main()
{
    int n = 0;
    int z = 0, x;
    scanf("%d %d", &n, &z);


    for (int i = 1; i <= z; i++)
    {
         x = n % 10;
        if (x == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }

    printf("%d\n", n);

    return 0;
}