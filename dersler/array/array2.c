#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// String ifadeler c de karakter dizisi olarak tan�mlan�r 
	// %s karakter dizisini yazd�rmak i�in %c karakteri yazd�rmak i�in kullan�l�r
	//scanf("%s",karakterdizisi") karakter dizisi al�rken ba��na & konulmaz
	system("COLOR 3");
	
	char isim[] = "Mustafa", ad[30];
	
	printf("%s",isim); // M indexi 0 u indexi 1 s indexi 3....
	
	/* scanf kullan�c�dan veriyi bo�luk g�renen kadar al�r bo�luktan sonraki girdiyi almaz
	
	Ama e�er  scanf("%[^\n]s",isim); yapar isek scanf bo�luktan sonraki k�sm�da al�r */ 
	
	printf("\nAdinizi giriniz:");
	
	scanf("%[^\n]s]",ad);
	
	printf("\n%s",ad);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
