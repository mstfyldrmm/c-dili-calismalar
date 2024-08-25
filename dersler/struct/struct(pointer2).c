#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sehirler{
	
	char adi[20];
	
	int nufus;
	
};



int main() {
	
	struct sehirler sehir[4];
	
	int i;
	
	struct sehirler *ptr = sehir;
	
	for(i = 1; i < 4; i++) {
		
		printf("%d.inci sehrin adini ve nufusunu giriniz:",i);
		
		scanf("%s %d",ptr[i].adi,&ptr[i].nufus);
		
		
	}
	
	for(i = 1; i < 4; i++) {
		
		printf("%d.inci sehir : %s nufusu : %d\n",i,ptr->adi,ptr->nufus);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
