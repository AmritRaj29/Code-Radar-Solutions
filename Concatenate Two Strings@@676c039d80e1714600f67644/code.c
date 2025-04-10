// Your code here...
#include <stdio.h>

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
    string1[strcspn(string1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // Remove newline character

    concatenateStrings(string1, string2);

    printf("%s\n", string1);

    return 0;
}