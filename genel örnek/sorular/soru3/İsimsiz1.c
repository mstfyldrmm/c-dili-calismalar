#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("color 5");
	
	int sayi, i, kuvvet = 0;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d", &sayi);
		
	for(i = 1; i < sayi; i = i * 2){
		
		printf("%d\n",i);
		
		kuvvet ++;
	
	}
	
	printf("Sayinin 2 tabanina gore logaritmasinin tam kismi: %d", kuvvet);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
