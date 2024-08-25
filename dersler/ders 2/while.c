#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* While döngüsü 
	
	while(deðiþken)
	{
	....
	....
	....
	sonsuz döngüden kurtarmak için artýþ miktarý
} */

/*
int i; //default deðeri 0 alýr

i = 1;

while(i < 10)
{
	printf("%d-Merhaba dunya\n",i);
	i ++ ;
} */

//While ile faktöriyel hesabý

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
