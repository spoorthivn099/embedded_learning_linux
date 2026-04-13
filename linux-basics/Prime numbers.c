#include <stdio.h>

int main() {
    int num, i, flag = 1;

    printf("Enter the Number:\n");
    scanf("%d", &num);

    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            flag = 0;
            break;// to stop immediatly when divisible by zero
        }
    }
    if(flag == 1)
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);

    return 0;
}