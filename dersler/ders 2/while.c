#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* While d�ng�s� 
	
	while(de�i�ken)
	{
	....
	....
	....
	sonsuz d�ng�den kurtarmak i�in art�� miktar�
} */

/*
int i; //default de�eri 0 al�r

i = 1;

while(i < 10)
{
	printf("%d-Merhaba dunya\n",i);
	i ++ ;
} */

//While ile fakt�riyel hesab�

int i, sayi;

printf("Faktoriyeli alinacak sayiyi giriniz:");

scanf("%d",&sayi);

i = sayi - 1;

while(i > 0)
{
	sayi = sayi * i ;
	i --;
	
}
	printf("Faktoriyel degeri:%d",sayi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
