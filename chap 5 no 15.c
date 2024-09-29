#include <stdio.h>
#include <math.h>

int main(){

    double pi, iterasi, persamaan;
    int i = 1;

    printf("Jumlah iterasi yang inginkan = ", iterasi);
    scanf("%lf",&iterasi);


    for ( i = 0; i < iterasi ; i++)
    {
        persamaan = (i % 2 == 0? 1:-1) / (2.0 * i + 1.0);
        pi += persamaan;
    }
    
    pi *= 4;
    printf("π = %lf", pi);

    return 0;
}