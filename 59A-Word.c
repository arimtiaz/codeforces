#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    int uCount = 0;
    int lCount = 0;
    for(int i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            uCount++;
        } else {
            lCount++;
        }
    }

    if(lCount >= uCount){
        for(int i = 0; i < len; i++){
        str[i] = tolower(str[i]);
    } } else if(uCount > lCount) {
        for(int i = 0; i < len; i++){
        str[i] = toupper(str[i]);
    }
    }

    printf("%s\n", str);

    return 0;
}