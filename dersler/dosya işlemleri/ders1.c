#include <stdio.h>
#include <stdlib.h>



int main() {
	
	system("Color 2");
	
	// Dosya oluþtururken bunu bir pointera atamak zorundayýz
	
	// FILE *dosya = fopen("dosya_adi", "Kullanilacak mod"); //Burda fopen fonksiyonu ile adres bilgilerini dosya pointerýna atadýk
    
    /* Birçok mod bulunmaktadýr;
    
    1- W modu  : Bulunduðumuz dizinde boyle bir dosya yok ise dosya adinda yeni dosya olusturur ve deðiþtirmemizi saðlar
    
    w+ ise hem okuma hem yazmaya yarar.
    
    Eðer ayni dosya mevcut ise o dosyayi silip yerine bos bir ayni adi tasiyan yeni dosya oluþturur.
    
    2- r(read) modu : Dosyayi okumaya yarar
    
    3-a(add) modu : Var olan dosyayi deðiþtirmeyi saðlar */
    
    FILE *dosya = fopen("metin.txt", "r"); // Eger calismaz ise *dosya pointera NULL deger atanir
    
    if (dosya == NULL) {
    	
    	printf("Dosya okuma islemi basarisiz oldu");
    	
	}
	
	else {
		
		printf("Dosya basarili bir sekilde okundu");
		
	}
    

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
