#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *dosya;
	
	dosya = fopen("bos.txt", "a"); //append den gelir ve var olan dosyan�n bir alt satirindan yazmaya baslar 
	
	char text[256];
	
	
	if (dosya == NULL) {
		
		printf("Dosya olusturulamadi");
	
	}
	
	else {
		
		printf("Dosya basarili bir sekilde olusturuldu...");
		
	}
	
	printf("Yazdirilacak metini tuslayiniz:");
	
	// fgets fonksiyonu bizim kullan�c�dan veri almam�z� saglar 3 parametre al�r fgets(hangi diziye yaz�lacak, max boyutu, stdin(standart input))
	
	//fputs ise stringi dosyaya yazd�r�r fputs(yazd�r�lacak dizi, yazd�r�lacak dosya pointer�)
	
	fgets(text, 256, stdin);
	
	fputs(text, dosya); //tekrar calisinca bir alt satira yazar
	
	
	
	
	
	
	return 0;
}
