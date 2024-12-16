#include <stdio.h>

int main() {
    char str[100], longest[100];
    int i, j = 0, maxLength = 0, wordLength = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            wordLength++;
        } else {
            if (wordLength > maxLength) {
                maxLength = wordLength;
                for (int k = i - wordLength, l = 0; k < i; k++, l++) {
                    longest[l] = str[k];
                }
                longest[wordLength] = '\0';
            }
            wordLength = 0;
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

