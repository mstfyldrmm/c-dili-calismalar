#include <stdio.h>
#include <stdlib.h>

/*Birden fazla tipi(integer, float...) birle�tirip tek bir tip olu�turmak i�in yap�l�r yani ruby class 

Tan�mlama �ekli 
struct etiketadi {

de�i�ken tipi de�i�ken1;

de�i�ken tipi de�i�ken2;

de�i�ken tipi de�i�ken3;
.....
.....
};
*/

struct ogrenci {
	
	char adi[20];
	
	char soyadi[20];
	
	int yas;
	
	int numara;

};





int main() {
	
	struct ogrenci bilgiler = {"Mustafa", "Yildirim", 20, 20060392}; //ogrenci yap�s�ndan ahmet ad�nda nesne olusturduk
	
	printf("Adi: %s Soyadi: %s Yas: %d Numarasi: %d", bilgiler.adi, bilgiler.soyadi, bilgiler.yas, bilgiler.numara); 
	
	
	
	
	
	
	
	return 0;
}
