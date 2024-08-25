#include <stdio.h>
#include <stdlib.h>


void selection_sort(int *p, int size)
{
   int   i, j, temp, min;
 
   for (i = 0; i < size - 1; i++) {
   	
      min = i;
      
      for (j = i + 1; j < size; j++)
      
         if (p[min] > p[j])
         
            min = j;
            
      temp = p[min];
      
      p[min] = p[i];
      
      p[i] = temp;
      
   }
}

void print_array(int *p, int size)
{
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
	
	
	selection_sort(dizi, boyut);
	
	print_array(dizi, boyut);
	
	
	return 0;
}
