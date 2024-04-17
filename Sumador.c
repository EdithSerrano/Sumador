#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{

  int num1,num2,suma;
  p("ingrese primer valor: "); 
  s("%d", &num1);
  p(" iNgrese otro valor:");
  s("%d", &num2);

  suma= num1+num2;

    p("La suma es : %d",suma);

    return 0;
}