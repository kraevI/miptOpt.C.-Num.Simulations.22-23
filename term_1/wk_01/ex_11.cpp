#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char* argv[]) {
	int n;
	if (argc != 2) return 1;
	n = std::stoi(argv[1]);

	std::ofstream out;
	out.open("ex_11_outFile.exe");
	if (!out) {
		std::cout << "File was not open" << std::endl;
		return 2;
	}
	
	vector<double> v;
	v.push_back(0);

	for (int i = 1; i <= n; i++) {
		v.push_back(static_cast<double>(1) / i);
		out << i << ". " << scientific << v[i] << endl;
	}

	out.close();
	return 0;
}