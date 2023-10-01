#include<stdio.h>

int main (){
    double Raio,Volume,pi = 3.14159;

    scanf("%lf", &Raio);

    
    Volume = (4.0/3) * pi * (Raio * Raio * Raio);

    printf("VOLUME = %.3lf\n",Volume);
    return 0;
}
    //  o mesmo resultado, jeitos diferentes.

// #include<stdio.h>

// int main (){
//     double Raio, Volume, pi = 3.14159, Raioelev;
    
//     scanf("%lf", &Raio);

//         Raioelev = Raio * Raio;
//         Raioelev = Raioelev * Raio;

//     Volume = 4.0/3 * pi;
//     Volume = Volume * Raioelev;

//     printf("VOLUME = %.3lf\n",Volume);
//     return 0;
// }