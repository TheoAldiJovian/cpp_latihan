#include <iostream>
#include <string>
#include <limits>

using namespace std;

void pilihP(int a, string pilih);

int main() {
	int a;
	string pilih;
	bool inputMetodeBenar = false;

	cout << "Pilih nilai untuk berapa kali mengulangi: ";
	cin >> a;

	do {
		cout << "Menggunakan metode (ketik 'while', 'dowhile', atau 'for'): ";
		cin >> pilih;

	        if (pilih == "while" || pilih == "dowhile" || pilih == "for") {
			inputMetodeBenar = true;
			pilihP(a, pilih);
        	} else {
        		cout << "Pilihan metode tidak valid. Coba lagi." << endl;
        	}
    	} while (!inputMetodeBenar);

	cout << "\n--- Program Selesai ---" << endl;
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Tekan Enter untuk keluar...";
	cin.get();
	return 0;
}

void pilihP(int a, string pilih) {
	int i = 0;

	if (pilih == "while") {
		cout << "--- Menjalankan While Loop ---" << endl;

		while (i < a) {
            		cout << i+1 << endl; i++;
        	}
    	} else if (pilih == "dowhile") {
        	cout << "--- Menjalankan Do-While Loop ---" << endl;

		if (a > 0) {
			do {
				cout << i+1 << endl; i++;
     			} while (i < a);
		} else {
             		cout << "Jumlah pengulangan harus positif untuk do-while." << endl;
        	}
    	} else if (pilih == "for") {
        	cout << "--- Menjalankan For Loop ---" << endl;

        	for (i = 0; i < a; i++) {
			cout << i+1 << endl;
        	}
    	}
}
