#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n;
	
	printf("Dizinin eleman sayisi:");
	
	scanf("%d",&n);
	
	int dizi[n], yeni[n], i;
	
	for (i = 0; i < n; i++)
	{
		printf("Dizinin %d indexli elemanini giriniz :",i);
		scanf("%d",&dizi[i]);
	}
	
    for (i = n-1; i >= 0; i--)
    {
    	yeni[n-i] = dizi[i];
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d ",yeni[i]);
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
