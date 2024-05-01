/* 1016 - DISTÂNCIA */

#include<stdio.h>
#include<math.h>

main()
{
	int dist, temp,
		car_x = 60,
	    car_y = 90;
	    
	    scanf("%d",&dist);
	    
	    temp = (dist*60) / (car_y-car_x);
	    
	    printf("%d minutos",temp);
	
		
}
