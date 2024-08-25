#include <stdio.h>
#include <stdlib.h>

/*Birden fazla tipi(integer, float...) birleþtirip tek bir tip oluþturmak için yapýlýr yani ruby class 

Tanýmlama þekli 
struct etiketadi {

deðiþken tipi deðiþken1;

deðiþken tipi deðiþken2;

deðiþken tipi deðiþken3;
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
	
	struct ogrenci bilgiler = {"Mustafa", "Yildirim", 20, 20060392}; //ogrenci yapýsýndan ahmet adýnda nesne olusturduk
	
	printf("Adi: %s Soyadi: %s Yas: %d Numarasi: %d", bilgiler.adi, bilgiler.soyadi, bilgiler.yas, bilgiler.numara); 
	
	
	
	
	
	
	
	return 0;
}
