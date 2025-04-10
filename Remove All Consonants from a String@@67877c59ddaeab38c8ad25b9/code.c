// Your code here...
#include <stdio.h>

void remove_consonants(char *input, char *output) {
    char vowels[] = "aeiouAEIOU";
    int j = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        int is_vowel = 0;
        // Check if the character is a vowel
        for (int k = 0; k < 10; k++) {
            if (input[i] == vowels[k]) {
                is_vowel = 1;
                break;
            }
        }
        // Copy vowels and non-alphabetic characters to output
        if (is_vowel || !(input[i] >= 'a' && input[i] <= 'z') && !(input[i] >= 'A' && input[i] <= 'Z')) {
            output[j++] = input[i];
        }
    }
    output[j] = '\0'; // Null-terminate the output string
}

int main() {
    char input[] = "Hello, World!";
    char output[100]; // Ensure sufficient size for the output string
    
    remove_consonants(input, output);
    printf("%s\n", output);
    
    return 0;
}