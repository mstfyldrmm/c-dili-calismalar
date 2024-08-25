#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/* Dosya i�lemleri yap�l�rken,FILE structure(yap�s�na) yap�s�yla i�lem yap�l�r
	   Bu yuzden dosya i�lemlerini bir pointera atamak zorunday�z
	   ��te bu dosya pointera FILE yap�s�ndadir.
	   
	   FILE *pointer; tan�mlan�r 
	   Daha sonra dosya okuma, yazma vb i�lemler ger�ekle�tirilir
	   Ardindan her fonksiyondan sonra dosya fclose ile kapat�l�r
	   Yeni bir mod i�in ise tekrardan dosya a��l�r ilgili i�lmeler ger�ekle�tirilir.
	*/
	
	/* Dosya i�lemlerinde birden fazla mod bulunmaktadir.
	
	1-w modu : Bulundu�umuz dizinde boyle bir dosya yok ise dosya adinda yeni dosya olu�turur.
	
	Dosyayi yazmak i�in a�ar
	
	Dosya dizinde yoksa dosyayi olu�urur.
	
	2-r(read) modu : Dosyayi okumak i�in a�ar
	
	Dosya yoksa hata d�ner.
	
	3-a modu : Dosyayi eklemek icin a�ar yani var olan dosyayi degistirmemizi saglar. 
	
	Bu modlara ek olarak + i�aretli modlari vardir.
	
	1-w+ modu : Dosyayi okumak ve yazmak i�in a�ar(mevcut dosyanin uzerine yazar)
	
	2-a+ modu : Dosyayi okumak ve dosyaya eklemek i�in a�ar	
	
	3-r+ modu : Dosyayi okumak ve yazmak i�in a�ar
	
	
	*/
	
	//fopen fonksiyonu---> dosyayi gerekli i�lemleri yapmak i�in a�mam�zi saglar
	
	// fopen("dosya adi", "mod(a,r,w)")
	
	
	
	FILE *dosya =  fopen("metin.txt", "a"); //Fonksiyon calismaz ise NULL degeri doner.
	
	
	if(dosya == NULL) {
		
		printf("Dosya okuma islemi basarisiz oldu");
		
	}
	else {
		
		printf("Dosya okuma islemi basarili bir sekilde gerceklestirildi");
		
	}
	
	
	
	fclose(dosya); //dosyayi kapatti
	
	
	
	
	
	
	
	
	
	
	return 0;
}
