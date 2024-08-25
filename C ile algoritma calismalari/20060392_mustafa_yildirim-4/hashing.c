#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N  10

typedef struct agac{
	struct agac *sol;
	struct agac *sag;
	int veri;
}ikili_agac;

ikili_agac *dizi[N];
ikili_agac *root = NULL;

ikili_agac *kok_dugum_olustur(int veri) {
	ikili_agac *root = (ikili_agac *)malloc(sizeof(ikili_agac));
	root->sol = NULL;
	root->sag = NULL;
	root->veri = veri;
	return root;
}

ikili_agac *eleman_ekle(ikili_agac *root, int veri) {	
	if(root == NULL) {
		root = kok_dugum_olustur(veri);	
	}
	
	else {
		ikili_agac *temp = root;
		
		if(veri < root->veri) {	
			root->sol = eleman_ekle(root->sol, veri);	
		}
		
		else {	
			root->sag = eleman_ekle(root->sag, veri);	
		}
	}
	return root;
}

int h(int x) {
	return x % N;
}

void put(int value) {	
	if(dizi[h(value)] == NULL) {
		dizi[h(value)] = kok_dugum_olustur(value);
	}
		
	else {
		eleman_ekle(dizi[h(value)], value);
	}	
}

ikili_agac *eleman_ara(ikili_agac *root, int aranan) {	
	if(root != NULL) {	
		if(aranan == root->veri) {	
			printf("\nAranan deger bulundu : %d\n", root->veri);	
		}
		
		else if(aranan < root->veri) {	
			return eleman_ara(root->sol, aranan);	
		}
		
		else if(aranan > root->veri) {	
			return eleman_ara(root->sag, aranan);	
		}
	}
}

void inorder(ikili_agac *baslangic) {
	if(baslangic != NULL) {
		inorder(baslangic->sol);
		printf(" %d ", baslangic->veri);
		inorder(baslangic->sag);
	}
}

int main(int argc, char *argv[]) {
	int i = 0, secim;
	int aranan, eklenecek;
	
	time_t epoch = time(NULL);
    srand(epoch);
	
	for(i = 0; i < 25; i++) {
		int sayi = (rand() % (500 - 100 + 1)) + 100;
		put(sayi);
	}
	
	do {
		printf("1-Diziyi yazdirma\n\n2-Eleman arama\n\n3-Eleman ekleme\n\n4-Cikis\n\n\nLutfen tuslayiniz :");
		scanf("%d", &secim);
		
		switch(secim) {
		case 1:
			for(i = 0; i < 10; i++) {
				printf("Dizinin %d.inci slotu : ", i);
				inorder(dizi[i]);
				printf("\n");
			}
			sleep(5);
			system("cls");
			break;
			
		case 2:
			printf("Aranacak eleman : ");
			scanf("%d", &aranan);
			
			for(i = 0; i < 10; i++)
				eleman_ara(dizi[i], aranan);
			
			sleep(2);
			system("cls");
			break;
			
		case 3:
			printf("Eklenecek eleman : ");
			scanf("%d", &eklenecek);
			put(eklenecek);
			
			sleep(2);
			system("cls");
			break;
		}
	}while(secim != 4);

	return 0;
}
