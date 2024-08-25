#include <stdio.h>
#include <stdlib.h>

/*                         Bubble sort (kabarcýk sýralamasý)
Verilen herhangi iki bir dizi için her iki elamanýný karþýlaþtýrmaya dayanan algoritmadýr örneðin; 6 9 1 24 5 6 83 1 dizisi için;

1.adým : 6 ile 9 karþýlaþtýrýr 6 < 9 olduðundan  yer deðiþtirmez 6 9 1 24 5 6 83 1
2.adým : 9 ile 1 karþýlaþtýrýr 9 > 1 olduðundan yer deðiþtiri 6 1 9 24 5 6 83 1
3.adým : 9ile 24 karþýlastýrý 9 < 24 olduðundan yer deðiþtirmez 6 1 9 24 5 6 83 1 
4.adým : 6 1 9 5 24 6 83 1 
...
daha sonra bu iþlemi 5 kez toplamda 6 kez yapar */

#define MAX 50

void bubblesort(int dizi[], int size) {
	
	int i, j;
	
	for(i = 0; i < size;i++) {
		
		for(j = 1; j < size-i; j++) {
			
			if(dizi[j-1] > dizi[j]) {
				
			int temp;
			
			temp = dizi[j];
			
			dizi[j] = dizi[j - 1];
			
			dizi[j-1] = temp;
			
			
			
	}
			
	}

		
	}
	
	
}



int main() {
	
	int array[MAX], i, eleman;
	
	printf("Kac elemanli olsun :");
	
	scanf("%d",&eleman);
	
	for(i = 0; i < eleman; i++) {
		
		printf("Bir sayi giriniz:");
		
		scanf("%d",&array[i]);

	}
	
	bubblesort(array, eleman);
	
	for(i = 0; i < eleman; i++) {
		
		printf(" %d",array[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
