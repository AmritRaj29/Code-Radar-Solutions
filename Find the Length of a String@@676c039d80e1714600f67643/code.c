// Your code here...\
#include <stdio.h>

int calculateLength(const char *str) {
    int length = 0;

    // Iterate through the string until the null terminator '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char text[1000];
    
    fgets(text, sizeof(text), stdin);

    // Removing newline character if present
    text[strcspn(text, "\n")] = '\0';

    int length = calculateLength(text);
    printf("%d\n", length);

    return 0;
}