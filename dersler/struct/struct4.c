#include <stdio.h>
#include <stdlib.h>

struct rehber{
		
		char adi[20];
		
		double numara;
		
}kisi[3] = {
	
	{"mustafa",534548412},
	
	{"kamil",5746679482},
	
	{"ayse",5346842587}
}; //3 adet kisi nesne dizisi olusturduk
	

int main() {
	//Struct ile dizilerin kullan�m�
	
	//struct ile olu�turacak nesneleri dizi kullanarak tutar�z
	
	int i;
	
	for(i = 0; i < 3;i++) {
		
		printf("Ad : %s\n",kisi[i].adi);
		
		printf("Numara : %1.f",kisi[i].numara);
		
		printf("\n");
		
	}
	
	
	
	
	return 0;
}
