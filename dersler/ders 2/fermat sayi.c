#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* 2^2n+1 �eklinde yaz�labilen say�lara fermat say� denir.Bir ka� �rnek vermek gerekirse
n=0 i�in sonu� 2 olacakt�r.
n=1 i�in sonu� 5 olacakt�r.
n=2 i�in sonu� 9 olacakt�r.
n=3 i�in sonu� 17 olacakt�r.
n=4 i�in sonu� 33 olacakt�r.
n=5 i�in sonu� 65 olacakt�r.
n=6 i�in sonu� 129 olacakt�r. */
	
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
