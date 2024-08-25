#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define mSize 100
//A[mxn] B[nxp]

int  m1[mSize][mSize], m2[mSize][mSize], m3[mSize][mSize];
int satir, sutun1, sutun2;

void *threadMatrisCarpim(void *sonuc) {
	int i, j, k;
	
	for(i = 0; i < satir; i++) {
		for(j = 0; j < sutun2; j++) {
			m3[i][j] = 0;
			for(k = 0; k < sutun1; k++) {
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
	int i, j, k, t;
	pthread_t  threadID;
    printf("1. matris satir sayisini giriniz: ");
    scanf("%d", &satir);
    printf("1. matris sutun sayisini giriniz: ");
    scanf("%d", &sutun1);
    printf("2. matris sutun sayisini giriniz: ");
    scanf("%d", &sutun2);
	
	//1.matrisi olusturma
	for(i = 0; i < satir; i++){
        for(j = 0; j < sutun1; j++) {
        	m1[i][j] = rand() % 10 + 1;
		}
    }
    
    //2.matrisi olusturma
    for(i = 0; i < sutun1; i++){
        for(j = 0; j < sutun2; j++) {
        	m2[i][j] = rand() % 20 + 1;
		}
    }
    
    //threadleri olusturma ve calistirma
    for(t = 0; t < sutun1; t++) {
    	pthread_create(&threadID, NULL, threadMatrisCarpim, NULL);
    	pthread_join(threadID, NULL);
	}
	
	printf("1.Matris : \n");
	
    for(i = 0; i < satir; i++){
        for(j = 0; j < sutun1; j++) {
        	printf(" %d ", m1[i][j]);
		}
		printf("\n");
    }
    
    printf("2.Matris : \n");
    
    for(i = 0; i < sutun1; i++){
        for(j = 0; j < sutun2; j++) {
        	printf(" %d ", m2[i][j]);
		}
		printf("\n");
    }
	
	printf("\nMatris carpimi : \n");
	
	for(i = 0; i < satir; i++){
        for(j = 0; j < sutun2; j++) {
        	printf(" %d ", m3[i][j]);
		}
		printf("\n");
    }
	
	return 0;
}
