#include <stdio.h>
#include <stdlib.h>

//Call by value

void deger_degistir(int a, int b) { // bu parametreler fonksiyon �al��t�k�a var olurlar bunlara yerel de�i�kenler denir
	
	int gecici = a;
	
	a = b;
	
	b = gecici;
	
	printf("a: %d, b : %d", a, b);
	
}



int main() {
	
	int x = 5, y = 10;
	
	deger_degistir(x, y); //fonksiyon �al��t��� zaman a ve b diye de�i�kenler var olur ama fonskiyon bitti�i zaman ge�erli de�ildir
	
	printf("\nx = %d, y = %d", x, y);
	
	//degerlerin farkl� c�kmas�n�n sebebi local(yerel) de�i�neler foksiyon cagirildigi zaman gecerlidir
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
