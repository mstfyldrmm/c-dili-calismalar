#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
  int sayi, i, toplam, adet; // C programlamada de�er atanmaz ise default de�eri 0 kabul eder
  
  printf("Kac sayi olsun:");
  scanf("%d",&adet);
  
  for(i = 0; i < adet; i++)
  {
  	printf("Bir sayi giriniz:");
  	scanf("%d",&sayi);
  	if(sayi % 2 == 0)
  	{
  		toplam = toplam + sayi ; // C programlamada de�er atanmaz ise default de�eri 0 kabul eder toplam� burda default de�eri  0 
	  }
  }
  
	printf("Cift sayilarin toplami:%d",toplam); 
	
	return 0;
}
