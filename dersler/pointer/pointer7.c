#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//                                pointer ile string kullanýmý

//kendi strlen fonksiyonumuzu yazmak 

int kendi_fonksiyonumuz(char *p) {
	
	int uzunluk = 0; 
	
	int i = 0;
	
	for(; p[i] != '\0'; i++) {
		
		uzunluk ++;
		
	}
	
	return uzunluk;
}




int main() {
	
	char isim[] = "mustafa";
	
	char *i = isim; //pointer baslangic degerinin adresini verir
	
	printf("%s\n", i);
	
	printf("%s\n", i+1); // m u s t a f a  i + 1 olunca u dan baslar ve ustafa yazdýrýr
	
	printf("%s\n", i+3); // t den baslar ve tafa yazdýrýr
	
	printf("Girilen stringin uzunlugu : %d", kendi_fonksiyonumuz(isim));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
