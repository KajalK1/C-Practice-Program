#include <stdio.h>
int main() 
{
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'||
                c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
