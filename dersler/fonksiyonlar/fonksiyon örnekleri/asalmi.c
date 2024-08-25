#include <stdio.h>
#include <stdlib.h>

int asal(int(sayi))
{
	int i;
	
	for (i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			return 0; // return olduðu zaman fonksiyon biter
		}
	}
	return 1;
}

int main() {
	
	int sayi;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi);
	
	if (sayi >= 2)
	{
	
	if (asal(sayi) == 0)
	{
		printf("Girilen sayi Asal sayi degildir ");
	}	
	else
	{
		printf("Girilen sayi Asal sayi");
	}
	
}
else
{
	printf("Girilen sayi Asal sayi degildir");
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
