#include <stdio.h>
#include <stdlib.h>

// Bubble sort algoritmasý 5 1 4 2 8 dizisi için ;

//1.geçiþ---> 1 5 4 2 8

//2.geçiþ---> 1 4 5 2 8

//3.geçiþ---> 1 4 2 5 8

// 1 2 4 5 8 bu þekilde dizinin elemanlarýný sýralar

void bubble_sort(int dizi[], int boyut) {
	
	int i, j;
	
	for(i = 0; i < boyut; i++) {
		
		for(j = 1; j < boyut-1; j++) {
			
			if(dizi[j-1] > dizi[j]) {
				
				int temp;
				
				temp = dizi[j];
				
				dizi[j] = dizi[j-1];
				
				dizi[j-1] = temp;
				
				
			}
			
			
		}
		
		
		
	}

}





int main() {
	
	int sayilar[10], i, adet;
	
	printf("Kac adet sayi olsun:");
	
	scanf("%d",&adet);
	
	for(i = 0; i < adet; i++) {
		
		scanf("%d",&sayilar[i]);

	}
	
	bubble_sort(sayilar, adet);
	
	for(i = 0; i < adet; i++) {
		
		printf("%d",sayilar[i]);
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
