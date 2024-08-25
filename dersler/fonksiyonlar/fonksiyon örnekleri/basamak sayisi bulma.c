#include <stdio.h>
#include <stdlib.h>

int basamak_sayisi(int sayi){
	
	int  basamak = 1, i = 1;
	
	while(i < 100){
		
		sayi = sayi / 10;
		
		basamak += 1;
		
		if(sayi < 10){
			
			break;	
			
		}
		
		i++;
	}
	
	return basamak;
}



 
int main(){
	
	int sayi, kalan, basamak = 1, i;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi);
	
	printf("Basamak sayisi : %d",basamak_sayisi(sayi));

  
	
	
	
	return 0;
}
