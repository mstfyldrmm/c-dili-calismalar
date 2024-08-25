#include <stdio.h>
#include <stdlib.h>

//Call by value

void deger_degistir(int a, int b) { // bu parametreler fonksiyon çalýþtýkça var olurlar bunlara yerel deðiþkenler denir
	
	int gecici = a;
	
	a = b;
	
	b = gecici;
	
	printf("a: %d, b : %d", a, b);
	
}



int main() {
	
	int x = 5, y = 10;
	
	deger_degistir(x, y); //fonksiyon çalýþtýðý zaman a ve b diye deðiþkenler var olur ama fonskiyon bittiði zaman geçerli deðildir
	
	printf("\nx = %d, y = %d", x, y);
	
	//degerlerin farklý cýkmasýnýn sebebi local(yerel) deðiþneler foksiyon cagirildigi zaman gecerlidir
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
