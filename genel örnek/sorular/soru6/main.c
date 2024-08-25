#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi, a, b, c, d, e;
	
	printf("Bes basamakli bir sayi giriniz:");
	
    scanf("%d",&sayi);
    
    a = sayi / 10000 ;
    
    b = (sayi / 1000) % 10 ;        
     
    c = (sayi / 100) % 10 ;
    
    d = (sayi / 10) % 10 ;
    
    e = sayi % 10 ;
    
    printf("Sayinin basamaklari  %d %d %d %d %d",a ,b ,c ,d, e);
    
    
    //palindrom sayi 5 basamakli abcde sayisi icin eðer tersten okunuþu yani edcba = abcde ise palindrom sayýdýr
    
    if(a == e && d == b ){
    	
    	printf("\nSayi palindrom sayidir");
    	
	}
	
	else{
		
		printf("\nSayi palindrom sayi degildir");
		
	}
    
     	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
