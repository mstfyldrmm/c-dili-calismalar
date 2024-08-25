#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	/*fputc fonksiyonu dosyaya karakter yazdirmamizi saglar
	
	fputc(yazdirilacak karakterin ascii degeri, dosya pointerý)*/
	
	char metin[100] = "Hayatin boyunca hep kosarsin yetistigin sadece nasibindir";
	
	int uzunluk = strlen(metin);
	
	int i;
	
	FILE *filep = fopen("metin.txt", "w");
	
	if(filep == NULL) {
		
		printf("Dosya olusturulamadi");
	
	}
	
	else {
		
		printf("Dosya olusturma islemi  basarili bir sekilde gerceklestirildi");
		
	}
	
	for(i = 0; i < uzunluk; i++) {
		
		fputc(metin[i], filep);
	
	}
	
	
	fclose(filep);
	
	filep = fopen("metin.txt", "a");
	
	fputc(65, filep);
	
	
	
	
	
	
	return 0;
}
