#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,multiplo;
    p("Ingrese un valor:");
    s("%d",&num);
    
    if((num %3)==0)
       p("%d El numero ingresado es multiplo de 3:",multiplo);
    else
       p("%d El numero ingresado no es multiplo de 3:",multiplo);
    
    return 0;
}
