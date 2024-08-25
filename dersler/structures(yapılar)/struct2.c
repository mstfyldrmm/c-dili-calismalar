#include <stdio.h>
#include <stdlib.h>

//                                  Struct farklý ve daha pratik bir yolla tanýmlamak  
 
typedef struct{
	
	char marka[30];
	
	int model;
	
	float motor[2];
	
	char durum[20];
	
	int fiyat;
	
	int km;
	
}araba1, araba2; //Daha sonraki satýrlar için oluþturabilecek nesneleri belirtir
 
 
 

int main(int argc, char *argv[]) {
	
	araba1 yaris; //Burda araba1 den nesne urettik artik elimizde yaris adinda nesne mevcut
	
	char (yaris.marka) =  "Fiat Fiorino Safeline";

	yaris.model = 2015;
	
	yaris.motor = 1.3;
	
	yaris.durum = "Arac degisensiz Boyasiz tramer kaydi yok full orijinal dosta gider bir aractir";
	
	yaris.km = 59897;
	
	yaris.fiyat = 115000;
	
	printf("Arac : %s Model : %d Motor : %d Km : %d Fiyat : %d Aciklama : %s", yaris.marka, yaris.model, yaris.fiyat, yaris.motor, yaris.durum);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	return 0;
}
