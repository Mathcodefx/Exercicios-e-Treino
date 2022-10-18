#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float A, B, C, Delta, x1, x2, x;


printf("Coeficiente a: ");
scanf("%f", &A);

printf("Coeficiente b: ");
scanf("%f", &B);

printf("Coeficiente c: ");
scanf("%f", &C);

Delta= pow(B, 2)-4*A*C;
x= (-B+-sqrt(pow(B, 2))-4*A*C)/2*A;
x1= (-B+ sqrt(Delta))/(2* A);
x2= (-B- sqrt(Delta))/(2* A);

if (Delta > 0)
{ 
  
    printf("X1 = %.4f\n", x1);
    printf("X2 = %.4f\n", x2);
}
else if (Delta<0)
{
    printf("Esta equacao nao possui raizes reais");

}





    return 0;
}
