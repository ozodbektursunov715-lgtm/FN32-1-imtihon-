#include <stdio.h>

int main() {
    char amal;
    double a, b;

    printf("Birinchi sonni kiriting: ");
    scanf("%lf", &a);

    printf("Amalni kiriting (+, -, *, /): ");
    scanf(" %c", &amal);

    printf("Ikkinchi sonni kiriting: ");
    scanf("%lf", &b);

    switch (amal) {
        case '+':
            printf("Natija: %.2lf\n", a + b);
            break;
        case '-':
            printf("Natija: %.2lf\n", a - b);
            break;
        case '*':
            printf("Natija: %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Natija: %.2lf\n", a / b);
            else
                printf("Xato: nolga bo'lish mumkin emas!\n");
            break;
        default:
            printf("Xato: noto'g'ri amal kiritildi!\n");
    }

    return 0;
}