#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int boyut, a = 1, b = 1, c;
	
	int i, j;
	
	printf("Matrisin boyutunu giriniz:");
	
	scanf("%d",&boyut);
	
	for(i = 0; i < boyut; i++){
		
		int p = a, q = b ;
		
		for( j = 0; j <= boyut; j++){
			
		int	r = p + q ;
			
			printf(" %d", p);
			
			p = q ;
			
			q = r ;
		
		}
		    printf("%\n");
		    
		    c = a + b ;
		
			a = b ;
			
			b = c ;
			
			
			
		
	}
	



	
	return 0;
}
