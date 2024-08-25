#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Stringlerin parametre olarak kullanýlmasý

/* c dili karakter dizilerinde örneðin;

char dizi[] = "mustafa";
'm'--> 0.index
'u'--> 1.index
's'--> 2.index
.
.
'\0'
c de en sona karakter dizisinin bittiðini belirtmek için otomatik olarak '\0' koyar */

int uzunlukbul(char isim[]){
	
	int i, uzunluk = 0;
	
	for(i = 0; isim[i] != '\0'; i++){
		
		uzunluk ++;
	}
	
	return uzunluk;
}

//bu yazýlan fonksiyon string.h kütüphanesinde mevcut ve strlen(string adý)
// yani karakter dizisinin uzunluðunu bu þekilde bulacaðýz



int main() {
	
	char isim[] = "Mustafa";
	
	printf("%d\n",uzunlukbul(isim));
	
	printf("%d",strlen(isim));
	
	
	
	return 0;
}
