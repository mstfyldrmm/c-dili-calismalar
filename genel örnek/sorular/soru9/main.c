#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* gets() = Kullanýcýdan cümle almamýzý saðlar.

strlen() = Cümledeki karakter sayýsýný verir */

//Girilen cümledeki kelime sayisini bulan program


int main(int argc, char *argv[]) {
	
	char cumle[100];
	
	printf("Bir cumle giriniz: ");
	
	gets(cumle);
	
	int uzunluk = strlen(cumle), i, adet;
	
	for(i = 0; i < uzunluk; i++) {
	
		if(cumle[i] == ' '){
			
			adet ++;
			
		}
				
	}
	printf("Girilen kelime sayisi : %d", adet);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
