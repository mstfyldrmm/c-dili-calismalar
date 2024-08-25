#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *dosya;
	
	dosya = fopen("bos.txt", "a"); //append den gelir ve var olan dosyanýn bir alt satirindan yazmaya baslar 
	
	char text[256];
	
	
	if (dosya == NULL) {
		
		printf("Dosya olusturulamadi");
	
	}
	
	else {
		
		printf("Dosya basarili bir sekilde olusturuldu...");
		
	}
	
	printf("Yazdirilacak metini tuslayiniz:");
	
	// fgets fonksiyonu bizim kullanýcýdan veri almamýzý saglar 3 parametre alýr fgets(hangi diziye yazýlacak, max boyutu, stdin(standart input))
	
	//fputs ise stringi dosyaya yazdýrýr fputs(yazdýrýlacak dizi, yazdýrýlacak dosya pointerý)
	
	fgets(text, 256, stdin);
	
	fputs(text, dosya); //tekrar calisinca bir alt satira yazar
	
	
	
	
	
	
	return 0;
}
