#include <iostream>
using namespace std;

int arr[20];								// Membuat Array dengan panjang data 20
int n;									// Membuat Variable inputan n

void input() {						// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";// Membuat Inputan Jumlah Elemen Array
		cin >> n;									// Memanggil Variable inputan n

		if (n <= 20) {								// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";// Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "======================" << endl;	// Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;


	for (int i = 0; i < n; i++)						// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << ": ";					// Masukkan nilai data n kedalam array arr
		cin >> arr[i];
	}
}

void insertionsort() {						// Procedure Insertionsort

	int temp;								// Membuat variable data temporer atau penyimpanan sementara
	int j;									// Membuat variable j sebagai penanda

	for (int i = 1; 1 < n; i++) {			// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];						// 2. Simpan nilai arr [i] ke variable sementara temp

		j = i - 1;							// 3. Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)		// 4. Looping whhile dimana nilai j lebih besar sama dengan 0 dan	
											// arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];			// 4a. Simpan arr[j] ke dalam variable arr [ j + 1 ]
			j--;							// 4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;					// 5. Simpan nilai temp ke dalam arr [j+1
		}
