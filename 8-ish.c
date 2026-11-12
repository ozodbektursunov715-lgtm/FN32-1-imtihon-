#include <stdio.h>

int main() {
    int s,i,o;
    printf("Sonni kiriting: ");
    scanf("%d",&s);
    for( i=1;i<=s;i++){
        for(int o=1;o<=i;o++){
            printf("*");
        }
    printf("\n");
    }

    return 0;
}