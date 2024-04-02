//Justin Cheung SBU ID: 115923252
//Lab 8 Part 2

#include <stdio.h>
#include <string.h>

#define LIM 32

int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else
        return 1;
    
}

int my_strncmp(char str1[],char str2[], int n) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && i < n) {
        if (str1[i] != str2[i]) {
            return 1;
        }
        i++;
    }

    if ((str1[i] == '\0' && str2[i] == '\0') || i == n)
        return 0;
    else
        return 1;
}

char *my_strcpy (char dest[], char src[]){
    
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
    
int main(void){
    
    char s1 [LIM], s2 [LIM];
    int t;
   
    for(int i = 0; i < 2; i++){
        printf("s1: ");
        scanf("%s", s1); getchar;
        
        printf("s2: ");
        scanf("%s", s2); getchar;
        
        t = my_strcmp (s1, s2);
        
        if(t == 0)
            printf("%s and %s are equal\n", s1, s2);
        else
            printf("%s and %s are not equal\n", s1, s2);
    }
    
    for(int i = 0; i < 2; i++){
        char str1[LIM], str2[LIM];
        int n;
        
        printf("Enter the first string: ");
        scanf("%s", str1);
        
        printf("Enter the second string: ");
        scanf("%s", str2);
        
        printf("Enter the value of n: ");
        scanf("%d", &n);
        
        int result = my_strncmp(str1, str2, n);
        
        if (result == 0)
            printf("The first %d characters of the strings are equal.\n", n);
        else
            printf("The first %d characters of the strings are not equal.\n", n);
        
    }
        return 0;
        
        
    
}

