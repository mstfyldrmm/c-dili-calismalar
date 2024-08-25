#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*                                                Ýç içe yapýlar                                                  */

struct adress {
	
	char mahalle[30];
	
	char cadde[30];
	
	int kat;
	
	int no;
	
	
};

struct ogrenci {
	
	char adi[20];
	
	char soyadi[20];
	
	int yas;
	
	char memleket[20];
	
	char kan_grubu[5];
	
	struct adress adres; //Bir yapý içinde baþka bir yapýnýn nesnesini kullanmýþ olduk

};


int main() {
	
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.adi, "Mustafa"); // ogrenci1.adi = "mustafa" hata verir
	
	strcpy(ogrenci1.soyadi, "Yildirim");
	
	strcpy(ogrenci1.memleket, "Erzurum");
	
	ogrenci1.yas = 20;
	
	strcpy(ogrenci1.kan_grubu, "A RH+");
	
	ogrenci1.adres.kat = 1;
	
	ogrenci1.adres.no = 33;
	
	strcpy(ogrenci1.adres.cadde, "Sultan Murat Caddesi");
	
	strcpy(ogrenci1.adres.mahalle, "Serdar Mahallesi");
	
	printf("Adi : %s Soyadi : %s Yas : %d Memleketi : %s Kan Grubu : %s Adres : %s %s No : %d Kat : %d", ogrenci1.adi, ogrenci1.soyadi, ogrenci1.yas, ogrenci1.memleket, ogrenci1.kan_grubu, ogrenci1.adres.mahalle, ogrenci1.adres.cadde, ogrenci1.adres.no, ogrenci1.adres.kat);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
