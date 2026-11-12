#include <stdio.h>

int main() {
    int s, i, y = 0;

    printf("Son kiriting: ");
    scanf("%d", &s);

    for (i = 1; i <= s; i++) {
        
        y= y + i;
    }

    printf("1dan %d gacha bo'lgan sonlar yig'indisi: %d",s,y);

    return 0;
}