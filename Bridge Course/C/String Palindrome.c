#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char str[100];
    bool isPalindrome = true;

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

