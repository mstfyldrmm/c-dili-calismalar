#include <stdio.h>
#include <stdlib.h>



int main() {
	
	system("Color 2");
	
	// Dosya olu�tururken bunu bir pointera atamak zorunday�z
	
	// FILE *dosya = fopen("dosya_adi", "Kullanilacak mod"); //Burda fopen fonksiyonu ile adres bilgilerini dosya pointer�na atad�k
    
    /* Bir�ok mod bulunmaktad�r;
    
    1- W modu  : Bulundu�umuz dizinde boyle bir dosya yok ise dosya adinda yeni dosya olusturur ve de�i�tirmemizi sa�lar
    
    w+ ise hem okuma hem yazmaya yarar.
    
    E�er ayni dosya mevcut ise o dosyayi silip yerine bos bir ayni adi tasiyan yeni dosya olu�turur.
    
    2- r(read) modu : Dosyayi okumaya yarar
    
    3-a(add) modu : Var olan dosyayi de�i�tirmeyi sa�lar */
    
    FILE *dosya = fopen("metin.txt", "r"); // Eger calismaz ise *dosya pointera NULL deger atanir
    
    if (dosya == NULL) {
    	
    	printf("Dosya okuma islemi basarisiz oldu");
    	
	}
	
	else {
		
		printf("Dosya basarili bir sekilde okundu");
		
	}
    

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
