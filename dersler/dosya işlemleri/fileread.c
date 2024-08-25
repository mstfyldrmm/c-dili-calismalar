#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char karakter;
	
	int i, uzunluk;
	
	FILE *belge;
	
	belge = fopen("C:\\Users\\Mstfy\\OneDrive\\Masaüstü", "r");
	
	karakter = fgetc(belge);
	
	uzunluk = strlen(karakter);
	
	printf("%d",uzunluk)
	
	
	
	return 0;
}
