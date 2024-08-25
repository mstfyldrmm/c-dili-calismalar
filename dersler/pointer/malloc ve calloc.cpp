#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//malloc fonksiyonu dizinin eleman say�s�n� dinamik olarak belirlememizi sa�lar
	//�rn int dizi[5] tan�mlad�k.Malloc bize dizinin eleman say�s�n� de�i�tirme imkan� tanur
	//malloc fonksiyonu deger olarak adres verir bu yuzden pointer kullan�r�z
	//free fonksiyonu ile RAM yaz�l� yeri bo�alt�r�z
	
	//int *p = (int *)malloc(sizeof(int)*a); a n�n de�eri kadar eleman say�s� olur
	
	//burda int * dememizin sebebi malloc bize void * d�nd�r�r biz bunu int * cevirdik
	
	int *p = (int *)malloc(sizeof(int)*40);
	
	char *c = (char *)malloc(sizeof(char)*30);
	
	c[0] = "a";
	
	c[1] = "b";
	
	printf("c[0]  = %s c[1] = %s", c[0], c[1]);
	
	p[0] = 25;
	
	p[1] = 41; //atama imkan� tan�r asln�da her pointer do�al bir dizidir
	
	p[2] = 'x';
	
	printf("Dizinin 1.elemani %d\n",p[0]);
	
	printf("Dizinin 2.elemani %c",p[2]);
	
	free(p); //RAM deki pointer�n ay�rd��� yeri bosaltirim
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
