#include <stdio.h>
#include <stdlib.h>


int main() {
	//Giri� fonksiyonu SCANF  ( kullan�c�dan veri almak ) ��k�� fonksitonu ise PR�NTF
	
	// kullan�c�dan integer de�er almak i�in scanf("%d",&de�iken);
	int sayi ;
	printf("Integer deger :");
	scanf("%d",&sayi) ;
	printf("%d\n",sayi) ;
// c de sabit de�er tan�mlamak #define de�i�ken ad�(B�Y�K HARFLE) tan�mlan�r
#define PI 3.14 // pi de�i�keni art�k blok sat�rlar�nda sabittir
    int yaricap;
    float hacim;
    printf("Kurenin yaricapini giriniz:");
    scanf("%d",&yaricap);
    hacim =(4/3.0)*PI*(yaricap*yaricap*yaricap);
    printf("Kurenin hacmi: %f",hacim);
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
