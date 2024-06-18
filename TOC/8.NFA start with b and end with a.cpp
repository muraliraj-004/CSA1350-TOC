#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0; // 0 means initial state, 1 means we found a '0'

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[0]=='b' && str[length-1] == 'a') {
            printf("The string is accepted by the NFA.\n");
            return 0;
        }
    }
    printf("The string is not accepted by the NFA.\n");
    return 0;
}