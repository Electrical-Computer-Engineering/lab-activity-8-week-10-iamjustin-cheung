//Justin Cheung 115923252
//Lab8HW

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100 

void ToPigLatin(char* word, char* piglatin) {
    int i, j, first_v, len;
    int is_capitalized = isupper((unsigned char)word[0]);

    len = strlen(word);

    for (i = 0; i < len; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            (word[i] == 'y' && i > 0) || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
            word[i] == 'O' || word[i] == 'U' || (word[i] == 'Y' && i > 0)) {
            first_v = i;
            break;
        }
    }

        if (i == len) {
            strcpy(piglatin, word);
            return;
        }

        if (first_v == 0) {
            strcpy(piglatin, word);
            strcat(piglatin, "way");
        } 
        else {
            j = 0;
       
        if (is_capitalized) {
            piglatin[j++] = toupper(word[first_v]);
        } else {
            piglatin[j++] = word[first_v];
        }

        for (i = first_v + 1; i < len; i++) {
            piglatin[j++] = word[i];
        }

        for (i = 0; i < first_v; i++) {
            piglatin[j++] = word[i];
        }

        if (first_v > 0) {
            strcat(piglatin, "ay");
        }
    }
}

int main(void) {
    
    char words[5][SIZE];
    char pigLatinWords[5][SIZE];

    printf("Input 5 words: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%s", words[i]);
    }

    printf("Pig Latin version of the 5 words:\n");
    for (int i = 0; i < 5; ++i) {
        ToPigLatin(words[i], pigLatinWords[i]);
        printf("%s ", pigLatinWords[i]);
    }
    printf("\n");

    return 0;
}
