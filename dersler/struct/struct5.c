#include <stdio.h>
#include <stdlib.h>
//Struct dizileri farklý yol ile kullanmak

struct bilgiler{
	
	char adi[20];
	
	char soyadi[20];
	
	int numara;
	
}ogrenciler[3];


int main(void) {
	
	struct bilgiler ogrenciler[3] = {
		{"mustafa","yildirim",20060392},
		{"ahmet","yilmaz",2345456},
		{"osman","yildiz",15234}
};
	int i;
	
	for(i = 0; i < 3; i++) {
		
		printf("Adi : %s\n",ogrenciler[i].adi);
		
		printf("Soyadi : %s\n",ogrenciler[i].soyadi);
		
		printf("Numarasi %d\n",ogrenciler[i].numara);
		
		printf("***********************************\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
