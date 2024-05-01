/*1021 - NOTAS E MOEDAS*/

#include<stdio.h>
#include<math.h>

main()
{
	float valor;
    
    scanf("%f",&valor);
    
    printf("%.f nota(s) de R$ 100.00\n",floor(valor/100));
}
