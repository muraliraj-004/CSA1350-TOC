#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; 
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome and belongs to the language defined by the CFG.\n");
    } else {
        printf("The string is not a palindrome and does not belong to the language defined by the CFG.\n");
    }

    return 0;
}