#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i, j, asal = 0, n;
	
	int alt = 2, adet;
	
	printf("Sayi adetini giriniz:");
	
	scanf("%d", &adet);
	
	while(n < adet){
		
		for(i = 2; i < 100; i++){
			
			for(j = i; j > 1; j--){
				
				asal = 0;
				
				if(i % j == 0){
					
					asal ++;
				}
				
				if(asal == 1){
					
					printf("%d\n", i);
					
					n++;
					
					break;
				}
				
			}
		}
		
		
		
		
		
		
		
		
		
		n++;
	}
	




	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
