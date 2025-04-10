// Your code here...
#include <stdio.h>

void removeNewline(char *str) {
    // Traverse the string and remove the newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
}

void concatenateStrings(char destination[], const char source[]) {
    int i = 0; // Index for destination string
    int j = 0; // Index for source string

    // Move to the end of the destination string
    while (destination[i] != '\0') {
        i++;
    }

    // Append each character of the source string to the destination
    while (source[j] != '\0') {
        destination[i] = source[j];
        i++;
        j++;
    }

    // Add the null terminator at the end
    destination[i] = '\0';
}

int main() {
    char string1[1000], string2[1000];

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    removeNewline(string1); // Remove newline character manually

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    removeNewline(string2); // Remove newline character manually

    concatenateStrings(string1, string2);

    printf("The concatenated string is: %s\n", string1);

    return 0;
}