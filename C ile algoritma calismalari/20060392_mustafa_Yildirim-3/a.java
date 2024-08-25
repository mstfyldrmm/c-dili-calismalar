import java.util.*;

class odev_2 {
  public static void sifira_uzaklik(int dizi[], int n) {
    int adet = 0, k = 0;
    adet = (n * (n - 1)) / 2;
    int toplam[] = new int[adet];

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        toplam[k] = Math.abs(dizi[i] + dizi[j]);
        k++;
      }
    }
    int en_kucuk = toplam[0];

    for (int i = 0; i < adet; i++) {
      if (toplam[i] <= en_kucuk) // Toplamin en kucuk degeri bulunur. Yani sifira olan en yakin degerler.
        en_kucuk = toplam[i];
    }
    System.out.printf("\nToplamin en kucugunun sifira uzakligi %d\n", en_kucuk);

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (Math.abs(dizi[i] + dizi[j]) == en_kucuk)
          System.out.printf("\n%d %d toplaminin sifira uzakligi : %d kadar\n", dizi[i], dizi[j], en_kucuk);
      }
    }
  }

  public static void main(String[] args) {
    Scanner oku = new Scanner(System.in);
    Random yeni = new Random();
    System.out.printf("Dizinin eleman adeti : ");
    int n = oku.nextInt();
    int dizi[] = new int[n];

    for (int i = 0; i < n; i++)
      dizi[i] = yeni.nextInt((1000 - -1000) + 1) + -1000;

    long beginTime = 0, endTime = 0;
    beginTime = System.currentTimeMillis();
    sifira_uzaklik(dizi, n);
    endTime = System.currentTimeMillis();
    System.out.println("Calisma Suresi : " + ((double) (endTime - beginTime)) / 1000);
  }
}