#include <stdio.h>

int main() {
    int a, b, c,max;
    

    printf("3 ta son kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Eng katta son: %d\n", max);

    return 0;
}