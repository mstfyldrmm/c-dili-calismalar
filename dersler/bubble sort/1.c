#include <stdio.h>
#include <stdlib.h>

/*                         Bubble sort (kabarc�k s�ralamas�)
Verilen herhangi iki bir dizi i�in her iki elaman�n� kar��la�t�rmaya dayanan algoritmad�r �rne�in; 6 9 1 24 5 6 83 1 dizisi i�in;

1.ad�m : 6 ile 9 kar��la�t�r�r 6 < 9 oldu�undan  yer de�i�tirmez 6 9 1 24 5 6 83 1
2.ad�m : 9 ile 1 kar��la�t�r�r 9 > 1 oldu�undan yer de�i�tiri 6 1 9 24 5 6 83 1
3.ad�m : 9ile 24 kar��last�r� 9 < 24 oldu�undan yer de�i�tirmez 6 1 9 24 5 6 83 1 
4.ad�m : 6 1 9 5 24 6 83 1 
...
daha sonra bu i�lemi 5 kez toplamda 6 kez yapar */

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
