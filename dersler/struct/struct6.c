#include <stdio.h>
#include <stdlib.h>

struct telrehber{
	
	char adi[20];
	
	char sehir[30];
	
	int numara;

	
}bilgi[3];


int main() {
	
	int i;
	
	for(i = 0; i < 3; i++) {
		
		printf("Adi :");
		
		scanf("%s",bilgi[i].adi);
		
		printf("Numarasi :");
		
		scanf("%d",&bilgi[i].numara);
		
		printf("Yasadigi sehir :");
		
		scanf("%s",bilgi[i].sehir);
		
		
	}
	
	for(i = 0; i < 3; i++) {
		
		printf("Adi : %s\t\t\t",bilgi[i].adi);
			
		printf("Numarasi : %d\t\t\t",bilgi[i].numara);
		
		printf("Yasadigi sehir : %s",bilgi[i].sehir);
		
		printf("\n");
	
	
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
