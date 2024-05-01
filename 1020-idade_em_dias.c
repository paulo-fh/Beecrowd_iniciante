/* 1020 - IDADE EM DIAS */

#include<stdio.h>


main()
{
	int idade_dias, ano, mes, dias, r;
    
    scanf("%d",&idade_dias);
    
    ano = idade_dias/365;
    r = idade_dias%365;
    
    mes = r/30;
    dias = r%30;
    
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dias);
    
	return 0;	
}
