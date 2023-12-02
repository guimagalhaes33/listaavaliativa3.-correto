#include <stdio.h>
#include <math.h>
int main() {
    int meses;
    double taxaJuros, aporte, valorTotal;

    // Entrada de dados
    // data entry

    scanf("%d %lf %lf", &meses, &aporte, &taxaJuros);

    // Loop para calcular o montante ao fim de cada mês
    for (int i = 1; i <= meses; ++i) {
        valorTotal = aporte * (1+taxaJuros) * ((pow(1 + taxaJuros, i) - 1) / taxaJuros);

        // Saída de dados
        //data output
        
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, valorTotal);
    }

    return 0;
}