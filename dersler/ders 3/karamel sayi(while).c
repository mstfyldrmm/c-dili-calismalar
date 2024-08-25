#include <stdio.h>
#include <stdlib.h>

/* Karamel sayi : Uc basamakli bir abc sayisi icin eðer abc sayiyi rakamlarina tam bölünüyor ise karamel sayidir 
 Bu program kullanicinin istedigi araliga gore karamel sayilari yazdirir */

int main(){
	
	int ust, alt, a, b, c, i = 1;
	
	printf("Alt araligi giriniz:");
	
	scanf("%d",&alt);
	
	printf("Ust araligi giriniz:");
	
	scanf("%d",&ust);
	
	while(alt <= ust)
	{
		
		a = alt / 100 ;
		
		b = (alt / 10) % 10 ;
		
		c = alt % 10 ;
		
		if(b != 0  && c != 0)
		{
			if(alt % a == 0 && alt % b == 0 && alt % c == 0)
			{
				printf("%d.Karamel sayi:%d\n",i,alt);
				i++;
			}
		}

		alt ++;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
