#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
void heapify(int arr[], int n, int i) {
      int temp;
      int largest = i;
      int l = 2 * i + 1;
      int r = 2 * i + 2;
 
      if (l < n && arr[l] > arr[largest])
         largest = l;
 
      if (r < n && arr[r] > arr[largest])
         largest = r;
 
      if (largest != i) {
         temp = arr[i];
         arr[i] = arr[largest];
         arr[largest] = temp;
 
         heapify(arr, n, largest);
      }
   }
 
void heapSort(int arr[], int n) {
	
   int temp;
 
 	int i = 0;
 
   for (i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
 
   for (i = n - 1; i >= 0; i--) {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
 
      heapify(arr, i, 0);
   }
}
 
int main() {
   
   	int boyut = 6000;
		
	int dizi[boyut];
	
	FILE *dosya = fopen("tersten_sirali.txt", "r");
	
	int i = 0;
	
	while(!feof(dosya)) {
			
		fscanf(dosya, "%d", &dizi[i]);
	
		i++;
		
	}
   
 	clock_t start_t = clock();
 	
   	heapSort(dizi, boyut);

 	clock_t end_t = clock();
   	 
    printf("\nstart_t degeri: %ld\n", start_t);
    
    printf("end_t degeri: %ld\n", end_t);
    
    printf("CPU sureci (saniye): %lf\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
      
      
      
return 0;     
}
 
