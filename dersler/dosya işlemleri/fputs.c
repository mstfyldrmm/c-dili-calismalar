#include <stdio.h>
#include <stdlib.h>

/* FPUTS FONKSÝYONU VE FGETS FONKSÝYONU */

/*string bir ifadeyi dosyaya yazdirmayi saglar fputs(yazdirilacak metin, filepointer); */

int main() {
	
	char metin[50];
	
	char soz[] = "\tHayatin boyunca kosarsin yetistigin sadece nasibindir";
	
	FILE *fp = fopen("metin.txt", "w");
	
	fputs(soz, fp);
	
	fgets(metin, 50, fp);
	
	fputs(metin, fp);
	
	fclose(fp);
	
	
	//fgets fonksiyonu dosyadan veri okumamizi saglar 3 parametre alir fgets(yazdirilacak dizi adi, max boyut, filep);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
