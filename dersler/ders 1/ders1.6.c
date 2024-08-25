#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
  int sayi, i, buyuk = 0;
  
  printf("Bir sayi giriniz:");
  scanf("%d",&sayi);
  
  for(i = 1; i < 4; i++)
  {
  	printf("Bir sayi giriniz:");
  	scanf("%d",&sayi);
  	if(sayi > buyuk)
  	{
  		sayi = buyuk;
	  }
  }
  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
