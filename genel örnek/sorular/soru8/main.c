#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char metin[100], yeni[100];
	
	int uzunluk, i;
	
	printf("Bir metin  giriniz:");
	
	scanf("%[^\n]s", metin);
	
	uzunluk = strlen(metin);
	
	printf("Metin : %s uzunlugu : %d\n", metin, uzunluk);
	
	printf("Girilen metnin tersi : ");
	
	for(i = 0; i < uzunluk; i++) {
	    
		yeni[i] = metin[uzunluk - 1 - i];
		
		printf("%c",yeni[i]);
	
	}
	
	
	
	
	
	
	
	return 0;
}
