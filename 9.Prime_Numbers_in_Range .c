#include <stdio.h>
int main() 
{
    int low, high, i, flag;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++) {
        flag = 1;
        if (i <= 1) continue;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    return 0;
}
