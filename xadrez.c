#include <stdio.h>
  
int main() {
    int f = 1, g = 1;

    // movimento da torre (direita)
    for (int d = 1; d <= 5; d++) {
        printf("direita\n");
    }

    // movimento da torre (cima e direita)
    while (f <= 5) {
        printf("cima, direita\n");
        f++;
    }

    // movimento da rainha (esquerda)
    do {
        printf("esquerda\n");
        g++;
    } while (g <= 8);

    return 0;
}
