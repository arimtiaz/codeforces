
#include <stdio.h>
#include <string.h>

int main()
{
    int p, w, q, z = 0;
    scanf("%d %d %d", &p, &w, &q);

    for (int i = 1; i <= q; i++)
    {
        z += (i * p);
    }

    if(z <= w ){
        printf("0\n");
    } else {
        printf("%d\n", (z-w)); 
    }


    return 0;
}