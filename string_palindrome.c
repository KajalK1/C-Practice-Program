#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int i, flag = 0;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Not a palindrome\n");
    else
        printf("Palindrome\n");
    return 0;
}
