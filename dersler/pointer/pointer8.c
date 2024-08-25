#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// D�n�� tipi pointer olan fonksiyonlar

/*pointerlar adres belirlenmedi�i zaman belle�in herhangi bir yerine eri�ebilir bu y�zden �e�itli hatalara sebep olur
Bu y�zden pointer tan�mlay�p daha sonra kullanacaksak pointer� NULL ifade ile hicbir adres tan�mlamam�z gerekir daha sonra
diledi�imiz adresi belirtebiliriz*/

char *dondur(char *p, int index) {
	
	int uzunluk = strlen(p);
	
	if (index > uzunluk) {
		
		return NULL;	
	}
	else {
		
		return p + index;
		
	}
	
	
	
	
	
}



int main() {
	
	int *p = NULL; // Alternatif olarak *p = 0; kullan�labilir

	char isim[] = "Yazilimci";
	
	char *i = dondur(isim, 3);
	
	printf("%s",i);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
