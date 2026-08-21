#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char result[50] = "";
    char s[50] = "aBI";
    int l = strlen(s);
    int res_idx = 0;

    for(i = 0; i < l; i++) {
        if((int)s[i] >= 65 && (int)s[i] <= 90) {
            result[res_idx++] = (char)(s[i] + 32);
        }
        else if((int)s[i] >= 97 && (int)s[i] <= 122) {
            result[res_idx++] = (char)(s[i] - 32);
        }
    }
    result[res_idx] = '\0'; // Null-terminate the string

    printf("Result: %s", result);
    return 0;
}