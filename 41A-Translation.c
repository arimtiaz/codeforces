#include<stdio.h>
#include<string.h>

int main(){
    char str[1000], str2[1000];
    scanf("%s", str);
    scanf("%s", str2);
    // char stor[100] = str;

    // Reversing
    int len = strlen(str);
    int middle = len/2;

    char temp;

    for(int i = 0; i < middle; i++){
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = temp;
    }

    // Condition
    int result = strcmp(str, str2);

    if(result == 0){
        printf("YES\n");
    } else{
        printf("NO\n");
    }


    return 0;
}