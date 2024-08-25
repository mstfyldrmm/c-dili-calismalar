#include <stdio.h>
#include <stdlib.h>


int main() {
	//Giriþ fonksiyonu SCANF  ( kullanýcýdan veri almak ) çýkýþ fonksitonu ise PRÝNTF
	
	// kullanýcýdan integer deðer almak için scanf("%d",&deðiken);
	int sayi ;
	printf("Integer deger :");
	scanf("%d",&sayi) ;
	printf("%d\n",sayi) ;
// c de sabit deðer tanýmlamak #define deðiþken adý(BÜYÜK HARFLE) tanýmlanýr
#define PI 3.14 // pi deðiþkeni artýk blok satýrlarýnda sabittir
    int yaricap;
    float hacim;
    printf("Kurenin yaricapini giriniz:");
    scanf("%d",&yaricap);
    hacim =(4/3.0)*PI*(yaricap*yaricap*yaricap);
    printf("Kurenin hacmi: %f",hacim);
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
