#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	FILE *fp;
	
	fp = fopen("metin.txt", "r");
	
	char a;
	
	char sonraki;
	
	int sayi = 0;
	
	while(!feof(fp)) { 
		
		a = fgetc(fp);
		
		printf("%c",a);
		
		sayi++;
		
		if(a == '\n') {
			
			sayi--;
			
			printf("Karakter sayisi : %d\n", sayi);
			
			sayi = 0;
			
			sonraki = fgetc(fp); //Kullanma sebebimiz alt sat�ra ge�ilmi� ancak herhangi bir karakter girilmemi�se ya da sat�r sonunda alt sat�ra ge�ilmeden bitirilmi�se
			
			printf("%c", sonraki);
			
		}
		
		
	}
	
	if(sonraki != EOF) {
		
		printf("\nKarakter sayisi : %d", sayi);
		
	}
	
	
	
	fclose(fp);
	


	
	
	return 0;
}

//fputc dosyaya karakter yazmaya yarar tan�m : fputc(metin, filepointer);

//getc(pointer) 

//fputs dosyaya metin yazmaya yarar--- tan�m : fputs(metinsel icerik, filepointer);

//fgets dosyadan okuma yapar tan�m : ---- > fgets(okunan veriyi yazdirabilecek dizi, okunacak max boyut, filepointer);

//fprintf(filepointer,"%d %s", degiskenler);





