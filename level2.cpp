#include <iostream>
#include <string>

int a;

int main() {
	a = 5;

	float b = 3.1;

	char c;
	std::cout << "Masukkan char c: ";
	std::cin >> c;

	bool d = false;

	std::string e = "Aku level 2";

	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cin.get();
	return 0;
}
