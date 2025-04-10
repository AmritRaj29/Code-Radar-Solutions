// Your code here...
#include <stdio.h>

void findMostFrequentCharacter(const char *str) {
    int maxFreq = 0;
    char mostFrequentChar = '\0';

    // Outer loop to consider each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        int freq = 0;

        // Inner loop to count occurrences of str[i]
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                freq++;
            }
        }

        // Update most frequent character if higher frequency is found
        if (freq > maxFreq) {
            maxFreq = freq;
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