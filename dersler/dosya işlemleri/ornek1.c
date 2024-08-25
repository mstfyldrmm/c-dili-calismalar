#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = fopen("deneme.txt", "w");
	
	int i = 0;
	
	while(i <= 100) {
		
		fprintf(fp, "%d\n", i);
		
		i++;
	
	}
	
	fclose(fp);
	
	
	
	
	
	
	
	return 0;
}
