#include <stdio.h>

int main() {
	/*------------- SW�TCH-CASE DURUMU--------------
	switch(de�i�ken)
	{
	
	case : durum
	....
	
	....
	case : durum_2
	....
	
	....
	case : durum_3
	....
	
	....
	
	default: bu durumda de�i�ken herhangi bir durumu sa�lamaz ise }*/

   int ortalama,vize,final,quiz;
   printf("Vize notunuzu giriniz:");
   scanf("%d",&vize);
   printf("Quiz notunuzu giriniz:");
   scanf("%d",&quiz);
   printf("Final notunuzu giriniz:");
   scanf("%d",&final);
   
   ortalama = (vize * 3/10.0) + (final / 2.0) + (quiz/10.0);
   
   switch(ortalama)
   {
   	case 10 :
   		printf("Kaldiniz");
   		break;
   	case 20 :
   	    printf("Kaldiniz");
   	    break;
   	    
   	default :
   		printf("Bravo gectiniz");
   		break;
   }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
