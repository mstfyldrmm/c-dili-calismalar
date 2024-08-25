#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int dizi[], int size) {
	
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

int main(int argc, char *argv[]) {
	
	int boyut = 6000;
	
	int dizi[boyut];
	
	FILE *dosya = fopen("tersten_sirali.txt", "r");
	
	int i = 0;
	
	while(!feof(dosya)) {
			
		fscanf(dosya, "%d", &dizi[i]);
	
		i++;
		
	}
	
	bubble_sort(dizi, boyut);
	
	for(i = 0; i < boyut; i++) {
		
		printf("%d ", dizi[i]);
		
	}
	
	
	
	
	return 0;
}
