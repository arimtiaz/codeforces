#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    int arr[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i<n; i++){
        if(arr[i] >= 1){
            count++;
        }
    }
    

    if(count >= 1){
        printf("HARD\n");
    } else{
        printf("EASY\n");
    }

    return 0;
}