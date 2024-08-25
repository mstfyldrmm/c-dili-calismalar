#include <stdio.h>
#include <stdlib.h>

/* dizi ve pointer ornegi */
//dizi ve pointer ayni seydir

void yazdir(int *, int);


int main(int argc, char *argv[]) {
	
	int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	yazdir(dizi, 10);
	
	
	return 0;
}

void yazdir(int *a, int boyut) {
	
	int i;
	
	for(i = 0; i < boyut; i++) {
		
		printf("a[%d] : %d\n", i, a[i]);
		
	}
	
	
	
}
