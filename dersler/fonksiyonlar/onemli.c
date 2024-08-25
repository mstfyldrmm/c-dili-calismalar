#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
void hatabas(int number);
	

int main() {
	
    //                                 Fonksiyonlar
	
	/* C programlamada fonksiyon tanımlamak nasıl olur?
	
	Donustipi(int, float....) fonksiyon adi(aldiği parametreler)
	
	1-Eğer bir fonksiyon bir değer donmeyecekse, yani bir tekım işlemler yapıldıktan sonra bir çıktı elde edilmiyorsa void kullanılır
	
	2-Eğer fonksiyon parametre almıyor ise şu şekilde yapılmalıdır---> fonksiyon_adi(void) örn; toplam(void)
	
	3-Fonksiyonlar genelde main üzerinde tanımlanır ama bazı durumlarda taslağı main üzerinde olup ana hattı main içinde veya 
	
	altında olabilir*/
	
	int sayi;
	
	printf("Bir sayi giriniz : ");
	
	scanf("%d",&sayi);
	
	void hatabas(int number) {
		
		printf("Hata kodu %d", number);
		
	}
	
	
	if(sayi >= 0) {
		
		printf("Hata bulunamadi");
	
	}
	
	else {
		
		hatabas(404);
		
		
	}
	

	return 0;
}
	/*hata bas fonksiyonunu buraya tanımlayabiliriz
	
	su sekilde;
	void hatabas(int number) {
		
		printf("Hata kodu %d", number);
		
	}
	*/
	
	
	
	
	

