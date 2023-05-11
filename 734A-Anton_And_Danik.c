#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    char str[n];
    scanf("%s", str);
    int aCount = 0;
    int bCount = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            aCount++;
        } else{
            bCount++;
        }
    }

    if(aCount > bCount){
        printf("Anton\n"); 
    } else if(aCount == bCount){
        printf("Friendship\n"); 
    } else if(aCount < bCount){
        printf("Danik\n"); 
    }

    return 0;
}