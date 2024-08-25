#include <stdio.h>

int main(){
	int sayi, i, a, b, c, d, toplam, hayat_no;

	while(1)
	{
	printf("\nBir sayi giriniz:");
	  
	scanf("%d",&sayi);
	
	  if(sayi != 0)
	  {
	
	  a = sayi / 1000 ;
	  
	  b = (sayi / 100) % 10 ;
	  
	  c = (sayi / 10) % 10;
	  
	  d = sayi % 10 ;
	  
	  printf("\nbinler %d yuzler %d onlar %d birler %d\n",a,b,c,d);
	  
	  toplam = a + b + c + d;
	  
	  hayat_no = toplam / 10 ;
	  
	  switch(hayat_no)
	  {
	  	case 1:
	  		printf("Kisilik ozelligi LIDER");
	  		break;
	  	case 2:
	  	    printf("Kisilik ozelligi KARASIZ");
	  	    break;
	  	case 3:
	  		printf("Kisilik ozelligi DENGELI");
	  		break;
	  	default : 
	  	    printf("Kisilik ozelligi NORMAL");
	  	    break;
	  }
	}
	else
	{
	break;
}
printf("\n Programdan cikmak icin 0 tuslayiniz");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
