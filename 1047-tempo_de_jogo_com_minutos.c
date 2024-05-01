/*
Exemplo de Entrada	                 Exemplo de Saída
    7 8 9 10                 O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
    7 7 7 7                  O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
    7 10 8 9                 O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include<stdio.h>

main()
{
	int h_ini, m_ini, h_fim, m_fim, tmp;
	
	scanf("%d %d %d %d",&h_ini, &m_ini, &h_fim, &m_fim);
	
	h_ini = h_ini*60 + m_ini;
	h_fim = h_fim*60 + m_fim;
	
	if((h_ini)>=(h_fim))
		h_ini -= (24*60);		
	
	h_fim -= h_ini; 
//	tmp = ((h_fim*60 + m_fim) - (h_ini*60 + m_ini));

//	if(tmp<0)
//		tmp += 1440; 	
	
		
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_fim/60, h_fim%60);


	
	return 0;
}
