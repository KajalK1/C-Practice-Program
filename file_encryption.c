#include <stdio.h>
int main() 
{
    FILE *in, *out;
    char ch;
    in = fopen("plain.txt", "r");
    out = fopen("encrypted.txt", "w");
    if (in == NULL || out == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch + 3, out);  // Simple Caesar Cipher
    }
    fclose(in);
    fclose(out);
    printf("File encrypted to encrypted.txt\n");
    return 0;
}
