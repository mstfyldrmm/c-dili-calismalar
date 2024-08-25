#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* iç içe yapýlar 1  */

struct konum{
	
	char mahalle[30];
	
	char sokak[30];
	
	int no;
	
	int kat;
	
};

struct bilgiler{
	
	char adi[20];
	
	char soyadi[20];
	
	int numara;
	
	struct konum ogrenci;

};



int main() {
	
	struct bilgiler kisi1;
	
	strcpy(kisi1.adi,"Mustafa");
	
	strcpy(kisi1.soyadi,"Yildirim");
	
	kisi1.numara = 20060392;
	
	strcpy(kisi1.ogrenci.mahalle,"Serdar Mahallesi");
	
	strcpy(kisi1.ogrenci.sokak,"Sultan Murat Caddesi");
	
	kisi1.ogrenci.kat = 1;
	
	kisi1.ogrenci.no = 33;
	
	printf("Ad : %s\n",kisi1.adi);
	
	printf("Soyad: %s\n",kisi1.soyadi);
	
	printf("No : %d\n",kisi1.numara);
	
	printf("Adres Bilgileri : %s %s No : %d Kat : %d",kisi1.ogrenci.mahalle,kisi1.ogrenci.sokak,kisi1.ogrenci.no,kisi1.ogrenci.kat);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
