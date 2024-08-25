#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void en_yakin(int dizi[], int n) {
	int adet = (n * (n-1)) / 2;
	int i = 0, k = 0, j = 0;
	int toplam[adet];
	
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			toplam[k] = fabs(dizi[i] + dizi[j]);
			k++;
		}	
	}
	
	int en_kucuk = toplam[0];
	
	for(i = 0; i < adet; i++) {
		if(toplam[i] <= en_kucuk)
			en_kucuk = toplam[i];
	}
	
	printf("\nToplamin en kucugu %d\n", en_kucuk);
	
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(fabs(dizi[i] + dizi[j]) == en_kucuk)
				printf("\n%d %d toplaminin sifira uzakligi : %d kadar\n", dizi[i], dizi[j], en_kucuk);
		}	
	}
	
}

int main(int argc, char *argv[]) {
	int n = 0;
	
	printf("Dizini eleman adeti :");
	scanf("%d", &n);
	
	int dizi[n], i = 0, j = 0, k = 0, adet = 0;
	
	adet = (n * (n-1)) / 2;	
	int toplam[adet];
	
	time_t epoch = time(NULL);
    srand(epoch);
	
	for(i = 0; i < n; i++)
		dizi[i] = (rand() % (100 - -50 + 1)) + -50;
		
	for(i = 0; i < n; i++)
		printf("%d ", dizi[i]);
		
	en_yakin(dizi, n);
	
	
	
	return 0;
}
