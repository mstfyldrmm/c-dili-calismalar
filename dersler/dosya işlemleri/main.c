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
     while(a!=EOF) {//dosyan�n sonuna kadar

     a = fgetc(f); //karakter oku
     
     if(a == '\n') //alt sat�ra ge�me, sat�r sonu karakteri mi?
     
  {
    satir++;
    
    sonraki=fgetc(f);
  }
  
}
// alt sat�ra ge�ilmi� ancak herhangi bir karakter girilmemi�se
// ya da sat�r sonunda alt sat�ra ge�ilmeden bitirilmi�se
    if(sonraki!=EOF)
    
    satir++;
    
    printf("%d satir var",satir);
    
    getch();
	
	
	
	
	
	


	
	
	return 0;
}

//fputc dosyaya karakter yazmaya yarar tan�m : fputc(metin, filepointer);

//getc(pointer) 

//fputs dosyaya metin yazmaya yarar--- tan�m : fputs(metinsel icerik, filepointer);

//fgets dosyadan okuma yapar tan�m : ---- > fgets(okunan veriyi yazdirabilecek dizi, okunacak max boyut, filepointer);

//fprintf(filepointer,"%d %s", degiskenler);





