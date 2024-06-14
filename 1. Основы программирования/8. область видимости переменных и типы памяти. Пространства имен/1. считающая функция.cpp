//Нужно написать функцию, которая отслеживает, 
//сколько раз она была вызвана за время работы программы.
#include <iostream> 

void counting_function() {
	static int score=1;
	std::cout<<"Amount calls of function counting_function(): "<<score<<std::endl;
	score++;
}

int main(int argc, char** argv) {
	for (int i=0; i<15; ++i) {
		counting_function();
	}
}