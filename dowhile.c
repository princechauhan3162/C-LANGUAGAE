#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        if (ch <= 'z') {
            printf("%c ", ch);
        }

        ch = ch + 4;  

    } while (ch <= 'z');
}