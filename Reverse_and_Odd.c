#include <stdio.h>

int main(){
  int num;

  scanf("%d", &num);
  int arr[num];
  for(int i = 0; i<= num; i++){
  scanf(" %lld", &arr[i]);
  }

  
  

  for (int i = num; i > 0; i--){
    if (i%2 == 1)
    {
    printf("%d ", arr[i]);
    }
    
    
  }

  return 0;
}