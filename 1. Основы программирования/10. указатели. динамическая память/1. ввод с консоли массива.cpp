//Вам необходимо организовать ввод массива с консоли. 
//Сначала спросите у пользователя размер массива, а затем предложите ему по очереди ввести каждый элемент массива. 
//В конце выведите на экран получившийся массив.
#include <iostream>
int main() {
	int size;
	std::cout<<"Insert size of the array"<<std::endl;
	std::cin>>size;
	std::cout<<"Enter each element of the array in turn\n";
	int *ptr = new int[size];
	for (int i=0; i<size; ++i) {
		std::cout<<"arr["<<i<<"] = ";
		std::cin>>ptr[i];
	}
	std::cout<<"Entered array: ";
	for (int i=0; i<size; ++i) {
		std::cout<<ptr[i]<<" ";
	}
	delete ptr;
}