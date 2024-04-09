//Jusitn Cheung 115923252
//Lab8Part3Exercise2

#include <stdio.h>
#include <string.h>

char* remove_matching_chars(char s1[], const char s2[]) {
    int i, j, k;
    int n = strlen(s1);
    int m = strlen(s2);
    char result[100];

    for (i = j = 0; i < n; i++) {
        int found = 0;
        for (k = 0; k < m; k++) {
            if (s1[i] == s2[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[j++] = s1[i];
        }
    }
    result[j] = '\0';

    strcpy(s1, result);

    return s1;
}

int main(void) {
    char s1[100], s2[100];

    printf("Enter String 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter String 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    char* result = remove_matching_chars(s1, s2);

    printf("Output: %s\n", result);

    return 0;
}


