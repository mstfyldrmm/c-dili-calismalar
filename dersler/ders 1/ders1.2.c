#include <stdio.h>
#include <stdlib.h>



int main() {
	int sayi1 = 25, sayi2 = 41;
	
	printf("%d\n",12+9);
	printf("%d\n",12*2);
	printf("%f\n",12.12 + 54.768);
	printf("%d",-sayi1 * sayi2); //sayi1 i - ile �arpt� yani negatif oldu

	//atamalar x = y--> x i y atad�k �rn;
	int x = 5, y = 8;
	y = x;
	x = y;
	x = x + 1; //Temel mant�k x + 1 hesaplay�p x atamak
	printf("x :%d y:%d \n",x,y);
	
	/* i art�rmak i�in c de farkl� versiyonlar bulunuyor
	postfix = i++;
	prefix = ++i; */
	
	//postfix;
	int i = 4 ;
	printf("%d\n",i++);
	//burda ��kt� 4 olur ama daha sonraki sat�rlar i�in i 5 olur
	printf("%d\n",i); 
	// prefix
	int j = 7 ;
	printf("%d\n",++j); // i yi bir artm�� �ekilde basar ve i de�eri di�er sat�rlarda 1 art�r�p i�inde ge�erlidir
	printf("%d",j);
	
	
	/* Veri tiplerinin d�n���mleri
	1-)OTOMAT�K D�N��T�RME 
	c programlamada �rne�in ; 3.2 / 2 sonucu 1.6 d�r
	asl�nda burda 2 integer de�erini float de�erine �evirir yani 2.0 gibi d���n�lebilir
	
	c de farkl� iki veri tipi kar���k olan, daha derin veri tipine �evrilir 
	�rn float ve double varsa float double �evrilir...
	
	
	2-) MANUEL D�N��T�RME
	�rne�in 3.2 float de�erini int(3.2)----- 3 sonucunu verir */
	int a = 25 ;
	float b = 3.4 ;
	
	printf("%f\n",a/b);
	printf("%f\n",12*a+b/a);
	printf("%d\n",(int)b);
	printf("%f",(float)a);
	
	
	
	
	
	 

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
