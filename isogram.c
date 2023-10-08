#include <stdio.h>
#include <stdbool.h>
#include<math.h>

// Function prototype for checking if a string is an isogram
bool isIsogram(const char phrase[]);

int main() {
    char input[100];
    
    // Prompt the user for input
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is an isogram using the isIsogram function
    if (isIsogram(input)) {
        printf("%s is an isogram.\n", input);
    } else {
        printf("%s is not an isogram.\n", input);
    }

    return 0;
}

// Function to check if a string is an isogram
bool isIsogram(const char phrase[]) {
    int charCount[26] = {0};  // Array to keep track of character counts (assuming only lowercase letters)

    // Iterate through the characters in the string
    for (int i = 0; phrase[i] != '\0'; i++) {
        char c = phrase[i];

        // Check if the character is a lowercase letter
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            charCount[index]++;

            // If a character appears more than once, it's not an isogram
            if (charCount[index] > 1) {
                return false;
            }
        }
    }
        true;
}
