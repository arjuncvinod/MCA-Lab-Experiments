#include <stdio.h>

int main() {
    char inputString[100];
    char targetChar;
    int count = 0;

    printf("Enter a string: ");
    gets(inputString);

    printf("Enter the character to count: ");
    scanf("%c", &targetChar);

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == targetChar) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", targetChar, count);

    return 0;
}

