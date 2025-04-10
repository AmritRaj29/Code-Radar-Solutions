// Your code here...\
#include <stdio.h>

#include <stdio.h>

int calculateLength(const char *str) {
    const char *ptr = str;
    // Move the pointer forward until the null terminator '\0' is encountered
    while (*ptr != '\0') {
        ptr++;
    }
    // The length is the difference between the final pointer position and the initial position
    return ptr - str;
}

int main() {
    char text[1000];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Removing newline character if present
    text[strcspn(text, "\n")] = '\0';

    int length = calculateLength(text);
    printf("The length of the string is: %d\n", length);

    return 0;
}