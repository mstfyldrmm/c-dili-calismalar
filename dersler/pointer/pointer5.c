#include <stdio.h>
#include <stdlib.h>

//call by reference


void deger_degistir(int *a, int *b) {
	
	int gecici = *a;
	
	*a = *b;
	
	*b = gecici;
	
}






int main() {
	
	int x = 5, y = 10;
	
	deger_degistir(&x, &y);
	
	printf("x : %d, y : %d", x, y);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
