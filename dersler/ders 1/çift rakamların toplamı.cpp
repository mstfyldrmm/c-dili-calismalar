#include <stdio.h>

int main() {
	
	int sayi, adet, a, b, c, i, toplam = 0;
	
	printf("Sayi adetini giriniz:");
	scanf("%d",&adet);
	
    for(i = 1; i <= adet; i++)
    {
    	printf("Uc basamakli sayiyi giriniz:");
		scanf("%d",&sayi);
	    a = sayi / 100 ;
	    b = (sayi % 100) / 10 ;
	    c = sayi % 10 ;
	    printf("  Yuzler basamagi : %d Onlar basamagi : %d Birler basamagi : %d \n", a, b, c);
	    if(a % 2 == 0)
	    {
	    	toplam = toplam + a ;
		}
		else if(b % 2 == 0)
		{
			toplam = toplam + b ;
		}
		else if(c % 2 == 0)
		{
			toplam = toplam + c ;
		}
	}
	
	printf("Toplam : %d",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
