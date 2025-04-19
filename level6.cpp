q// Nama File: level6.cpp
// Deskripsi: Program Latihan C++ Level 6 - Break dan Continue
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
	int nilaiP, nilaiL, nilaiB;
	// string namaUser;
	// bool lanjut = true;


	// --- Judul / Salam Pembuka Program ---
	cout << "--- Program Latihan Level 6: break dan continue ---" << endl;
	cout << "==================================================" << endl << endl;

	cout << "Masukkan nilai pengulangan: ";
	cin >> nilaiP;
	cout << "Masukkan nilai yang ingin di lewati: ";
	cin >> nilaiL;
	cout << "Masukkan nilai untuk berhenti: ";
	cin >> nilaiB;

	for (int o = 1; o <= nilaiP; o++) {
		if (o == nilaiL) {
			cout << "Pengulangan dilewati" << endl;
			continue;
		} else if (o == nilaiB) {
			cout << "Pengulangan berhenti" << endl;
			break;
		} else {
			cout << "Pengulangan ke " << o << endl;
		}
	}
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

// --- Definisi Fungsi (jika ada fungsi buatan sendiri) ---
// Tulis isi dari fungsi yang kamu deklarasikan di atas tadi di sini
// Contoh:
// void namaFungsiKamu(int parameter) {
//     cout << "Fungsi dipanggil dengan parameter: " << parameter << endl;
//     // ...isi logika fungsi kamu...
// }
