#include <stdio.h>
#include <stdlib.h>

/* 3x4 bir matrisi ekrana tablo halinde yazdiran program */

#define N 3

#define M 4


void matris_yaz(int [][M]);


int main() {
	
	int matris[N][M];
	
	int i,j;
	
	
	printf("Matris degerlerini giriniz:");
	
	for(i = 0; i < N;i++) {
		
		for(j = 0; j < M; j++) {
			
			scanf("%d", &matris[i][j]);
			
		}
		
	}
	
	matris_yaz(matris);
	
	
	
	
	return 0;
}

void matris_yaz(int matriss[][M]) {
	
	int i,j;
	
	for(i = 0; i <N; i++) {
		
		for(j = 0; j < M; j++) {
			
			printf(" %d ", matriss[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	
}




