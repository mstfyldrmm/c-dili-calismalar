#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Array C de arraylar ayný veri tipinde olmak zorundadýr
	//veri tipi dizi adi [] = {...};
	
	int rakamlar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("%d\n",rakamlar[0]);
	
	int dizi[5], i, toplam;
	
	for(i = 0; i < 5; i++)
	{
		printf("Bir sayi giriniz:");
		
		scanf("%d",&dizi[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		toplam += dizi[i];
	}
	printf("Girilen sayilarin toplami: %d",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
