#include <stdio.h>
#include <stdlib.h>

/*                                   SELECTION SORT                                                  

Dizilerde elemanlarý sýralamamýza yarar

örneðin 5 7 2 9 6 1 3 7 dizisi için;

Ýlk önce en küçük elemaný bulur ve 1.sýradaki eleman ile yer deðiþtirir ---> 1 7 2 9 6 5 3 7

Daha sonra 1.elemanýn yerini sabitleyip 2.elemandan baþlayarak ayný iþlemi yapar ---> 1 2 7 9 6 5 3 7

1. ve  2. elemanýn yerleri sabit olduðu için ayný iþlemi diðer elemanlardan devam ettirir ---> 1 2 3 9 6 5 7 7
.
.
.
1 2 3 5 6 7 7 9

*/

void selection_sort(int dizi[], int size) {
	
	int i, j;
	
	int minumumindex;
	
	for(i = 0; i < size; i++) {
		
		minumumindex = i;
		
		for(j = i; j < size; j++) {
			
			if(dizi[j] < dizi[minumumindex]) {
				
				minumumindex = j;
				
			}
			
			int degisim = dizi[i];
			
			dizi[i] = dizi[minumumindex];
			
			dizi[minumumindex] = degisim;
			
			
			
			
			
			
		}
		
		
	}

	
}


int main() {
	
	int sayilar[50], boyut;
	
	int i;
	
	printf("Kac sayi olsun");
	
	scanf("%d",&boyut);
	
	for(i = 0; i < boyut; i++) {
		
		scanf("%d",&sayilar[i]);

	}	
	
	selection_sort(sayilar, boyut);
	
	for(i = 0; i < boyut; i++) {
		
		printf(" %d",sayilar[i]);

	}
	
	
	
	
	
	
	return 0;
}
