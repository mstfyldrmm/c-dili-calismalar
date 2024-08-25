#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// String ifadeler c de karakter dizisi olarak tanýmlanýr 
	// %s karakter dizisini yazdýrmak için %c karakteri yazdýrmak için kullanýlýr
	//scanf("%s",karakterdizisi") karakter dizisi alýrken baþýna & konulmaz
	system("COLOR 3");
	
	char isim[] = "Mustafa", ad[30];
	
	printf("%s",isim); // M indexi 0 u indexi 1 s indexi 3....
	
	/* scanf kullanýcýdan veriyi boþluk görenen kadar alýr boþluktan sonraki girdiyi almaz
	
	Ama eðer  scanf("%[^\n]s",isim); yapar isek scanf boþluktan sonraki kýsmýda alýr */ 
	
	printf("\nAdinizi giriniz:");
	
	scanf("%[^\n]s]",ad);
	
	printf("\n%s",ad);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
