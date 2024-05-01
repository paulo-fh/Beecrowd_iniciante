#include<stdio.h>

int duracao(int ini, int fim);

main()
{
	int hi, hf, d;
	
	scanf("%d %d",&hi, &hf);
	
	printf("%d\n",duracao(hi,hf));
	 
	return 0;
}

int duracao(int ini, int fim)
{
	int t_jogo;
	if(ini>=fim)
		ini -= 24;
		
	t_jogo = fim - ini;
	return t_jogo;
	
}
