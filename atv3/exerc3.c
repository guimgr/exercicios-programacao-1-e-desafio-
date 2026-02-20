#include <stdio.h>
#include <math.h>  
int main() {
    float A, B, C, D;

    printf("Digite o valor da leitura do sensor A: ");
    scanf("%f", &A);

    printf("Digite o valor da leitura do sensor B: ");
    scanf("%f", &B);

    C = pow(A - B, 2);

    D = (pow(A, 2)) - (pow(B, 2));

    printf("O valor do sensor C e: %.2f\n", C);
    printf("O valor do sensor D e: %.2f\n", D);
    return 0;
}