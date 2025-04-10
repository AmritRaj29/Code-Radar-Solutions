// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char text[1000];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Removing newline character if present
    text[strcspn(text, "\n")] = '\0';

    int wordCount = countWords(text);
    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}