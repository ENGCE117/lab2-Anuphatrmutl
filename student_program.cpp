#include <stdio.h>
#include <string.h>

char* reverse(char str1[]);

int main() {
    char text[50];

    printf("Enter str1 : ");
    fgets(text, sizeof(text), stdin);
    
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    char *output = reverse(text);
    printf("MAIN : %s\n", output);

    return 0;
}

char* reverse(char str1[]) {
    int len = strlen(str1);
    for (int i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    printf("FUNC : %s\n", str1);
    return str1;  
}
