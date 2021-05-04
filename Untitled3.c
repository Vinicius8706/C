#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int a = 5;
    printf("%d", a);
    printf("\nO valor da variável a é %d",a);

    a = 15;
    printf("\nO valor da variável é %d", a);

    system("pause");

}
