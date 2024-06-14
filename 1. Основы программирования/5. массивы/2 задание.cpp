//Напишите программу, которая создаёт массив целых чисел на 10 элементов, выводит на экран все элементы массива, находит минимальный и максимальный элементы массива и выводит их на экран. Числа для заполнения массива придумайте сами.
#include <iostream>
int main() {
	int max, min, arr[10]={1, 3, 5, 7, 9, 11, 13, 15, 17, 18};
	max=arr[0];
	min=arr[0];
	for (int i=0; i<10; ++i) {
		if (arr[i]>max) {
			max=arr[i];
		}
	}
	for (int i=0; i<10; ++i) {
		if (arr[i]<min) {
			min=arr[i];
		}
	}
	std::cout<<"Array: ";
	for (int n: arr){
		std::cout<<n<<" ";
	}
	std::cout<<"\nThe minimum element: "<<min;
	std::cout<<"\nThe maximum element: "<<max;
}