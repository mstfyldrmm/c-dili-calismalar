#include <stdio.h>
#include <stdlib.h>

/*                                  structure dizileri                                    */

struct ogrenci {
	
	char adi[20];
	
	char soyadi[20];
	
	char bolum[40];
	
	int numara;
	
};


int main() {	
	
	struct ogrenci ogreciler[3]; // 3 adet ogrenciler nesnesi olusturduk
	
	int i;
	
	for(i = 0; i < 3; i++) {
		
		printf("Lutfen ogrencinin gerekli bilgilerini tuslayiniz :");
		
		scanf("%s %s %s %d", &ogreciler[i].adi, &ogreciler[i].soyadi, &ogreciler[i].bolum, &ogreciler[i].numara);
	
}
	for(i = 0; i < 3; i++) {
		
		printf("%s %s %s %d\n", ogreciler[i].adi, ogreciler[i].soyadi, ogreciler[i].bolum, ogreciler[i].numara);
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
