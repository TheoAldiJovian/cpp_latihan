// Nama File: level8.cpp
// Deskripsi: Program Latihan C++ Level 8 - pointer dan memori
// Dibuat Oleh : Fajarenaldi
// Tanggal: 21 April 2025

/*
#include <iostream> // Untuk input-output (cin, cout, endl)
#include <string>   // Untuk tipe data string
#include <limits>   // Diperlukan untuk numeric_limits (buat cin.ignore)
// #include <vector>   // Aktifkan ini kalau butuh array dinamis (STL Vector) nanti
// #include <cmath>    // Aktifkan ini kalau butuh fungsi matematika (sqrt, pow, dll)

// Menggunakan namespace std biar gak nulis std:: terus-terusan
using namespace std;

// --- Deklarasi Fungsi (jika ada fungsi buatan sendiri) ---
// Contoh: void namaFungsiKamu(int parameter);


// --- Fungsi Utama Program (Gerbang Utama) ---
int main() {

	// --- Deklarasi Variabel ---
	int variabel, a, b, c, d;
	int *jumlahArray = &variabel;
	// string namaUser;
	// bool lanjut = true;


	// --- Judul / Salam Pembuka Program ---
	cout << "--- Program Latihan Level 8 : Pointer dan Memori---" << endl;
	cout << "===================================================" << endl << endl;

	cout << "Masukkan nilai untuk variabel dan array: ";
	cin >> variabel;

	int array[*jumlahArray];
	
	cout << "Masukkan nilai tambahan untuk isi variabel(variabel + ?): ";
	cin >> a;
	cout << "Masukkan array 'variabel' keberapa yang ingin diganti nilainya nanti: ";
	cin >> b;
	cout << "Nilainya diganti berapa: ";
	cin >> c;
	
	cout << "Alamat memori" << endl;
	cout << "Variabel memiliki nilai: " << variabel << ", Pada alamat memori: " << &variabel << endl;

	cout << "Pointer" << endl;
	
	for (int i = 0; i < *jumlahArray; i++) {
		d += a;
		array[i] = d;
		cout << "Array no: " << i+1 << " bernilai: " << array[i] << endl;
	}

	int *pointer = array;
		*(pointer+(b-1)) = c;
	cout << "Nilai array ke " << b << " setelah diganti adalah " << array[0+(b-1)] << endl;
	
	// --- Penutup Program & Jeda ---
	cout << "\n=================================================" << endl;
	cout << "---------------- Program Selesai ------------------" << endl;

	// Membersihkan buffer input sebelum cin.get()
	// Ini penting biar program gak langsung nutup kalau sebelumnya ada cin >> variabel
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Tekan Enter untuk keluar...";
	cin.get(); // Menunggu user menekan Enter sebelum window console tertutup

	return 0; // Mengembalikan 0, tanda program berakhir dengan sukses
}
*/

// Nama File: level8_revised.cpp
// Deskripsi: Program Latihan C++ Level 8 - Pointer, Memori, dan Vector
// Dibuat Oleh: Fajarenaldi (Direvisi)
// Tanggal: 21 April 2025

#include <iostream>
#include <string>
#include <vector> // Include header untuk std::vector
#include <limits>
#include <numeric> // Untuk std::iota (opsional, cara keren isi array berurutan)

using namespace std;

int main() {

    // --- Deklarasi Variabel ---
    int ukuranArray; // Langsung pakai int biasa untuk ukuran
    int nilaiAwal;    // Nilai pertama untuk deret
    int indeksUbah;   // Indeks (mulai dari 1) yang mau diubah
    int nilaiBaru;   // Nilai baru

    // --- Judul / Salam Pembuka Program ---
    cout << "--- Program Latihan Level 8 : Pointer, Memori & Vector ---" << endl;
    cout << "========================================================" << endl << endl;

    cout << "Masukkan ukuran array yang diinginkan: ";
    cin >> ukuranArray;

    // --- PENTING: Gunakan std::vector ---
    // Ukuran ditentukan saat runtime, vector mengurus memori di heap.
    vector<int> dataArray(ukuranArray); // Buat vector 'dataArray' dengan ukuran yg diminta

    cout << "Masukkan nilai awal untuk deret (misal: 10): ";
    cin >> nilaiAwal;

    cout << "Array mana (urutan ke berapa, mulai dari 1) yang ingin diubah? ";
    cin >> indeksUbah;
    cout << "Nilainya diganti jadi berapa? ";
    cin >> nilaiBaru;

    // --- Mengisi Vector dengan deret aritmatika (10, 20, 30, ...) ---
    cout << "\nMengisi dan Menampilkan Isi Array (Vector):" << endl;
    for (int i = 0; i < ukuranArray; ++i) {
        dataArray[i] = nilaiAwal * (i + 1); // Logika: 1*a, 2*a, 3*a, ...
        cout << "Array no: " << i + 1 << " bernilai: " << dataArray[i] << endl;
    }

    // --- Demo Alamat Memori Variabel Biasa ---
    cout << "\nAlamat Memori:" << endl;
    cout << "Variabel 'ukuranArray' memiliki nilai: " << ukuranArray
         << ", Pada alamat memori: " << &ukuranArray << endl;

    // --- Demo Pointer Mengubah Nilai Vector ---
    cout << "\nPointers:" << endl;
    if (indeksUbah >= 1 && indeksUbah <= ukuranArray) {
        // 1. Deklarasi Pointer dan Arahkan ke Elemen Pertama Vector
        int *pointerKeArray = dataArray.data(); // .data() memberikan pointer ke elemen pertama

        // 2. Pointer Arithmetic untuk Mengubah Nilai
        // (indeksUbah - 1) karena user input mulai dari 1, indeks C++ mulai dari 0
        *(pointerKeArray + (indeksUbah - 1)) = nilaiBaru;

        cout << "Nilai array (vector) ke-" << indeksUbah << " SETELAH diubah via pointer adalah: "
             << dataArray[indeksUbah - 1] << endl; // Tampilkan pakai akses biasa

        // --- (Opsional) Tampilkan Alamat Elemen Array ---
        cout << "\nAlamat elemen-elemen awal array (vector):" << endl;
        for(int i = 0; i < ukuranArray; ++i) { // Tampilkan 5 alamat pertama aja
            cout << "Alamat elemen ke-" << i << " (&dataArray[" << i << "]): " << &dataArray[i] << endl;
            cout << "Alamat via pointer (pointerKeArray + " << i << "): " << (pointerKeArray + i) << endl;
        }
    } else {
        cout << "Indeks array ke-" << indeksUbah << " tidak valid!" << endl;
    }

    // --- Penutup Program & Jeda ---
    cout << "\n========================================================" << endl;
    cout << "------------------- Program Selesai --------------------" << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Tekan Enter untuk keluar...";
    cin.get();

    return 0;
}

// --- Definisi Fungsi (jika ada fungsi buatan sendiri) ---
// Tulis isi dari fungsi yang kamu deklarasikan di atas tadi di sini
// Contoh:
// void namaFungsiKamu(int parameter) {
//     cout << "Fungsi dipanggil dengan parameter: " << parameter << endl;
//     // ...isi logika fungsi kamu...
// }
