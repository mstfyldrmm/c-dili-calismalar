#include <stdio.h>
#include <stdlib.h>

void f(int x, int *y) {
	
	if(*y < 9) {
		
		x++;(*y)++;
		
		f(x,y);
		
		printf("\n%d %d",x,*y);

	}
}





int main() {
	
	int a = 5, b = 5;
	
	f(a,&b);
	
	printf("\n%d %d",a,b);
	
	
	
	
	
	
	
	
	return 0;
}
	
	
	
	
	
	
	
	

	
	
	
	
	
	







