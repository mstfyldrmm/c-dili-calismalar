#include <stdio.h>
#include <stdlib.h>

/* Fonksiyonlarda struct kullanýmý */

struct bilgiler{
	
	char adi[20];
	
	char soyadi[20];
	
	int kg;
	
	int yas;
	
	float boy;

};

void bastir(struct bilgiler nesne) {
	
	printf("%s %s %d %d %.f ",nesne.adi,nesne.soyadi,nesne.yas,nesne.kg,nesne.boy);
	
}


struct bilgiler oogrenci(void) {
	
	struct bilgiler ogrenci1;
	
	printf("Bilgileri giriniz(ad soyad yas kg boy) :");
	
	scanf("%s %s %d %d %f",ogrenci1.adi,ogrenci1.soyadi, &ogrenci1.yas, &ogrenci1.kg, &ogrenci1.boy);
	
	return ogrenci1;
	
}



int main(int argc, char *argv[]) {
	
	struct bilgiler ogrenci = oogrenci();
	
	bastir(ogrenci);
	
	
	return 0;
}
