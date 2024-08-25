#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/* Dosya iþlemleri yapýlýrken,FILE structure(yapýsýna) yapýsýyla iþlem yapýlýr
	   Bu yuzden dosya iþlemlerini bir pointera atamak zorundayýz
	   Ýþte bu dosya pointera FILE yapýsýndadir.
	   
	   FILE *pointer; tanýmlanýr 
	   Daha sonra dosya okuma, yazma vb iþlemler gerçekleþtirilir
	   Ardindan her fonksiyondan sonra dosya fclose ile kapatýlýr
	   Yeni bir mod için ise tekrardan dosya açýlýr ilgili iþlmeler gerçekleþtirilir.
	*/
	
	/* Dosya iþlemlerinde birden fazla mod bulunmaktadir.
	
	1-w modu : Bulunduðumuz dizinde boyle bir dosya yok ise dosya adinda yeni dosya oluþturur.
	
	Dosyayi yazmak için açar
	
	Dosya dizinde yoksa dosyayi oluþurur.
	
	2-r(read) modu : Dosyayi okumak için açar
	
	Dosya yoksa hata döner.
	
	3-a modu : Dosyayi eklemek icin açar yani var olan dosyayi degistirmemizi saglar. 
	
	Bu modlara ek olarak + iþaretli modlari vardir.
	
	1-w+ modu : Dosyayi okumak ve yazmak için açar(mevcut dosyanin uzerine yazar)
	
	2-a+ modu : Dosyayi okumak ve dosyaya eklemek için açar	
	
	3-r+ modu : Dosyayi okumak ve yazmak için açar
	
	
	*/
	
	//fopen fonksiyonu---> dosyayi gerekli iþlemleri yapmak için açmamýzi saglar
	
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
