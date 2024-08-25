#include <stdio.h>
#include <stdlib.h>

struct telefon{
	
	char marka[20];
	
	char model[20];
	
	int fiyat;

};


int main() {
	
	struct telefon android = {"Samsung","A50",2899};
	
	printf("Telefon markasi : %s\n",android.marka);
	
	printf("Telefon modeli : %s\n",android.model);
	
	printf("Fiyat : %dTL",android.fiyat);
	
	
	
	
	
	return 0;
}
