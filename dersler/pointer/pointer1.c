#include <stdio.h>
#include <stdlib.h>

/* pointer * ile tanýmlanýr 
&deðiþken demek deðiþkenin adresini verir örneðin scanf("%d",&isim); demekisim deðiþeninin adresini bul ve oraya tanýmla demektir*/

int main() {
	
	int *q ;
	
	int a = 10 ;
	
	q = &a ;
	
	printf("%p\n",q); // q nun deðerini basar yani a nýn  adresini
	
	printf("%p\n",&q); //q nun adresini basar
	
	printf("%d",*q); // q nun gsterdigi adresteki degeri verir
	
	// & adres bilgisini verir 
	
	// '*' ise pointerlarýn tuttuðu adresteki deðeri verir
	
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
	
	
	
	
	//Her dizi bir pointer her pointerda doðal bir dizidir
	
	/* Dizilerde olmayýp ama pointerlar ile yapabildiðimiz bir özellik dinamik hafýza ayrýmýdýr
	
	Buda dizilerde kaç eleman gerekli ise onu belirtmemiz gerekirdi ama pointerý tanýmladýktan sonra eleman adetini
	
	belirtme imkaný sunar. Hatta örneðin  10 eleman dedikten sonra farklý yerde eleman sayisini arttýrýp azaltmaya imkan sunar
	
	iþte buna dinamik hafýza denir
	
	Dizinin eleman sayýsýný dinamik olarak belirleme imaknýný pointerlar sunar
	
	Buda þu fonksiyon sayesindedir  malloc
	
	örn: int *q = (int *)malloc(sizeof(int)*a); a nýn deðeri kadar eleman tutar */
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
