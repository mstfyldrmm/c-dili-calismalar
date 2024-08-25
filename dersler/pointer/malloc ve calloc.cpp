#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//malloc fonksiyonu dizinin eleman sayýsýný dinamik olarak belirlememizi saðlar
	//örn int dizi[5] tanýmladýk.Malloc bize dizinin eleman sayýsýný deðiþtirme imkaný tanur
	//malloc fonksiyonu deger olarak adres verir bu yuzden pointer kullanýrýz
	//free fonksiyonu ile RAM yazýlý yeri boþaltýrýz
	
	//int *p = (int *)malloc(sizeof(int)*a); a nýn deðeri kadar eleman sayýsý olur
	
	//burda int * dememizin sebebi malloc bize void * döndürür biz bunu int * cevirdik
	
	int *p = (int *)malloc(sizeof(int)*40);
	
	char *c = (char *)malloc(sizeof(char)*30);
	
	c[0] = "a";
	
	c[1] = "b";
	
	printf("c[0]  = %s c[1] = %s", c[0], c[1]);
	
	p[0] = 25;
	
	p[1] = 41; //atama imkaný tanýr aslnýda her pointer doðal bir dizidir
	
	p[2] = 'x';
	
	printf("Dizinin 1.elemani %d\n",p[0]);
	
	printf("Dizinin 2.elemani %c",p[2]);
	
	free(p); //RAM deki pointerýn ayýrdýðý yeri bosaltirim
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
