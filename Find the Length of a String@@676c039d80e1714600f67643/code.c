// Your code here...
#include <stdio.h>

int calculateLength(const char *str) {
    int length = 0;

    // Traverse each character until the null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char text[1000];
    
    fgets(text, sizeof(text), stdin);

    // Check if only the newline character is present (indicating empty input)
    if (text[0] == '\n') {
        printf("The length of the string is: 0\n");
    } else {
        // Remove newline character if present
        for (int i = 0; text[i] != '\0'; i++) {
            if (text[i] == '\n') {
                text[i] = '\0';
                break;
            }
        }

        int length = calculateLength(text);
        printf("%d\n", length);
    }

    return 0;
}