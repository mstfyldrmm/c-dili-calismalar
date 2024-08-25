#include <stdio.h>

int main() {
	
	int x = 25;
	float y = 3.89;
	char z = 78; // z = 78 aslýnda ascýý tablosunda decimal 78 olan karakteri verir
	char t = 'M';
	double sayi = 357753234234;
	
	printf("%d %f %c %c %d %s",x,y,z,t,sayi,"C programlamaya merhaba!!!");
	
	/* float deðikeninde sayýnýn virgülden sonraki basamak adetini su sekilde ayarlarýz
	printf("%.1f",deðiþken); burda adetini 1 yaptýk 
	
	sayýyý yuvarlamak için ise printf("%.f",deðiþken); kullanýlýr
	printf("%.f",sayi);
	*/
	
	printf("\n %.1f",y); //adeti 1 ve sayýyý ona göre  yuvarlar
	printf("\n %.2f",y); //adeti 2
	printf("\n %.f",y); // sayiyi yuvarladi
	// %10d ise sayýyý yazmadan önce 10 tane boþluk býrakýr
	printf("%25d",x);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
  }

