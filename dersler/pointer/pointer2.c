#include <stdio.h>
#include <stdlib.h>

/* pointer ile eleman sayisini kullan�c�n�n iste�ine g�re olu�turma */

int main() {
	
	int *p;
	
	int a = 10;
	
	p = &a;
	
	printf("%d \n", *p);
	
	*p = 20 ;
	
	printf("%d", a);
	
	int *q = (int *)malloc(sizeof(int)*a); //a n�n degeri kadar elemana sahiptir 
	
	q[3] = 25 ;
	
	printf("\n%d",q[3]) ;
	
	
	//pointerlar�n fonksiyonlarda kullan�m�
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
