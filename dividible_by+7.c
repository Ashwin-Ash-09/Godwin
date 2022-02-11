#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 7 == 0) ? printf("%d is Not divisible by 7", num) : printf("%d is divisible by 7", num);
    return 0;
}

