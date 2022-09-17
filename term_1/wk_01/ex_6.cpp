#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
	int n;
	if (argc != 2) return 1;
	n = std::stoi(argv[1]);
	std::ofstream out;
	out.open("ex_6_outFile.txt");
	if (!out) {
		std::cout << "File was not open" << std::endl;
		return 2;
	}
	for (int i = 1; i <= n; i++) out << i << " ";
	out.close();

	return 0;
}