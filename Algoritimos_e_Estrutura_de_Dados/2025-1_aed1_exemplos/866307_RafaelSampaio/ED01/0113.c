#include <stdio.h>

int atividade3 (int y, int x, int area){

    printf("Me de um valor inteiro: \n");
    scanf ("%d", &x);//lado x
    getchar();

    printf("\n");

    printf("Me de outro valor inteiro: \n");
    scanf ("%d", &y);//lado y 
    getchar();

    printf("\n");
    printf("calculando...");
    getchar();

    int x2 = 2*x;
    int y2 = 2*y;
    area = (x2 * y2) / 2;

    printf("\nOs lados do triangulo sao %d e %d \n", x, y);
    printf("A area com valores aumentados em duas vezes ")


}

int main (){

int x= 0;
int y= 0;
int area= 0;

    atividade3(y,x,area);

return 0;
}