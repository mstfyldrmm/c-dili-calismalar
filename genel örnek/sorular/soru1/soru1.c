#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	system("Color 9");
	
	int n, i, j;
	
	printf("Kare matrisin uzunlugunu giriniz:");
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			
		  if(i == n / 2 || j == n / 2 || (n % 2 == 0 && i == (n / 2) - 1 || j == (n / 2) - 1))
		  
		  printf("1");
		  
		  else
		  
		  printf("0");
		  
		}
		printf("\n");
		
	}
	
	getch();

	
	return 0;
}
