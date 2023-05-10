#include <stdio.h>
#include <string.h>

int main()
{
  int n, sum = 0;
  scanf("%d", &n);

  while(n--) {
    int a[3];
    int count = 0;
    for(int i = 0; i < 3; i++){
      scanf("%d", &a[i]);
      if(a[i] == 1){
        count++;
      }
    }
    if(count > 1){
      sum++;
    }
  }
  printf("%d\n", sum);

  return 0;
}