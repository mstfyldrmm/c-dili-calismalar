#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//                                    CALLOC FONKS�YONU
	
	//Calloc malloc ile ayn� islevi yapar ufak bir fark mevcuttur.
	
	//Calloc ay�rd�g� yerdeki verileri once siler daha sonra yer ay�r�r.
	
	//calloc iki parametre al�r
	
	
	int *p = (int *)malloc(sizeof(int)*20); //20 elemanl�k bellekte yer ay�rd�
	
	int *q = (int *)calloc(20,sizeof(int));
	

	
	//Calloc ay�rd�g� yerdeki verileri once siler daha sonra yer ay�r�r.malloc ise bellekte rastgele ��p de�erler al�r
	//�rne�in;
	
	int i;
	
	for(i = 0; i<20; i++) {
		
		printf("malloc un p[%d] degeri %d calloc un q[%d] degeri %d\n",i, p[i],i, q[i]);
	
	}
	
	//realloc ise malloc yada calloc ile ay�rd���m�z yer miktar�n� de�i�tirmeye sa�lar ve pointer dondurur
	
	//realloc(de�i�tirmek istedi�imiz seyi adresi, art�� veya azal�� miktar�)
	
	p = (int *)realloc(p, 15*sizeof(int)); //art�k p pointer�n�n eleman sayisi 15 oldu
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
