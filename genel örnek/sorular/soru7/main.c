#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Girilen cümlenin sesli harf sayisini bulan program*/

int main() {
	
	char metin[50], sesli[] = {'a', 'e', 'i', 'o', 'u'} ;
	
	int uzunluk , adet = 0 , i , j ;
	
	printf("Bir metin giriniz:");
	
	scanf("%[^\n]s", metin);
	
	uzunluk = strlen(metin) ; //bosluguda bir karakter olarak alir
	
	printf("Girilen metnin uzunlugu : %d\n", uzunluk);
	
	for(i = 0; i < uzunluk; i++){
		
		for(j = 0; j < 5 ; j++){
			
			if(metin[i] == sesli[j])
			
			adet ++ ;
			
		}
			
	}
	
	
	printf("Sesli harf sayisi : %d", adet);
	
	
	
	return 0;
}
