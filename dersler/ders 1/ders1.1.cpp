#include <stdio.h>

int main() {
	
	int x = 25;
	float y = 3.89;
	char z = 78; // z = 78 asl�nda asc�� tablosunda decimal 78 olan karakteri verir
	char t = 'M';
	double sayi = 357753234234;
	
	printf("%d %f %c %c %d %s",x,y,z,t,sayi,"C programlamaya merhaba!!!");
	
	/* float de�ikeninde say�n�n virg�lden sonraki basamak adetini su sekilde ayarlar�z
	printf("%.1f",de�i�ken); burda adetini 1 yapt�k 
	
	say�y� yuvarlamak i�in ise printf("%.f",de�i�ken); kullan�l�r
	printf("%.f",sayi);
	*/
	
	printf("\n %.1f",y); //adeti 1 ve say�y� ona g�re  yuvarlar
	printf("\n %.2f",y); //adeti 2
	printf("\n %.f",y); // sayiyi yuvarladi
	// %10d ise say�y� yazmadan �nce 10 tane bo�luk b�rak�r
	printf("%25d",x);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
  }

