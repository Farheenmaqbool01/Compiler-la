#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    printf("enter the Array: ");
    scanf("%s", str);
    int len = strlen(str);
    int i = 0;

    for (i = 0; i < len; i++) {
        if (str[i] == '(' || str[i] == '{') {
            printf("5");
        }
        else if (isdigit(str[i])) {
            while (i < len && isdigit(str[i])) {
                i++;
            }
            i--;
             printf("1");
        } 
        else if (str[i] == '+') {
            printf("2");
        }
        else if (str[i] == '*') {
            printf("3");
        } 
        else if (str[i] == '}' || str[i] == ')') {
            printf("4");
        }
    }

    return 0;
}

