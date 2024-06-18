#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, count1 = 0, count2 = 0, l;
  
    printf("Enter a string to check: ");
    scanf("%s", s);
    
    l = strlen(s);
    for (i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("String is Not Valid\n");
            return 0;
        }
    }

    // Count leading '0's
    for (i = 0; i < l && s[i] == '0'; i++, count1++);
    while (i < l && s[i] == '1') i++;

    for (; i < l && s[i] == '0'; i++, count2++);

    // Check if the counts of leading and trailing '0's are equal and cover the entire string
    if (i == l && count1 == count2) {
        printf("The string satisfies the condition 0^n1^m0^n\n");
        printf("String Accepted\n");
    } else {
        printf("The string does not satisfy the condition 0^n1^m0^n\n");
        printf("String Not Accepted\n");
    }

    return 0;
}