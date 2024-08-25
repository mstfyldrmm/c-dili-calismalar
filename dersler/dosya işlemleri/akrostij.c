#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	FILE *fp;
	
	fp = fopen("metin.txt", "r");
	
	char isim[5];
	
	int i = 0;
	
	char a = '*';
	
	isim[i] = fgetc(fp);
	
	
	while(a != EOF) {
		
		a = fgetc(fp);
		
		
		if(a == '\n') {
			
			isim[i+1] = fgetc(fp);
			
			i++;
		}
		
	}
	
	for(i = 0; i < 5; i++) {
		
		printf("%c\n", isim[i]);
		
	}
	
	fclose(fp);
	


	
	
	return 0;
}

//fputc dosyaya karakter yazmaya yarar taným : fputc(metin, filepointer);

//getc(pointer) 

//fputs dosyaya metin yazmaya yarar--- taným : fputs(metinsel icerik, filepointer);

//fgets dosyadan okuma yapar taným : ---- > fgets(okunan veriyi yazdirabilecek dizi, okunacak max boyut, filepointer);

//fprintf(filepointer,"%d %s", degiskenler);


