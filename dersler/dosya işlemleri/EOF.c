#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *dosya;
	
	char metin[50];
	
	//2.bir yol feof fonksiyonu kullanmak
	
	dosya = fopen("metin.txt", "r");
	
	while(!feof(dosya)) {
		
		fscanf(dosya, "%s", metin);
		
		printf("Metin : %s\n", metin);
		
	}
	
	fclose(dosya);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
