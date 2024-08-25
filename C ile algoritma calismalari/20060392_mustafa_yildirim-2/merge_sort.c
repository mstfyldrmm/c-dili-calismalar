#include <stdio.h>
#include <time.h>


void merge(int arr[], int l, int m, int r){
	
    int i, j, k;
    
    int n1 = m - l + 1;
    
    int n2 =  r - m;
    
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
    
        L[i] = arr[l + i];
        
    for (j = 0; j < n2; j++)
    
        R[j] = arr[m + 1+ j];
        
    i = 0;
    
    j = 0;
    
    k = l;
    while(i < n1 && j < n2){
    	
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            
            i++;
        }
        
        else
        {
            arr[k] = R[j];
            
            j++;
        }
        
        k++;
    }
    
    while (i < n1){
    	
        arr[k] = L[i];
        
        i++;
        
        k++;
    }
    while (j < n2){
    	
        arr[k] = R[j];
        
        j++;
        
        k++;
    }
}
 
 
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        
        merge_sort(arr, l, m);
        
        merge_sort(arr, m+1, r);
        
        merge(arr, l, m, r);
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
	
	clock_t start_t = clock();
	
   	merge_sort(dizi, 0, boyut);

 	clock_t end_t = clock();
 	 
	
	printf("\nstart_t degeri: %ld\n", start_t);
    
    printf("end_t degeri: %ld\n", end_t);
    
    printf("CPU sureci (saniye): %lf\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	
	return 0;
}

