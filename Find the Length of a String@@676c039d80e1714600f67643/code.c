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

    // Removing newline character if present
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
    }

    // Check if the input is empty
    if (text[0] == '\0') {
        printf("0\n");
    } else {
        int length = calculateLength(text);
        printf("%d\n", length);
    }

    return 0;
}