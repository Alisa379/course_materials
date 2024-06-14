#include <iostream>
void print(int *arr, int size) {
	for (int i=0; i<size; ++i) {
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
}
int main() {
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr1[]={6, 5, 4, 8};
	int arr2[]={1, 4, 3, 7, 5};
	print(arr, sizeof(arr)/sizeof(arr[0]));
	print(arr1, sizeof(arr1)/sizeof(arr1[0]));
	print(arr2, sizeof(arr2)/sizeof(arr2[0]));
}