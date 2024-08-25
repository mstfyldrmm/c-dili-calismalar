#include <stdio.h>
#include <stdlib.h>

/* 33 44 21 83 56 73 22 i�in insertion sort �u �ekildedir

Algoritma ilk �nce ilk say�dan ba�lar ve kendi i�erisinde s�ralar 

Daha sonra 1. ve 2.say�y� kar��la�t�r�p s�ralar----> (33 ve 44) 33 44 21 83 56 73 22

Daha sonra 2. ve 3.say�y� kar��la�t�r�p s�ralar---> (44 ve 21) 21 33 44 83 56 73 22 �eklinde s�ralama yapar 


*/


void insertion_sort(int dizi[], int size) {
	
	int i, j;
	
	int eleman;
	
	for(i = 1; i < size; i++) {
		
		eleman = dizi[i];
		
		j = i - 1;
		
		while(j >= 0) {
			
			dizi[j + 1] = dizi[j];
			
			j--;
			
		}
		
		dizi[j + 1] = eleman;
		
		
	}

}



int main() {
	
	int sayilar[50], boyut;
	
	int i;
	
	printf("Kac adet sayi olsun :");
	
	scanf("%d",&boyut);
	
	for(i = 0; i < boyut; i++) {
		
		scanf("%d",&sayilar[i]);
		
	}	
	
	insertion_sort(sayilar, boyut);
	
	for(i = 0; i < boyut; i++) {
		
		printf("%d ",sayilar[i]);
		
		
	}
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
