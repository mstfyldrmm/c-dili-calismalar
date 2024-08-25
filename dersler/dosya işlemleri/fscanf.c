#include <stdio.h>
#include <stdlib.h>

/* end of file favrami 

 EOF dosyanin sonuna geldigini belirtir
 
 iste c de eof alan bir fonksiyon var feof(dosya pointeri) fonksiyonu

 */
 
 /* fscanf dosyadan veri almamizi saglar--->fscanf(filepointer, "%f %d...", &degiþkenler...); */
 
 
 

int main() {
	
	char ad[7];
	
	char soyad[20];
	
	int no = 25;
	
	FILE *fp = fopen("metin.txt", "w");
	
	fprintf(fp, "%s\n %s\n %d", ad, soyad, no);
	
	fscanf(fp, "%s %s", ad, soyad);
	
	fclose(fp);
	
	printf("Ad : %s Soyad : %s No : %d", ad, soyad, no);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
