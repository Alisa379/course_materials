// В этом задании вы будете читать адреса из файла и выводить их в другой файл в другом формате.

 #include <iostream>
 #include <fstream>
 #include <string.h>
 
 class Address {
 	public:
 		int N;
 		int stock;
 		std::string sstock;
 		
 	Address() {
 		std::ifstream file("in.txt");
 		if (file.is_open()) {
 			file >> N;;
 			file.close();
		}
	}
	
	void newFile() {
		std::ofstream newfile("out.txt", std::ios::app);
		if (newfile.is_open()) {
			newfile << N << std::endl;
		}
		for (int i=N-1; i>=0; --i) {
			std::ifstream file("in.txt");
			if (file.is_open() && newfile.is_open()) {
				file >> stock;
				for (int j=0; j<i; ++j) {
					file >> sstock;
					file >> sstock;
					file >> stock;
					file >> stock;
					std::cout<<sstock<<" "<<stock<<std::endl;
				}
				file >> sstock;
				newfile << sstock << ", ";
				file >> sstock;
				newfile << sstock << ", ";
				file >> stock;
				newfile << stock << ", ";
				file >> stock;
				newfile << stock << std::endl;
				file.close();
			}
		}
		newfile.close();
	}
	
 };
 
 int main() {
 	Address ad;
 	ad.newFile();
 }
 