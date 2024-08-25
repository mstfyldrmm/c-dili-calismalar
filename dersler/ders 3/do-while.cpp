#include <stdio.h>
#include <stdlib.h>
int main(){
	
	/* DO-WHÝLE DÖNGÜSÜ
	do {
	...
	...                 while ve fordan farký koþulu en son kontrol eder 
	...                 ve döngü ilk baþlarken koþulu sýnamadan baþlar ve koþul bitince sýnamaya baslar
	artýþ miktarý
}
while(koþul);

*/
/*	system("COLOR 3");
	int i = 10;
	
	do {
		
		printf("%d Merhaba dunya\n",i);
		i--;
	}
	while(i > 0);
*/
	
	//******************************FOR DÖNGÜSÜ***************************

	int i, j;
	
	for(i = 0, j = 1; i < 10 && j < 5; j++, i++) //Bu þekilde birden fazla deðiþkene imkan tanýr
	{
		printf("%d %d\n", i, j);
	}
	
	//DÖNGÜLERDE BREAK DEYÝMÝ DÖNGÜDEN ÇIKMASINI SAÐLAR
	
	//FOR ÝLE SONSUZ DONGU---> for(;;)
	
	int k, sayi;
	
	for(k = 0; true; k++)
	{
		printf("Cikmak icin -1 tuslayin");
		
		if(sayi != -1)
		{
		printf("Bir sayi giriniz");
		
		scanf("%d",&sayi);
		}
		else
		{
			break;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
