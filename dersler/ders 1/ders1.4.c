#include <stdio.h>
#include <stdlib.h>
#include <math.h> //ifadenin karekokunu almak icin matematik modülünü dahil etmemiz gerekir

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int sayi1, sayi2, sayi3, sayi4, sayi5; 
	float ortalama;
	printf("Bes sayi giriniz:");
	scanf("%d %d %d %d %d",&sayi1, &sayi2, &sayi3, &sayi4, &sayi5);
	ortalama = (sayi1 + sayi2 + sayi3 + sayi4 + sayi5) / 5.0;
	printf("Sayilarin aritmetik ortalamasi: %f",ortalama);*/
	int a, b, c, delta;
	float kok_delta, kok1, kok2;
	printf("a yi giriniz:");
	scanf("%d", &a);
	printf("b yi giriniz:");
	scanf("%d", &b);
	printf("c yi giriniz:");
	scanf("%d", &c);
	printf("Ikinci dereceden bir bilinmeyenli denklem ---> %dx^2 + %dx + %d = 0 \n",a ,b ,c);
	
	delta = b * b - 4 * a * c;
	
	// Bir ifadenin karekökünün hesaplayan fonksiyon "sqrt"
	
	kok_delta = sqrt(delta);
	
	if(delta > 0){
		kok1 =( -b + kok_delta) / a;
		kok2 = ( -b - kok_delta) / a;
		printf("Birinci kok:%d\n",kok1);
		printf("Ikinci kok: %d",kok2);
	}
	else if(delta == 0)
	{
		kok1 =( -b + kok_delta) / a;
		printf("Denklem tam karedir ve koku : %d",kok1);
	}
	else 
	{
		printf("Reel kok bulunmamaktadir");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
