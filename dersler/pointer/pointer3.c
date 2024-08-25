#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, j = 1;
	
	int *jp1, *jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp1 + i;
	
	printf("i = %d, *jp1 = %d, *jp2 = %d", i, *jp1, *jp2);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
