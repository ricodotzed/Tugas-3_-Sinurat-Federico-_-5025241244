#include <stdio.h>
#include <math.h>

int main() {
    
    double ammount, remaining;

    printf("Ammount (gr) = ",ammount);
    scanf("%lf", &ammount);

    int i = 1;
    for (i = 1; i < 6; i++)
    {
        remaining = ammount * pow(0.5,i/5.272);
        printf("Year %d = %.3lf\n",i, remaining);
    }
    

    return 0;
}
