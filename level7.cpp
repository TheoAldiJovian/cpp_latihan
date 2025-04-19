// Nama File: level7.cpp
// Deskripsi: Program Latihan C++ Level 7 - Array
// Dibuat Oleh: Fajarenaldi
// Tanggal: 19 April 2025

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
	int nilai[5] = {1,2,3,4,5};
	// string namaUser;
	// bool lanjut = true;


	// --- Judul / Salam Pembuka Program ---
	cout << "--- Program Latihan Level 7 : array ---" << endl;
	cout << "=======================================" << endl << endl;

	cout << "Data dari variabel 'nilai' urutan ke 1: " << nilai[0] << endl;
	cout << "Data dari variabel 'nilai' urutan ke 2: " << nilai[1] << endl;
	cout << "Data dari variabel 'nilai' urutan ke 3: " << nilai[2] << endl;
	cout << "Data dari variabel 'nilai' urutan ke 4: " << nilai[3] << endl;
	cout << "Data dari variabel 'nilai' urutan ke 5: " << nilai[4] << endl;

	// --- Penutup Program & Jeda ---
	cout << "\n=====================" << endl;
	cout << "--- Program Selesai ---" << endl;

	// Membersihkan buffer input sebelum cin.get()
	// Ini penting biar program gak langsung nutup kalau sebelumnya ada cin >> variabel
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Tekan Enter untuk keluar...";
	cin.get(); // Menunggu user menekan Enter sebelum window console tertutup

	return 0; // Mengembalikan 0, tanda program berakhir dengan sukses
}

// --- Definisi Fungsi (jika ada fungsi buatan sendiri) ---
// Tulis isi dari fungsi yang kamu deklarasikan di atas tadi di sini
// Contoh:
// void namaFungsiKamu(int parameter) {
//     cout << "Fungsi dipanggil dengan parameter: " << parameter << endl;
//     // ...isi logika fungsi kamu...
// }
