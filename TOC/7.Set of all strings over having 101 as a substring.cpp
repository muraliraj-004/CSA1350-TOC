#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int found = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i <= len - 3; i++) {
        if (str[i] == '1' && str[i+1] == '0' && str[i+2] == '1') {
            found = 1; // Substring "101" found
            break;
        }
    }
    if (found) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
    return 0;
}