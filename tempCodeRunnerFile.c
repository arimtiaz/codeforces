#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    // int p[n], q[n];
    int count = 0;


    for(int i = 0; i < n; i++){
        int p, q;
        scanf("%d %d", &p, &q);

        if(q > p){
            count++;
        }
    }
    
    printf("%d\n", count);

    

    return 0;
}
    