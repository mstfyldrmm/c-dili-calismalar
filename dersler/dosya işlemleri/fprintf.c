#include <stdio.h>
#include <stdlib.h>

/* FPR�NTF fonksiyonu */

//fprintf(filepointer, "%d %c %s gibi", de�i�kenler);



int main() {
	
	int x = 25;
	
	char ad = 'M';
	
	char isim[7] = "Mustafa";
	
	FILE *dosya = fopen("mustafa.txt", "w");
	
	if(dosya == NULL) {
		
		printf("Dosya acma islemi basarisiz oldu.");
		
	}
	
	else {
		
		printf("Dosya basarili bir sekilde olusturuldu");
		
	}
	
	fprintf(dosya, "%d\t %c\t %s", x, ad, isim);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
