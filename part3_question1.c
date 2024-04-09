//Justin Cheung SBU ID: 115923252
//:Lab8Part3Exercise1

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[11];
    int i, length;

    printf("Enter a string of about 10 characters: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Output:\n%s\n", str);
    
    for (i = 1; i < length; i++) {
        printf("%s\n", str + i);
    }

    return 0;
}
