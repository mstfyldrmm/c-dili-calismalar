#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	int *p = sayilar; // sayilar dizisinin ilk eleman�n�n adresini verir *p = sayilar[0] ayn�d�r 
	
	printf("*p = %u\n",p);
	
	printf("%u\n", p+1); // Her kutucuk aras� 4 byte oldugu i�in fark 4 t�r sebeb integer de�erler 4 byte yer kaplar
	
	printf("%u", p+4);
	
	printf("\n\n\n\n");
	
	printf("%d\n",*p); //asl�nda pointerlar bir dizidir ve *p yerine p[0] kullan�labilir
	
	printf("%d",*(p+1));
	
	printf("\n");
	
	printf("%d",*(p+2));
	
	printf("\n");

    printf("%d",*(p+3));
    
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
