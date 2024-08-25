#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Dönüþ tipi pointer olan fonksiyonlar

/*pointerlar adres belirlenmediði zaman belleðin herhangi bir yerine eriþebilir bu yüzden çeþitli hatalara sebep olur
Bu yüzden pointer tanýmlayýp daha sonra kullanacaksak pointerý NULL ifade ile hicbir adres tanýmlamamýz gerekir daha sonra
dilediðimiz adresi belirtebiliriz*/

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
	
	int *p = NULL; // Alternatif olarak *p = 0; kullanýlabilir

	char isim[] = "Yazilimci";
	
	char *i = dondur(isim, 3);
	
	printf("%s",i);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
