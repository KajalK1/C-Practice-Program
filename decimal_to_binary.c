#include <stdio.h>
int main() 
{
    int n, binary[32], i = 0;
    printf("Enter decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        binary[i++] = n % 2;
        n = n / 2;
    }
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}
