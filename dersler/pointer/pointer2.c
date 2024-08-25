#include <stdio.h>
#include <stdlib.h>

/* pointer ile eleman sayisini kullanýcýnýn isteðine göre oluþturma */

int main() {
	
	int *p;
	
	int a = 10;
	
	p = &a;
	
	printf("%d \n", *p);
	
	*p = 20 ;
	
	printf("%d", a);
	
	int *q = (int *)malloc(sizeof(int)*a); //a nýn degeri kadar elemana sahiptir 
	
	q[3] = 25 ;
	
	printf("\n%d",q[3]) ;
	
	
	//pointerlarýn fonksiyonlarda kullanýmý
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
