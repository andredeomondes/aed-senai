// UTILIZANDO RECURSÃO AGORA

// PARADIGMAS DE PROJETOS DE ALGORITMOS

// RECURSÃO OU RECURSIVIDADE

#include <stdio.h>

int fatorialR(int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n* fatorialR(n-1);
    }
}

int main() {
    prinft("%d", fatorial(5));
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