// Nama File: level[IsiNomorLevel].cpp
// Deskripsi: Program Latihan C++ Level [IsiNomorLevel] - [Topik Singkat Level Ini]
// Dibuat Oleh: [Nama Kamu/Username Kamu]
// Tanggal: [Tanggal Hari Ini]

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
	// Taruh semua variabel yang kamu butuhkan di awal main() sini
	// Contoh:
	// int counter = 0;
	// string namaUser;
	// bool lanjut = true;


	// --- Judul / Salam Pembuka Program ---
	cout << "--- Program Latihan Level [IsiNomorLevel]: [Judul Program] ---" << endl;
	cout << "=================================================" << endl << endl;


	// --- Logika Utama / Input / Proses ---
	// Di sinilah tempat kamu menulis kode inti untuk level ini!
	// Misalnya: Minta input user, lakukan perhitungan, pakai if/else, loop, switch, dll.

	// Contoh placeholder:
	// cout << "Masukkan nama Anda: ";
	// getline(cin, namaUser); // Pakai getline kalau input bisa ada spasi

	// cout << "Halo, " << namaUser << "!" << endl;



	// --- Output Hasil Akhir (jika perlu dipisah) ---
	// Kadang enak misahin bagian output utama di sini


	// --- Penutup Program & Jeda ---
	cout << "\n=================================================" << endl;
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
