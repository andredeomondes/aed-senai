#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
   
   srand(time(NULL));
    int x = rand()%6+1;
    printf("%d", x);

    return 0;
    
}