#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct film{
	
	char ad[40];
	
	int yil;
	
	int uzunluk;
	
};





int main() {
	
	struct film lm;
	
	strcpy(lm.ad,"Leyla ile Mecnun");
	
	lm.uzunluk = 103;
	
	lm.yil = 2011;
	
	struct film *p = &lm;
	
	//Klasik yontemden farkli bir yol daha var
	
	printf("Dizinin adi : %s\n",p->ad);
	
	printf("Dizinin cikis yili %d\n",p->yil);
	
	printf("Dizinin toplam bolum sayisi : %d",p->uzunluk);
	
	
	
	
	return 0;
}
