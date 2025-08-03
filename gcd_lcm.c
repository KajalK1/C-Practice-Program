#include <stdio.h>
int main() 
{
    int a, b, gcd, lcm, temp_a, temp_b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    gcd = temp_a;
    lcm = (a * b) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
