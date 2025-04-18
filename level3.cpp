#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	cout << "Masukkan nilai a: ";
	cin >> a;
        cout << "Masukkan nilai b: ";
	cin >> b;

	string str = "Hasil dari ";

	cout << str << "a + b: " << a + b << endl;
	cout << str << "a - b: " << a - b << endl;
	cout << str << "a x b: " << a * b << endl;
	cout << str << "a / b: " << a / b << endl;
	cout << str << "modulus a/b: " << a % b << endl;

	bool hasil;

	hasil = (3 == 3) and (4 == 4);
	cout << hasil << endl;//1
	hasil = (7 != 9) && (8 != 8);
	cout << hasil << endl;//0;
	hasil = !(9 <= 3);
        cout << hasil << endl;//1
	hasil = (3 == 3) or (9 == 9);
        cout << hasil << endl;//1
	hasil = (4 <= 3) || (1 >= 4);
        cout << hasil << endl;//0

	cin.get();
	return 0;
}
