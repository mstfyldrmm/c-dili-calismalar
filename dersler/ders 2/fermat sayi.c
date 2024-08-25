#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* 2^2n+1 þeklinde yazýlabilen sayýlara fermat sayý denir.Bir kaç örnek vermek gerekirse
n=0 için sonuç 2 olacaktýr.
n=1 için sonuç 5 olacaktýr.
n=2 için sonuç 9 olacaktýr.
n=3 için sonuç 17 olacaktýr.
n=4 için sonuç 33 olacaktýr.
n=5 için sonuç 65 olacaktýr.
n=6 için sonuç 129 olacaktýr. */
	
	int i, sayi; 
	float test;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi);
	
	test = sayi - 1;
	
	printf("%d",test);
	
	while(1)
	{
		test = test / 2 ;
		if(test == 1.0);
		{ 
		  printf("Girilen sayi fermat sayidir");
		  break;
		}
	}
	printf("%d",test);


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
