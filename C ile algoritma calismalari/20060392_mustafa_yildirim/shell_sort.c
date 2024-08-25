#include <stdio.h>
#include <stdlib.h>

void shell_sort (int *p, int size) {
	
   int  i, j, k, temp;
 
   for (k = size; k > 1; ) {
   	
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      
      for (i = k - 1; ++i < size; ) {
      	
        temp = p[i];
         
        for (j = i; p[j - k] > temp; ) {
         	
            p[j] = p[j - k];
            
            if ((j -= k) < k)
            
               break;
               
         }
         
        p[j] = temp;
        
      }
   }
}

void print_array(int *p, int size) {
	
   int i;

   for (i = 0; i < size; i++)
   
      printf("%d ", p[i]);
      
   putchar('\n');
   
}

int main(int argc, char *argv[]) {
	
	int boyut = 6000;
	
	int *dizi = (int *)malloc(sizeof(int) * boyut);
	
	FILE *dosya = fopen("tersten_sirali.txt", "r");
	
	int i = 0;
	
	while(!feof(dosya)) {
			
		fscanf(dosya, "%d", &dizi[i]);
	
		i++;
		
	}
	
	shell_sort(dizi, boyut);
	
	print_array(dizi, boyut);
	
	
	
	return 0;
}
