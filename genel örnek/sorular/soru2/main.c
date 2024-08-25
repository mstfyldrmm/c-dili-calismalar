#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	system("color 6");
	
	int sayi, i, j;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi);
	
	for(i = sayi; i > 2; i--){
		
		int asal = 1;
		
		for(j = 2; j < i; j++){
			
			if(i % j == 0){
				
				asal = 0;
			}	
		}
		
		if(asal == 1){
			
			printf("Girilen sayidan en kucuk asal sayi : %d", i);
			
			break;
						
		}
		
		
		
		
	}
	
	
	
	return 0;
}
