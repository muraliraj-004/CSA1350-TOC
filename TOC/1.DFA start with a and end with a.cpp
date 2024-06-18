#include <stdio.h>
#include <string.h>
#define max 20
int main() {
    int trans_table[3][2] = {
        {1, 2}, 
        {1, 1}, 
        {2, 2}
    };
    int final_state = 1;
    int present_state = 0;
    int next_state = 0;  
    int invalid = 0;  
    char input_string[max];
    printf("Enter a string: ");
    scanf("%s", input_string);
    int length = strlen(input_string);
    for (int i = 0; i < length; i++) {
        if (input_string[i] == 'a') {
            next_state = trans_table[present_state][0];
        } else if (input_string[i] == 'b') {
            next_state = trans_table[present_state][1];
        } else {
            invalid = length;
        }
        present_state = next_state;
    }
	if (invalid == length) {
        printf("Invalid input\n");
    } 
    else if (present_state == final_state && input_string[0] == 'a' && input_string[length - 1] == 'a') {
        printf("Accepted\n");
    } else {
        printf("Not Accepted\n");
    }

    return 0;
}
