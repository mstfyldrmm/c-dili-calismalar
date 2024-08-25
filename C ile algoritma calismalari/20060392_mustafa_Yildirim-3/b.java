import java.util.*;

class odev_2 {
	public static int partition(int arr[], int low, int high) {
		int pivot = arr[high];
		int i = (low - 1);
		for (int j = low; j < high; j++) {

			if (arr[j] < pivot) {
				i++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

		int temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = temp;
		return i + 1;
	}

	public static void quick_sort(int arr[], int low, int high) {
		if (low < high) {
			int pi = partition(arr, low, high);
			quick_sort(arr, low, pi - 1);
			quick_sort(arr, pi + 1, high);
		}
	}

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
		quick_sort(toplam, 0, n - 1);// Toplam dizisini sirali sekilde kullandim
		int en_kucuk = toplam[0];
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