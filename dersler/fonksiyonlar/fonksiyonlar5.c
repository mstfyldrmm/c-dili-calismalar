#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Stringlerin parametre olarak kullan�lmas�

/* c dili karakter dizilerinde �rne�in;

char dizi[] = "mustafa";
'm'--> 0.index
'u'--> 1.index
's'--> 2.index
.
.
'\0'
c de en sona karakter dizisinin bitti�ini belirtmek i�in otomatik olarak '\0' koyar */

int uzunlukbul(char isim[]){
	
	int i, uzunluk = 0;
	
	for(i = 0; isim[i] != '\0'; i++){
		
		uzunluk ++;
	}
	
	return uzunluk;
}

//bu yaz�lan fonksiyon string.h k�t�phanesinde mevcut ve strlen(string ad�)
// yani karakter dizisinin uzunlu�unu bu �ekilde bulaca��z



int main() {
	
	char isim[] = "Mustafa";
	
	printf("%d\n",uzunlukbul(isim));
	
	printf("%d",strlen(isim));
	
	
	
	return 0;
}
