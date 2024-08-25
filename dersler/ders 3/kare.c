#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n, toplam, uzunluk, alan;
	
	printf("Karenin uzunlugu:");
	
	scanf("%d",&uzunluk);
	
	printf("Kac adet olsun:");
	
	scanf("%d",&n);
	
	alan = uzunluk * uzunluk ;
	
	toplam += alan; 
	
	while(n > 1)
	{
		uzunluk = uzunluk / 2 ;
		
		printf("uzunluk:%d\n",uzunluk);
		
		alan = uzunluk * uzunluk ;
		
		toplam += alan ;
		
		printf("Toplam = %d\n",toplam);
		
		n--;
	}
	
	printf("Alanlar toplami : %d",toplam);
	
	
	return 0;
}
