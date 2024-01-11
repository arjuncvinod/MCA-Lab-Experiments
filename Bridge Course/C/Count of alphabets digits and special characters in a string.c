#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[100];
    int alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    gets(inputString);

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (isalpha(inputString[i])) {
            alphabets++;
        } else if (isdigit(inputString[i])) {
            digits++;
        } else {
            specialChars++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}

