#include <stdio.h>

int main() {

    int s;
    printf("Sonni kiriting: ");
    scanf("%d",&s);
    if(s>0){
        printf("Kiritgan soningiz musbat son");
    } else if(s==0){
        printf("Kiritgan soningiz nol");
    } else {
        printf("Kiritgan soningiz manfiy");
    }
    return 0;
}