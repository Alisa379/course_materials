#include <iostream>
#include <fstream>
int main() {
	std::ifstream file("in.txt");
	int size;
	file >> size;
	int *array = new int[size];
	for (int i=0; i<size; ++i) {
		file >> array[i];
	}
	for (int i=size-1; i>=0; --i) {
		std::cout << array[i]<<" ";
	}
	delete[] array;
}