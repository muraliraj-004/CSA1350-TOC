#include <stdio.h>
#include <string.h>
int isAcceptedByDFA(const char *input) {
    int length = strlen(input);
    if (length > 0 && input[0] == '0' && input[length - 1] == '1') {
        return 1;
    }
    return 0;
}
int main() {  
    char input[100];
    printf("Enter a binary string: ");
    scanf("%s", input);
    if (isAcceptedByDFA(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected");
    }
    return 0;
}
