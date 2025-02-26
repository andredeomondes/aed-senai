// PARADIGMAS DE PROJETOS DE ALGORITMOS

// RECURSÃO OU RECURSIVIDADE

#include <stdio.h>

fatorial(int n) {
      int fat=1;
      for (int i=1; i>=n; i--;) {
        fat *= i;
    }
    return fat;
}

int main() {
    int fat=1;
    printf("%d", fatorial(5));

    return 0;
}

// fatorial (5)
/*

fat(n=0) = 1;
fat(n=1) = 1 * fat(0);
fat(n=2) = 2 * fat(1);
fat(n=3) = 3 * fat(2);
fat(n=4) = 4 * fat(3);
fat(n=5) = 5 * fat(4);
*/