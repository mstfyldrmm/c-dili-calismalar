#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//�F-ELSE 
	/*
	if(de�i�ken..durum)
	{
	.....
    }
    else if(de�i�ken..durum)
    {
    ....
    }
    else 
    {
    ..}    boole veri tipi (true yada false) ve 0 haric t�m say�lar true �rn if(500) bu true */
    
    /* �artl� cumle
    a = x > y ? x: y; (e�er x > y ise a = x dir e�er ifade sa�lanmazsa a = y dir burda e�er anlam�n� (?) katar*/
    /* int a = 25, b = 99, x;
	x = a < b ? a : b ; 
	printf("x in degeri:%d",x) ;  */
	
    int vize, final, quiz, devamlilik;
	float ortalama;
	
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	printf("Quiz notunuzu giriniz: ");
	scanf("%d",&quiz);
	printf("Devamlilik notunuzu giriniz:");
	scanf("%d",&devamlilik);
	
	ortalama = (final / 2) + (vize * 3/10 ) + (quiz / 10) + (devamlilik / 10);
	
	if(ortalama >= 90)
 		{
 			printf("Ortalamaniz : %3.f harf notunuz A",(float)ortalama);
		 }
	
	else if(ortalama>=70 && ortalama <80)
	{
 			printf("Ortalamaniz : %3.f harf notunuz B",(float)ortalama);
	}
	else if(ortalama>=60 && ortalama <70)
	{
 			printf("Ortalamaniz : %3.f harf notunuz C",(float)ortalama);
	}
	else 
	{
		printf("Ortalamaniz : %3.f harf notunuz F",(float)ortalama);
	}
	
	
	
	
	
	return 0;
}
