#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Bir sýnýftaki öðrencilerin yaþlarýný toplayýp ortalamasýný “-1” girilene kadar yapýp yazdýran program kodunu yazýnýz.
	// C de 0 haric hersey dogru oldugu icin sonsuz donguye sokmak oldukca basittir
	int yas, ortalama, i, toplam;
	
	i = 1 ;
	
	while(i > 0)
	{
		printf("Ogrencinin yasini giriniz:");
		
		scanf("%d",&yas);
		
		if(yas!= -1)
		{
		toplam += yas;
		
		ortalama = toplam / i ;
		
	    }
	    else
	    
	    break;
		
		i++;
	}
	printf("Girilen yaslarin ortalamasi:%.3f",(float)ortalama);
	
	
	
	
	
	
	
	
	return 0;
}
