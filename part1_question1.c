//Justin Cheung SBU ID: 115923252
//Lab 8 Part 1

#include <stdio.h>

int my_isalpha (char c){
    
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

int my_isdigit (char c){
    
    if(c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int my_is_upper (char c){
    
    if(c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

char my_to_upper (char c){
    
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

char my_to_lower (char c){
    
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

int main(void){
    char c;
    char d;
    
    for(int i = 0; i < 2; i++){
        
        printf("ch: ");
        scanf("%c",&c);
        getchar();
        d = my_isalpha(c);
        
            if(d == 1)
                printf("%c is an uppercase or lower case letter.\n", c);
            else
                printf("%c is not an uppercase or lower case letter.\n", c);
    }
    
    for(int i = 0; i<2; i++){
       
        printf("digit: ");
        scanf("%c", &c);
        getchar();
        d = my_isdigit(c);
        
        if(d == 1)
            printf("%c is a digit\n", c);
        else
            printf("%c is not a digit\n", c);
    }
    
    for(int i = 0; i<2; i++){
        
        printf("Upper: ");
        scanf("%c", &c);
        getchar();
        d = my_is_upper(c);
        
        if(d == 1)
            printf("%c is uppercase\n", c);
        else
            printf("%c is not uppercase\n", c);
    }
    
    for (int i = 0; i<2; i++){
        
        printf("Enter a character: ");
            scanf(" %c", &c);

            char upper = my_to_upper(c);

            printf("The uppercase of %c is %c\n", c, upper);
    }
   
    for (int i = 0; i<2; i++){
        
        printf("Enter a character: ");
            scanf(" %c", &c);

            char lower = my_to_lower(c);

            printf("The lowercase of %c is %c\n", c, lower);
    }
}
