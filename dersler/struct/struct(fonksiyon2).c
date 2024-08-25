#include <stdio.h>
#include <stdlib.h>

/* struct tipinde fonksiyon tanımlamak 
struct yapi adi(fonk tipi yazılır) fonk adi(parametre){
..........................................
return nesne;
}
 */

struct bilgiler{
	
	char adi[20];
	
	char soyadi[20];
	
	char takim[20];
	
	int gol,asist;
	
};

struct bilgiler degerAl() {
	
	struct bilgiler ftb;
	
	printf("Bilgileri giriniz(ad soyad takim gol asist)");
	
	scanf("%s %s %s %d %d", ftb.adi, ftb.soyadi, ftb.takim, &ftb.gol, &ftb.asist);
	
	return ftb;

}

void bastir(struct bilgiler nesne) {
	
	printf("Adi : %s Soyadi : %s Takim : %s Gol : %d Asist : %d",nesne.adi,nesne.soyadi,nesne.takim,nesne.gol,nesne.asist);
	
}




int main(int argc, char *argv[]) {
	
	struct bilgiler futbolcu;
	
	futbolcu = degerAl();
	
	bastir(futbolcu);






	return 0;
}
