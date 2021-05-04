#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    printf("Olá \n");

    int a =5;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    char letra = 't';
    printf("O valor de letra é = %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de letra mudou para %c", letra);
}
