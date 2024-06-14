

//¬ этом задании вы будете читать из файла адреса и выводить их в другой файл в другом формате, отсортированными по названию города.

#include <iostream>
#include <fstream>
#include <string.h>

enum Letters {
	A = 1,
	B,
	C,
	D, 
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z
};

int func() {
	int N;
	std::ifstream in("in1.txt");
	if (in.is_open()) {
		in >> N;
		std::ofstream out("out.txt");
		if (out.is_open()) {
			out << N << std::endl;
			std::string City[N];
			std::string Street[N];
			int House[N];
			int Flat[N];
			for (int i=0; i<N; ++i) {
				in >> City[i];
				in >> Street[i];
				in >> House[i];
				in >> Flat[i];
			}
			in.close();
			int *numbers = new int[N];
			for (int i=0; i<N; ++i) {
				std::string s = City[i];
				char c = s[0];
				Letters l = static_cast<Letters>(c);
				numbers[i] = l;
			}
			
			for (int i=0; i<N; ++i) {
				for (int j=0; j<N-1; ++j) {
					if (numbers[j]>numbers[j+1]) {
						std::swap(City[j], City[j+1]);
						std::swap(House[j], House[j+1]);
						std::swap(Street[j], Street[j+1]);
						std::swap(Flat[j], Flat[j+1]);
						std::swap(numbers[j], numbers[j+1]);
					}
				}
			}
			
			for (int i=0; i<N; ++i) {
				out << City[i] << ", ";
				out << Street[i] << ", ";
				out << House[i] << ", ";
				out << Flat[i] << std::endl;
			}
			delete[] numbers;
			out.close();
		}
	}
}


int main() {
	func();
}
