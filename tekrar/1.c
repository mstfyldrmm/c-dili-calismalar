
  #include <stdio.h> 
  #include <stdlib.h> 
  #include <stdbool.h> 
  #include <string.h> 
   
  struct _TelDef {		//Telefon bilgilerini tutan yap� 
  	char adi[30]; 
  	char soyadi[30]; 
  	char tel_num[12]; 
  	struct _TelDef *sonraki;	//Listedeki bir sonraki yap�y� g�steren i�aret�i 
  } *_baslangic;		//Listenin ba�lang�� adresini tutar 
  typedef struct _TelDef TelDef; 
   
  void kisiOku(TelDef *dugum, FILE *dosya)	//Dosyadan ki�i bilgisi okur 
  { 
  	fgets(dugum->adi, 30, dosya);	// Sat�r� okur ve ilk parametrede g�sterilen yere yazar 
  	fgets(dugum->soyadi, 30, dosya); 
  	fgets(dugum->tel_num, 12, dosya); 
  	dugum->adi[strlen(dugum->adi) - 1] = '\0';	//Beklenmedik karakter d�n���m� 
  	dugum->soyadi[strlen(dugum->soyadi) - 1] = '\0'; 
  	dugum->tel_num[strlen(dugum->tel_num) - 1] = '\0'; 
  } 
   
  void defteriOku()	//Dosyay� okur, her ki�i i�in bir d���m olu�turup bilgileri 
  {					//saklar ve d���mleri birbirine ba�lar 
  	TelDef *dugum; 
  	FILE *dosya = fopen("telefon defteri.txt", "r"); 
  	if(!dosya) 
  		return; 
  	 
  	if(fgetc(dosya) == '#') {	//Dosyada # i�areti ile ba�layan b�l�m bir ki�i bilgisidir 
  		_baslangic = dugum = (TelDef *) malloc(sizeof(TelDef));	/* �lk ki�i i�in 
  		yer ayr�l�r ve ba�lang�� adresi olarak kaydedilir.*/ 
  		 
  		kisiOku(dugum, dosya); 
  	} 
  	else { 
  		fclose(dosya);	// Dosya bo� ise kapat ve ��k. 
  		return; 
  	} 
  		 
  	while(fgetc(dosya) == '#') {	/*Devam eden ki�iler i�inde yer ayr�l�r ve 
  		dugumlere kaydedilir*/ 
  		 
  		dugum->sonraki = (TelDef *) malloc(sizeof(TelDef)); 
  		dugum = dugum->sonraki; 
  		kisiOku(dugum, dosya); 
  	} 
  	dugum->sonraki = NULL; 
  	fclose(dosya); 
  } 
   
  bool yeniKisiEkle(TelDef *kisi)	//Eklenecek yeni ki�i i�in d���m olu�turur ve 
  {								//hem belle�e hem de dosyaya yazar. 
  	TelDef *dugum = _baslangic; 
  	FILE *dosya = fopen("telefon defteri.txt", "a"); 
  	if(!dosya) 
  		return false; 
  	 
  	fprintf(dosya, "#%s\n", kisi->adi); 
  	fprintf(dosya, "%s\n", kisi->soyadi); 
  	fprintf(dosya, "%s\n", kisi->tel_num); 
  	fclose(dosya); 
  	 
  	if(dugum) { 
  		while(dugum->sonraki)	//Listenin sonuna gelene kadar devam et 
  			dugum = dugum->sonraki; 
  		dugum->sonraki = (TelDef *) malloc(sizeof(TelDef)); 
  		dugum = dugum->sonraki; 
  	} 
  	else	//Liste bo� ise ilk d���m 
  		_baslangic = dugum = (TelDef *) malloc(sizeof(TelDef)); 
  	dugum->sonraki = NULL; 
  	 
  	strcpy(dugum->adi, kisi->adi); 
  	strcpy(dugum->soyadi, kisi->soyadi); 
  	strcpy(dugum->tel_num, kisi->tel_num); 
  	return true; 
  } 
   
  char* numarayiBul(char adi[], char soyadi[])	//Ad ve soyada bakarak numaray� bulur 
  { 
  	TelDef *dugum = _baslangic; 
  	while(dugum) { 
  		if(!strcmp(adi, dugum->adi) && !strcmp(soyadi, dugum->soyadi)) 
  			return dugum->tel_num; 
  		dugum = dugum->sonraki; 
  	} 
  	 
  	return NULL; 
  } 
   
  void dokumAl()	//B�t�n listeyi yazd�r�r 
  { 
  	TelDef *dugum = _baslangic; 
  	if(!dugum) 
  		printf("\nListe bos!\n"); 
  		 
  	while(dugum) { 
  		printf("%s\n%s\n%s\n\n", dugum->adi, dugum->soyadi, dugum->tel_num); 
  		dugum = dugum->sonraki; 
  	} 
  } 
   
  int main() 
  { 
  	char ch, *numara; 
  	TelDef kisi; 
  	 
  	defteriOku();	//Bunu mutlaka �a��r�yoruz 
  	do { 
  		fflush(stdin); 
  		printf("\n(Y)eni kisi ekle:\n(N)umara bul:\nDoku(m) al\n(C)ik:\n"); 
  		ch = getchar(); 
  		 
  		if(ch == 'y') { 
  			fflush(stdin); 
  			printf("Eklenecek kisi\nAdi: "); 
  			gets(kisi.adi); 
  			printf("Soyadi: "); 
  			gets(kisi.soyadi); 
  			printf("Telefon numarasi: "); 
  			gets(kisi.tel_num); 
  			 
  			if(yeniKisiEkle(&kisi)) 
  				printf("\nKisi eklendi\n"); 
  			else 
  				printf("\nEklenemedi!\n"); 
  		} 
  		 
  		if(ch == 'n') { 
  			fflush(stdin); 
  			printf("Bulunacak kisi\nAdi: "); 
  			gets(kisi.adi); 
  			printf("Soyadi: "); 
  			gets(kisi.soyadi); 
  			 
  			numara = numarayiBul(kisi.adi, kisi.soyadi); 
  			if(numara) 
  				printf("\nNumara: %s\n", numara); 
  			else 
  				printf("\nKisi bulunamadi!\n"); 
  		} 
  		 
  		if(ch == 'm') 
  			dokumAl(); 
  	} while(ch != 'c'); 
   
  	return 0; 
  } 
