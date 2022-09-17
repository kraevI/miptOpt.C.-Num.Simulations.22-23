#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
	int n;
	if (argc != 2) return 1;
	n = std::stoi(argv[1]);

	int * fibonacci_array = new int[100];
	fibonacci_array[1] = 1;
	fibonacci_array[2] = 1;
	for (int i = 3; i <= n; i++) {
		fibonacci_array[i] = fibonacci_array[i - 1] + fibonacci_array[i - 2];
	}

	std::ofstream out;
	out.open("ex_7_outFile.txt");
	if (!out) {
		std::cout << "File was not open" << std::endl;
		return 2;
	}


	out << "serial number:" << "  " <<"number:" << "\n";
	for (int i = 1; i <= n; i++) {
		if (i < 10) out << "               " << i << "       " << fibonacci_array[i] << "\n";
		else out << "               " << i << "      " << fibonacci_array[i] << "\n";
	}
	out.close();

	delete[]fibonacci_array;
	return 0;
}