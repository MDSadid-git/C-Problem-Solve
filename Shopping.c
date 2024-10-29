#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld", &num);

  
    if (num > 1000) {
        printf("I will buy Punjabi\n");
        num -= 1000;
        
      
        if (num >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
       
        printf("Bad luck!\n");
    }

    return 0;
}
