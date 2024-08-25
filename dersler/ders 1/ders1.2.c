#include <stdio.h>
#include <stdlib.h>



int main() {
	int sayi1 = 25, sayi2 = 41;
	
	printf("%d\n",12+9);
	printf("%d\n",12*2);
	printf("%f\n",12.12 + 54.768);
	printf("%d",-sayi1 * sayi2); //sayi1 i - ile çarptý yani negatif oldu

	//atamalar x = y--> x i y atadýk örn;
	int x = 5, y = 8;
	y = x;
	x = y;
	x = x + 1; //Temel mantýk x + 1 hesaplayýp x atamak
	printf("x :%d y:%d \n",x,y);
	
	/* i artýrmak için c de farklý versiyonlar bulunuyor
	postfix = i++;
	prefix = ++i; */
	
	//postfix;
	int i = 4 ;
	printf("%d\n",i++);
	//burda çýktý 4 olur ama daha sonraki satýrlar için i 5 olur
	printf("%d\n",i); 
	// prefix
	int j = 7 ;
	printf("%d\n",++j); // i yi bir artmýþ þekilde basar ve i deðeri diðer satýrlarda 1 artýrýp içinde geçerlidir
	printf("%d",j);
	
	
	/* Veri tiplerinin dönüþümleri
	1-)OTOMATÝK DÖNÜÞTÜRME 
	c programlamada örneðin ; 3.2 / 2 sonucu 1.6 dýr
	aslýnda burda 2 integer deðerini float deðerine çevirir yani 2.0 gibi düþünülebilir
	
	c de farklý iki veri tipi karýþýk olan, daha derin veri tipine çevrilir 
	örn float ve double varsa float double çevrilir...
	
	
	2-) MANUEL DÖNÜÞTÜRME
	örneðin 3.2 float deðerini int(3.2)----- 3 sonucunu verir */
	int a = 25 ;
	float b = 3.4 ;
	
	printf("%f\n",a/b);
	printf("%f\n",12*a+b/a);
	printf("%d\n",(int)b);
	printf("%f",(float)a);
	
	
	
	
	
	 

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
