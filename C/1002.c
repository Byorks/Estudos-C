#include <stdio.h>

int main(){
    double area,raioquadrado,raio = 0;
    double pi = 3.14159;

    // digite o valor do raio
    scanf("%lf", &raio);

    raioquadrado = raio * raio;

    area = raioquadrado * pi;

    printf("A = %.4lf\n",area);

    return 0;
}