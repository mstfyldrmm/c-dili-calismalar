#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct 2.y�ntem ile tan�mlamak

struct kimlik{
	
	char adi[20];
	
	char soyadi[20];
	
	int yas;
	
	double tc;
	
	char memleket[30];
	
	char kan[5];
	
};


int main() {
	
	struct kimlik insan; //kimlik yap�s�ndan insan nesnesini olu�turduk..
	
	strcpy(insan.adi,"Mustafa");
	
	strcpy(insan.soyadi,"Yildirim");
	
	strcpy(insan.memleket,"Erzurum");
	
	strcpy(insan.kan,"ARh+");
	
	insan.yas = 20;
	
	insan.tc = 10034238584;
	
	printf("%s\n",insan.adi);
	
	printf("%s\n",insan.soyadi);
		
	printf("%s\n",insan.memleket);
	
	printf("%s\n",insan.kan);
	
	printf("%d\n",insan.yas);
	
	
	
	
	
	return 0;
}
