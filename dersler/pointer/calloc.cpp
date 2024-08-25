#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//                                    CALLOC FONKSÝYONU
	
	//Calloc malloc ile ayný islevi yapar ufak bir fark mevcuttur.
	
	//Calloc ayýrdýgý yerdeki verileri once siler daha sonra yer ayýrýr.
	
	//calloc iki parametre alýr
	
	
	int *p = (int *)malloc(sizeof(int)*20); //20 elemanlýk bellekte yer ayýrdý
	
	int *q = (int *)calloc(20,sizeof(int));
	

	
	//Calloc ayýrdýgý yerdeki verileri once siler daha sonra yer ayýrýr.malloc ise bellekte rastgele çöp deðerler alýr
	//örneðin;
	
	int i;
	
	for(i = 0; i<20; i++) {
		
		printf("malloc un p[%d] degeri %d calloc un q[%d] degeri %d\n",i, p[i],i, q[i]);
	
	}
	
	//realloc ise malloc yada calloc ile ayýrdýðýmýz yer miktarýný deðiþtirmeye saðlar ve pointer dondurur
	
	//realloc(deðiþtirmek istediðimiz seyi adresi, artýþ veya azalýþ miktarý)
	
	p = (int *)realloc(p, 15*sizeof(int)); //artýk p pointerýnýn eleman sayisi 15 oldu
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
