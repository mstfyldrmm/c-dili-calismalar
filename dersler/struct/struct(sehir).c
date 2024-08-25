#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sehirler{
	
	char adi[20];
	
	double nufus;
	
};



int main() {
	
	struct sehirler sehir[4];
	
	double max = 0;
	
	char sehirr[20];
	
	int i;
	
	for(i = 1; i < 4; i++) {
		
		printf("%d.inci sehrin adini ve nufusunu giriniz:",i);
		
		scanf("%s %lf",sehir[i].adi,&sehir[i].nufus);
		
		if(sehir[i].nufus > max) {
			
			max = sehir[i].nufus;
			
			strcpy(sehirr,sehir[i].adi);
			
		}
		
		
	}
	
	for(i = 1; i < 4; i++) {
		
		printf("%d.inci sehir : %s nufusu : %.f\n",i,sehir[i].adi,sehir[i].nufus);
		
	}
	
	
	printf("\nMaximum nufuslu il : %s Maximum nufus : %.f",sehirr,max);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
