// CAP to convert any input upper case words to lower case and check for palindrome
#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    int flag = 0;
    printf("Enter a word: ");
    scanf("%s", str);
    while (str[len] != '\0') {
        if (str[len] >= 'A' && str[len] <= 'Z') {
            str[len] = str[len] + 32; 
        }
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    printf("Converted string: %s\n", str);
    
    if (flag == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}