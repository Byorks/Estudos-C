#include <stdio.h>

int main()
{
    int horaInicial, horaFinal, resultado;

    scanf("%d", &horaInicial);
    scanf("%d", &horaFinal);

    if (horaFinal == horaInicial)
        resultado = 24;
    else if (horaFinal != 0 || horaInicial != 0)
    {
        resultado = (horaFinal * 60) - (horaInicial * 60);

        if (resultado < 0)
            resultado += 1440;

        resultado = resultado / 60;
    }

    printf("O JOGO DUROU %d HORA(S)\n", resultado);
}