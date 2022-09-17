#include <iostream>
#include <fstream>

int main() {
	int n;
	std::cin >> n;
	std::ofstream out;
	out.open("ex_5.txt");
	if (!out) {
		std::cout << "File was not open" << std::endl;
		return 1;
	}
	for (int i = 1; i <= n; i++) out << i << " ";
	out.close();

	return 0;
}