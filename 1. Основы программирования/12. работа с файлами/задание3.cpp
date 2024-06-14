#include <iostream>
#include <fstream>
int main() {
	int size;
	int a;
	std::cout << "Input the size of the array: ";
	std::cin >> size;
	int *array = new int[size];
	for (int i=0; i<size; ++i) {
		std::cout << "arr["<<i<<"] = ";
		std::cin >> array[i];
	}
	std::fstream file("out.txt", std::ios::app);
	file << size << "\n";
	for (int i=size-1; i>=0; --i) {
		file << array[i] << " "; 
	}
	file.close();
	std::ifstream file1("out.txt");
	file1 >> size;
	std::cout << size << "\n";
	for (int i=0; i<size; ++i) {
		file1 >> a;
		std::cout << a << " ";
	}
	delete[] array;
}