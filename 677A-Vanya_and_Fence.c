#include<stdio.h>

int main(){
    int a, b, i, count1 = 0, count2 = 0;
    scanf("%d %d", &a, &b);
    int arr[a];

    for(i = 0; i<a; i++){
         scanf("%d", &arr[i]);
         if(arr[i]<=b){
            count1++;
         }else{
            count2 += 2;
         }
    };
    printf("%d\n", count1+count2);

    return 0;
}
