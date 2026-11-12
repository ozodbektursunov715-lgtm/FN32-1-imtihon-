#include <stdio.h>

int main() {
    int s,y=0;
    while(1){
        printf("Sonni kiriting: ");
        scanf("%d",&s);
        if(s==0){
            break;
        }if(s>=0){
            y=y+s;
        }
    } printf("Sonlar yig'indisi: %d",y);

    return 0;
}