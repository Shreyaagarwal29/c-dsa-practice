#include <stdio.h>

int main() {
    int c[10] = {0};   
    char ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            c[ch - '0']++;  
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d", c[i]);
        if (i != 9) printf(" "); 
    }

    return 0;
}
