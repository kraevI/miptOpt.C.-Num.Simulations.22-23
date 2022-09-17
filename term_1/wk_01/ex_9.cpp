#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	int n;
	if (argc != 2) return 1;
	n = std::stoi(argv[1]);

	double* array = new double[100];
	array[0] = 0;
	for (int i = 1; i <= n; i++) {
		array[i] = static_cast<double>(1) / i;
		std::cout << i <<". " << std::scientific <<  array[i] << std::endl;
	}

	delete[]array;
	return 0;
}