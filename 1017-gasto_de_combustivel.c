/* 1017 - GASTO DE COMBUSTÍVEL */

#include<stdio.h>
#include<math.h>

main()
{
	int temp, vel_med, dist;
	float auton, litros;
	
	auton = 12.0;
	
	scanf("%d",&temp);
	scanf("%d",&vel_med);
	
	dist = vel_med * temp;
	litros = dist / auton;
	
	printf("%.3f",litros);
	
	return 0;	
}
