#include <stdio.h>
#include <stdlib.h>

/* fgets ile dosyadan veri okumak*/

int main(int argc, char *argv[]) {
	
	char soz[100];
	
	FILE *dosya = fopen("metin.txt", "r");
	
    fgets(soz, 100, dosya);
	
	printf("Metin icerigi : %s", soz);
	
	
	
	
	
	return 0;
}
