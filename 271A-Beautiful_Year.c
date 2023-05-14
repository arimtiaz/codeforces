#include <stdio.h>

int isDistinct(int n) {
    int count = 0;
    int arr[4], id = 0;

     while(n > 0) {
        int digit = n % 10;  
        arr[id++] = digit;
        n = n / 10;
    }

    for(int i = 0; i < id; i++) {
        for(int j = 0; j < (id-1); j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int flag = 1;
    for(int i = 0; i<id; i++){
        if(arr[i] == arr[i+1]) {
            flag = 0; 
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n + 1; ; i++) {
        if(isDistinct(i)) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}