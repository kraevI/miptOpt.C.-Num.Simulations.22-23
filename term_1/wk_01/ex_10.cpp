﻿#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	int n;
	if (argc != 2) return 1;
	n = std::stoi(argv[1]);

	vector<double> v;
	v.push_back(0);

	for (int i = 1; i <= n; i++) {
		v.push_back(static_cast<double>(1) / i);
		cout << i << ". " << scientific << v[i] << endl;
	}

	return 0;
}