#include <stdio.h>
#include <stdlib.h>

/* pointer * ile tan�mlan�r 
&de�i�ken demek de�i�kenin adresini verir �rne�in scanf("%d",&isim); demekisim de�i�eninin adresini bul ve oraya tan�mla demektir*/

int main() {
	
	int *q ;
	
	int a = 10 ;
	
	q = &a ;
	
	printf("%p\n",q); // q nun de�erini basar yani a n�n  adresini
	
	printf("%p\n",&q); //q nun adresini basar
	
	printf("%d",*q); // q nun gsterdigi adresteki degeri verir
	
	// & adres bilgisini verir 
	
	// '*' ise pointerlar�n tuttu�u adresteki de�eri verir
	
	printf("\n\n\n");
	
	
	int  x = 25, *xp;
	
	float b = 4.1, *bp;
	
	double c = 3.453453 ,  *cp;
	
	char d = 'm', *dp;
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	int *arraylar;
	
	xp = &x;
	
	bp = &b;
	
	cp = &c;
	
	dp = &d; 
	
	arraylar = &sayilar[1];
	
	printf("%p adresindeki deger : %d  \n", xp, *xp);
	
	printf("%p adresindeki deger : %f  \n", bp, *bp);
	
	printf("%p adresindeki deger : %lf  \n", cp, *cp);
	
	printf("%p adresindeki deger : %c  \n", dp, *dp);
	
	printf("%p adresindeki deger : %d", arraylar, *arraylar);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
	
	
	
	
	//Her dizi bir pointer her pointerda do�al bir dizidir
	
	/* Dizilerde olmay�p ama pointerlar ile yapabildi�imiz bir �zellik dinamik haf�za ayr�m�d�r
	
	Buda dizilerde ka� eleman gerekli ise onu belirtmemiz gerekirdi ama pointer� tan�mlad�ktan sonra eleman adetini
	
	belirtme imkan� sunar. Hatta �rne�in  10 eleman dedikten sonra farkl� yerde eleman sayisini artt�r�p azaltmaya imkan sunar
	
	i�te buna dinamik haf�za denir
	
	Dizinin eleman say�s�n� dinamik olarak belirleme imakn�n� pointerlar sunar
	
	Buda �u fonksiyon sayesindedir  malloc
	
	�rn: int *q = (int *)malloc(sizeof(int)*a); a n�n de�eri kadar eleman tutar */
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
