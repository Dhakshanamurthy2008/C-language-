#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int size, i;
    int upper = 0, lower = 0, digit = 0, space = 0;
    char s[50] = "CSE-A mass@104";
    
    size = strlen(s);
    
    for(i = 0; i < size; i++) {
        if (isupper(s[i])) {
            upper++;
        } else if (islower(s[i])) {
            lower++;
        } else if (isdigit(s[i])) {
            digit++;
        } else if (isspace(s[i])) {
            space++;
        }
    }
    
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("No of Digits: %d\n", digit);
    printf(" No of Spaces: %d\n", space);
    
    return 0;
}