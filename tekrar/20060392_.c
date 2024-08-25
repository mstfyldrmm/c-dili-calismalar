#include <stdio.h>
#include <stdlib.h>
#include <string.h>
     
     //fputc dosyaya karakter yazmamizi saglar fputc(karakter, filep);
     
     // fgets ile dosyadan veri okunur.   fgets(okunan seyi yazdirilacak yer, max boyut, filep);
     
     //fputs string ifadeyi dosyaya yazar --- fputs(yazdirilacak dizi, filep);
     
     //fscanf(filep, "%s %s...", degiskenler)
     
     
     
     
int main() {
	
	FILE *dosya = fopen("metin.txt", "r");  //Fonksiyon calismaz ise NULL degeri doner
	
	char ad[20];
	
	fscanf(dosya, "%s",  ad);
	
	printf("%s",ad);
	
	
	
	fclose(dosya);
	
	
	
	
	
	
  
  
  
  return 0;
}
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	







