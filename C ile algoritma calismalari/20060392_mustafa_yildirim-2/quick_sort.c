#include<stdio.h>
#include <time.h>

void quicksort(int number[], int first, int last){

	int i, j, pivot, temp;

	if(first<last){

		pivot=first;

		i=first;

		j=last;

	while(i<j){

		while(number[i]<=number[pivot]&&i<last)

			i++;

	while(number[j]>number[pivot])

			j--;
				
		if(i<j){

			temp=number[i];

			number[i]=number[j];

			number[j]=temp;

		}	

}

	temp=number[pivot];

	number[pivot]=number[j];

	number[j]=temp;

	quicksort(number,first,j-1);

	quicksort(number,j+1,last);

}

}

int main(){

	int i, count = 6000;
	
	int dizi[count];
	
	clock_t start_t, end_t;
	
	FILE *dosya = fopen("tersten_sirali.txt", "r");

	while(!feof(dosya)) {
			
		fscanf(dosya, "%d", &dizi[i]);
	
		i++;
		
	}

	clock_t baslama = clock();

	quicksort(dizi, 0, count);
	
	clock_t bitis = clock();
	
	printf("\nstart_t degeri: %ld\n", baslama);
    
    printf("end_t degeri: %ld\n", bitis);
    
	printf("\nCalisma zamani : %lf", (double)(bitis - baslama) / CLOCKS_PER_SEC);
	
	
	

	
	
	

return 0;
}
