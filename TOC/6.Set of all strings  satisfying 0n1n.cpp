#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, count = 0, l;
    printf("Enter a string to check: ");
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; i < l; i++) {
        if (s[i] == '0') {
            count++;
        } else if (s[i] == '1') {
            count--;
        } else {
            printf("String is Not Valid\n");
            return 0;
        }
        if (count < 0) {
            printf("The string does not satisfy the condition 0^n1^n\n");
            printf("String Not Accepted\n");
            return 0;
        }
    }
    if (count == 0) {
        printf("The string satisfies the condition 0^n1^n\n");
        printf("String Accepted\n");
    } else {
        printf("The string does not satisfy the condition 0^n1^n\n");
        printf("String Not Accepted\n");
    }
    return 0;
}