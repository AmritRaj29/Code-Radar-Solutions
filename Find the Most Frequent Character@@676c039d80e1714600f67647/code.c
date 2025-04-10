// Your code here...
#include <stdio.h>

void findMostFrequentCharacter(const char *str) {
    int frequency[256] = {0}; // Array to store frequencies of all characters
    int maxFreq = 0;
    char mostFrequentChar = '\0';

    // Traverse the string and calculate frequency
    for (int i = 0; str[i] != '\0'; i++) {
        // Increment frequency count for the character
        frequency[(int)str[i]]++;

        // Update most frequent character if its count is the highest
        if (frequency[(int)str[i]] > maxFreq) {
            maxFreq = frequency[(int)str[i]];
            mostFrequentChar = str[i];
        }
    }

    // Display the result
    if (maxFreq > 0) {
        printf("The most frequent character is '%c' (occurs %d times).\n", mostFrequentChar, maxFreq);
    } else {
        printf("No characters found in the string.\n");
    }
}

int main() {
    char text[1000];
    printf("Enter a string: ");

    // Manual input handling without built-in functions
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < 999) {
        text[i++] = ch;
    }
    text[i] = '\0'; // Null-terminate the string

    findMostFrequentCharacter(text);

    return 0;
}