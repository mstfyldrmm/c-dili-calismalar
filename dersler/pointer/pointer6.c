#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	int *p = sayilar; // sayilar dizisinin ilk elemanýnýn adresini verir *p = sayilar[0] aynýdýr 
	
	printf("*p = %u\n",p);
	
	printf("%u\n", p+1); // Her kutucuk arasý 4 byte oldugu için fark 4 tür sebeb integer deðerler 4 byte yer kaplar
	
	printf("%u", p+4);
	
	printf("\n\n\n\n");
	
	printf("%d\n",*p); //aslýnda pointerlar bir dizidir ve *p yerine p[0] kullanýlabilir
	
	printf("%d",*(p+1));
	
	printf("\n");
	
	printf("%d",*(p+2));
	
	printf("\n");

    printf("%d",*(p+3));
    
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
