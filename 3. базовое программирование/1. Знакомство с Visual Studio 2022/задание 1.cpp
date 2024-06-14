#include <iostream>
#include <fstream>
int main() {
	int N, M;
	std::ifstream in("in.txt");
	if (in.is_open()) {
		in >> N;
		int *aN = new int[N];
		in>>aN[N-1];
		for (int i=0; i<N-1; ++i) {
			in >> aN[i];
		}
		in >> M;
		int *aM = new int[M];
		for (int i=1; i<M; ++i) {
			in >> aM[i];
		}
		in >> aM[0];
		std::ofstream out("out.txt");
		if (out.is_open()) {
			out << M << std::endl;
			for (int i=0; i<M; ++i) {
				out << aM[i] << " ";
			}
			out << std::endl << N << std::endl;
			for (int i=0; i<N; ++i) {
				out << aN[i] << " ";
			}
			delete[] aM;
			delete[] aN;
			in.close();
			out.close();
		}
	}
}