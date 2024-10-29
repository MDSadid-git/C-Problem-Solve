#include <stdio.h>

int main(){
  int num;
  scanf("%d", &num);
  if(num%3==0){
    printf("YES");
  }
  if(num%3 == 1){
  printf("NO");
  }
  if(num%3 == 2){
  printf("NO");
  }
  return 0;
}