// Your code here...
#include <stdio.h>

void concatenateStrings(char *destination, const char *source) {
    // Find the end of the destination string
    while (*destination != '\0') {
        destination++;
    }

    // Append each character of the source string to the destination
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    // Add the null terminator at the end
    *destination = '\0';
}

int main() {
    char string1[1000], string2[1000];

    
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // Remove newline character

    concatenateStrings(string1, string2);

    printf("%s\n", string1);

    return 0;
}