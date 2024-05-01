#include<stdio.h>

main()
{
	float renda, IR, aux=0.0;
	
	scanf("%f",&renda);
	
	if(renda>=0.0 && renda<=2000.0){
		printf("Isento\n");	
	}else if(renda<=3000.0){
		printf("R$ %.2f\n", (renda-2000.0)*0.08);
	}else if(renda<=4500.0){
		printf("R$ %.2f\n", 1000*0.08 + (renda-3000)*0.18);
	}else
		printf("R$ %.2f\n", 1000*0.08 + 1500*0.18 + (renda-4500.0)*0.28);

	system("PAUSE");
	return 0;
}
