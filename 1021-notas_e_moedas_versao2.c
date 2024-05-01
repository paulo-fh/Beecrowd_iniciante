#include <stdio.h>
#include <math.h>


int main() {
 
   float n, value;
   int   n_100, n_50, n_20, n_10, n_5,n_2,
         m_1, m_050, m_025, m_010, m_005, m_001;
    
    scanf("%f",&n);
    //576.73
    
    if(n>=0.0 && n<= 1000000.00)
    {
	    n_100 = n/100;
	    value = n - (n_100*100);  	    
	    n_50 = value/50;
	    value -= n_50*50;  	    
	    n_20 = value/20;
		value -= n_20*20;  		
		n_10 = value/10;
		value -= n_10*10;  		
		n_5 = value/5;
	    value -= n_5*5;    	    
	    n_2 = value/2;
	    value -= n_2*2;    
	    
	    m_1 = value/1;
	    value -= m_1*1;    
	    m_050 = value/0.50;
	    value -= m_050*0.50;    
	    m_025 = value/0.25;
	    value -= m_025*0.25;    
	    m_010 = value/0.10;
	    value -= m_010*0.10;    
	    m_005 = value/0.05;
	    value -= m_005*0.05;    
	    m_001 = round(value/0.01);
	    
	    
	    puts("NOTAS:");
	    printf("%d notas de R$ 100.00\n", n_100);
	    printf("%d notas de R$ 50.00\n", n_50);
	    printf("%d notas de R$ 20.00\n", n_20);
	    printf("%d notas de R$ 10.00\n", n_10);
	    printf("%d notas de R$ 5.00\n", n_5);
	    printf("%d notas de R$ 2.00\n", n_2);
	 	
	 	puts("moedas:");
	    printf("%d moedas de R$ 1.00\n", m_1);
	    printf("%d moedas de R$ 0.50\n", m_050);
	    printf("%d moedas de R$ 0.25\n", m_025);
	    printf("%d moedas de R$ 0.10\n", m_010);
	    printf("%d moedas de R$ 0.05\n", m_005);
	    printf("%d moedas de R$ 0.01\n", m_001);
    	
	}
    return 0;
}
