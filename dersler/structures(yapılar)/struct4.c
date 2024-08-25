#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct mekanik {
	
	float km;
	
	char boyali[40];
	
	char degisen[40];
	
};



struct fiziksel {
	
	char marka[20];
	
	char model[40];
	
	int yil;
	
	struct mekanik bilgi;
	
};


int main(int argc, char *argv[]) {
	
	struct fiziksel fiat;
	
	fiat.yil = 2015;
	
	strcpy(fiat.marka, "FIAT");
	
	strcpy(fiat.model, "Fiorino 1.3 Multijet Safeline");
	
	strcpy(fiat.bilgi.boyali, "Boyali herhangi bir parcasi bulunmamaktadir");
	
	strcpy(fiat.bilgi.degisen, "Arac full orijinaldir");
	
	fiat.bilgi.km = 55465;
	
	printf("Arac Marka : %s Arac Model : %s %d Km : %5.f Boya durumu : %s Degisen durumu : %s", fiat.marka, fiat.model, fiat.yil, fiat.bilgi.km,fiat.bilgi.boyali, fiat.bilgi.degisen);
	
	
	
	
	
	
	return 0;
}
