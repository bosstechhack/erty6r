#include <stdio.h>

void findFrequency(const char *str);

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character if present
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    findFrequency(inputString);

    return 0;
}

void findFrequency(const char *str) {
    int frequency[256] = {0};  // Assuming ASCII characters

    // Calculate frequency of each character
    while (*str != '\0') {
        frequency[(unsigned char)*str]++;
        str++;
    }

    // Display frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d times\n", (char)i, frequency[i]);
        }
    }
}
#include <stdio.h>

void findFrequency(const char *str);

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character if present
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    findFrequency(inputString);

    return 0;
}

void findFrequency(const char *str) {
    int frequency[256] = {0};  // Assuming ASCII characters

    // Calculate frequency of each character
    while (*str != '\0') {
        frequency[(unsigned char)*str]++;
        str++;
    }

    // Display frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d times\n", (char)i, frequency[i]);
        }
    }
}