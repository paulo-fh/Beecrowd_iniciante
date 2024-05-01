/* 1019 - CONVERSAO_DE_TEMPO */

#include<stdio.h>


main()
{
	int tempo, h, m, s, r;
    
    scanf("%d",&tempo);
    
    h = tempo/3600;
    r = tempo%3600;
    m = r/60;
    s = r%60;    
    
    printf("%d:%d:%d\n",h,m,s);
    
	return 0;	
}
