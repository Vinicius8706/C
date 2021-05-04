#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    float a, b, resultado;
    printf("Digite um valor para: ",a);
    scanf("%f",&a);
    printf("Digite um valor para segunda nota: ", b);
    scanf("%f",&b);
    resultado = (a+b)/2;
    printf("\nA média entre a nota %f e a %f é %f", a, b, resultado);

    system("pause");
}
