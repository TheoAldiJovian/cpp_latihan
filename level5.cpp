// Nama File: level5.cpp
// Deskripsi: Program Latihan C++ Level 5 - Menggunnakan 'switch case'
// Dibuat Oleh: Fajarenaldi
// Tanggal: 18 April 2025

#include <iostream> // Untuk input-output (cin, cout, endl)
#include <string>   // Untuk tipe data string
#include <limits>   // Diperlukan untuk numeric_limits (buat cin.ignore)
// #include <vector>   // Aktifkan ini kalau butuh array dinamis (STL Vector) nanti
// #include <cmath>    // Aktifkan ini kalau butuh fungsi matematika (sqrt, pow, dll)

// Menggunakan namespace std biar gak nulis std:: terus-terusan
using namespace std;

// --- Deklarasi Fungsi (jika ada fungsi buatan sendiri) ---
void calculator(char op, int nilai1, int nilai2);


// --- Fungsi Utama Program (Gerbang Utama) ---
int main() {

	// --- Deklarasi Variabel ---:
	int nilai1, nilai2;
	char op;
	bool lanjut = false;


	// --- Judul / Salam Pembuka Program ---
	cout << "--- Program Latihan Level 5: Switch Case ---" << endl;
	cout << "============================================" << endl << endl;
	
	do {
		cout << "Masukkan Nilai 1: ";
		cin >> nilai1;
		cout << "Masukkan tanda operasi(masukkan antara '+', '-', '*', dan '/'): ";
		cin >> op;
		cout << "Masukkan Nilai 2: ";
		cin >> nilai2;

		if (op == '+' || op == '-' || op == '*' || op == '/') {
			lanjut = true;
			calculator(op,  nilai1, nilai2);
		} else {
			cout << "Ada kesalahan mohon diulangi kembali" << endl;
		}
	} while (!lanjut);

	// --- Penutup Program & Jeda ---
	cout << "\n===========================================" << endl;
	cout << "------------- Program Selesai ---------------" << endl;

	// Membersihkan buffer input sebelum cin.get()
	// Ini penting biar program gak langsung nutup kalau sebelumnya ada cin >> variabel
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Tekan Enter untuk keluar...";
	cin.get(); // Menunggu user menekan Enter sebelum window console tertutup

	return 0; // Mengembalikan 0, tanda program berakhir dengan sukses
}

void calculator(char op, int nilai1, int nilai2) {
	int hasil;
	int sisa;
	
	switch(op) {
		case '+':
			hasil = nilai1 + nilai2;
			break;
		case '-':
			hasil = nilai1 - nilai2;
			break;
		case '*':
			hasil = nilai1 * nilai2;
			break;
		case '/':
			hasil = nilai1 / nilai2;
			sisa = nilai1 % nilai2;
			break;
		default:
			cout << "Ada kesalahan" << endl;
	}

	if (op == '/') {
		cout << "Hasil dari " << nilai1 << op << nilai2 << ": " << hasil << ", dengan sisa: " << sisa << endl;
	} else {
		cout << "Hasil dari " << nilai1 << op << nilai2 << ": " << hasil << endl;
	}
} 
