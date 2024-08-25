#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	char a='*', sonraki, dosya_adi[20];
	
     int satir = 0;
     
     puts("Dosya adi giriniz:");
     
     scanf("%s",dosya_adi);
     
     FILE *f;
     
     f = fopen(dosya_adi,"r");
     
     if(f == NULL) {
	          
     puts("dosya acilamadi");
     
     getch();
     
     exit(1);
    }
     while(a!=EOF) {//dosyanýn sonuna kadar

     a = fgetc(f); //karakter oku
     
     if(a == '\n') //alt satýra geçme, satýr sonu karakteri mi?
     
  {
    satir++;
    
    sonraki=fgetc(f);
  }
  
}
// alt satýra geçilmiþ ancak herhangi bir karakter girilmemiþse
// ya da satýr sonunda alt satýra geçilmeden bitirilmiþse
    if(sonraki!=EOF)
    
    satir++;
    
    printf("%d satir var",satir);
    
    getch();
	
	
	
	
	
	


	
	
	return 0;
}

//fputc dosyaya karakter yazmaya yarar taným : fputc(metin, filepointer);

//getc(pointer) 

//fputs dosyaya metin yazmaya yarar--- taným : fputs(metinsel icerik, filepointer);

//fgets dosyadan okuma yapar taným : ---- > fgets(okunan veriyi yazdirabilecek dizi, okunacak max boyut, filepointer);

//fprintf(filepointer,"%d %s", degiskenler);





