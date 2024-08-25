#include <stdio.h>
#include <stdlib.h>

struct kiralik {
	
	char marka[20];
	
	int model;
	
	char veris[30];
	
	char alis[30];
	
	int ucret;
	
};


int main() {
	
	int adet;
	
	printf("Kiralik verilen arac adetini tuslayiniz: ");
	
	scanf("%d", &adet);
	
	struct kiralik arac[adet];
	
	int i;
	
	for(i = 0; i < adet; i++) {
		
		printf("Araclarin bilgilerini tuslayiniz:");
		
		scanf("%s %s %s %d %d", &arac[i].marka, &arac[i].veris, &arac[i].alis, &arac[i].model, &arac[i].ucret);

	}
	
	for(i = 0; i < adet; i++) {
		
		printf("%s markali arac su tarihten %s su tarihe %s %d %dTL karsiliginda kiralanmistir\n", arac[i].marka, arac[i].veris, arac[i].alis, arac[i].model, arac[i].ucret);

	}
	

	
	
	
	
	
	
	
	
	return 0;
}
