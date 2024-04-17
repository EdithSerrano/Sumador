#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{

  int num1,num2,num3,suma;
  p("ingrese primer valor: "); 
  s("%d", &num1);
  p(" iNgrese segundo valor:");
  s("%d", &num2);
  p(" iNgrese tercer valor:");
  s("%d", &num3);


  suma= num1+num2+num3;

    p("La suma es : %d",suma);

    return 0;
}