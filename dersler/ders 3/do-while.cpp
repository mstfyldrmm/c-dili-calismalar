#include <stdio.h>
#include <stdlib.h>
int main(){
	
	/* DO-WH�LE D�NG�S�
	do {
	...
	...                 while ve fordan fark� ko�ulu en son kontrol eder 
	...                 ve d�ng� ilk ba�larken ko�ulu s�namadan ba�lar ve ko�ul bitince s�namaya baslar
	art�� miktar�
}
while(ko�ul);

*/
/*	system("COLOR 3");
	int i = 10;
	
	do {
		
		printf("%d Merhaba dunya\n",i);
		i--;
	}
	while(i > 0);
*/
	
	//******************************FOR D�NG�S�***************************

	int i, j;
	
	for(i = 0, j = 1; i < 10 && j < 5; j++, i++) //Bu �ekilde birden fazla de�i�kene imkan tan�r
	{
		printf("%d %d\n", i, j);
	}
	
	//D�NG�LERDE BREAK DEY�M� D�NG�DEN �IKMASINI SA�LAR
	
	//FOR �LE SONSUZ DONGU---> for(;;)
	
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
