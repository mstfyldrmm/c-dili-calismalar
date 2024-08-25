#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fiziksel{
	
	char marka[20];
	
	char model[20];
	
	int uretim;
	
	int fiyat;

};

struct mekanik{
	
	float motor;
	
	int beygir;
	
	int km;
	
	struct	fiziksel one;
	
};


int main(int argc, char *argv[]) {
	
	struct mekanik arac;
	
	arac.beygir = 100;
	
	arac.km = 76897;
	
	arac.motor = 1.6;
	
	arac.one.fiyat = 230000;
	
	arac.one.uretim = 2012;
	
	strcpy(arac.one.marka,"Wolksvagen");
	
	strcpy(arac.one.model,"Golf Highline");
	
	printf("Arac : %s %s\n",arac.one.marka,arac.one.model);
	
	printf("%d model %d km\n",arac.one.uretim,arac.km);
	
	printf("Arac fiyati : %dTL",arac.one.fiyat);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
