#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr);
        while (arr > 0)
        {
            if (arr[i] > 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }

    if (count1 > 0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}