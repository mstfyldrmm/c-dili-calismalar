#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *p, int size){
	
   int  i, j, t;
 
   for (i = 0; ++i < size; ) {
   	
      t = p[i];
      
      for (j = i; p[j - 1] > t; ) {
      	
         p[j] = p[j - 1];
         
            if (--j <= 0)
			
			break;
            
      	}
      	
      	p[j] = t;
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
	
	int dizi[boyut];
	
	FILE *dosya = fopen("tersten_sirali.txt", "r");
	
	int i = 0;
	
	while(!feof(dosya)) {
			
		fscanf(dosya, "%d", &dizi[i]);
	
		i++;
		
	}
	
	insertion_sort(dizi, boyut);
	
	print_array(dizi, boyut);
	
	
	
	
	
	return 0;
}
