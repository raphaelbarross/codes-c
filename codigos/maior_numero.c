#include <stdio.h>

int main() {
    int a, b, c, maior;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;

    printf("Maior numero: %d\n", maior);

    return 0;
}
