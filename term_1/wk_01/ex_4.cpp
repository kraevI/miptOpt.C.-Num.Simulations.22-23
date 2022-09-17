#include <iostream>
#include <fstream>

int main() {
	std::ofstream out;
	out.open("ex_4.txt");
	if (!out) {
		std::cout << "File was not open" << std::endl;
		return 1;
	}
	for (int i = 1; i <= 30; i++) out << i << " ";
	out.close();
}