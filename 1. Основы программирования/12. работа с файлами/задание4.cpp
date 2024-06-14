#include <iostream>
#include <fstream>
int main() {
	int lines = 0, columns = 0;
	std::ifstream file("in.txt");
	file >> lines;
	file >> columns;
	int **array = new int*[lines];
	for (int i=0; i<lines; ++i) {
		array[i] = new int[columns];
	}
	for (int i=0; i<lines; ++i) {
		for (int j=0; j<columns; ++j) {
			file >> array[i][j];
		}
	}
	for (int i=0; i<lines; ++i) {
		for (int j=columns-1; j>=0; --j) {
			std::cout<<array[i][j]<<" ";
		}
		std::cout<<"\n";
	}
	for (int i=0; i<lines; ++i) {
		delete[] array[i];
	}
	delete[] array;
}