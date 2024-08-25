#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* fclose(pointer) dosyayi bulur ve kapatir genelde kullanmamýz gerekir bellekte fazla yer kaplamamasý açýsýndan
   
   fputc(karakter, dosya_pointerý) seklinde olan fonksiyon dosyaya karakter yazmamýzý saðlar
   
   


*/

int main() {
	
	char metin[100] = "Bu isi basaracaksin asla pes etme......."; 
	
	int uzunluk = strlen(metin);
	
	int i;
	
	
	FILE *filep = fopen("yazilim.c", "w");
	
	if (filep == NULL) {
		
		printf("Dosya olusturulamadi");		
		
	}
	else {
		
		printf("Dosya basarili bir sekilde olusturuldu");
		
	}
	
	for(i = 0; i < uzunluk; i++) {
		
		fputc(metin[i], filep);
		
		printf("\nYazilan karakterler %c\n", metin[i]);
		
	}
	
	printf("Dosya basarili bir sekilde yazdirildi");
	
	
	fclose(filep); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
