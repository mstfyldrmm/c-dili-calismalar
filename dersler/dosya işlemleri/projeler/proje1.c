#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan kimlik bilgilerini alýp yazdýran program*/

int main() {
	
	FILE *dosya = fopen("Kimlikbilgileri.txt", "w");
	
	char ad[20], soyad[20], dogumyeri[20], dogum_tarihi[11], tc[11];
	
	printf("Adinizi giriniz:");
	
	fgets(ad, 20, stdin);
	
	printf("Soyadinizi giriniz:");
	
	fgets(soyad, 20, stdin);
	
	printf("Dogum yeriniz:");
	
	fgets(dogumyeri, 20, stdin);
	
	printf("Dogum tarihiniz:");
	
	fgets(dogum_tarihi, 11, stdin);
	
	printf("Tc kimlik numaraniz:");
	
	fgets(tc, 11, stdin);
	
	fputs(ad, dosya);
	
	fputs(soyad, dosya);
	
	fputs(dogumyeri, dosya);
	
	fputs(dogum_tarihi, dosya);
	
	fputs(tc, dosya);
	
	printf("Kimlik bilgileri basarili bir sekilde yazdirilmistir...");
	
	fclose(dosya);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
