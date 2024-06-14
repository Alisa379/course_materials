#include <iostream>
void reverse(int *arr, int size) {
	int n = size/2;
	int size1=size-1;
	int n1=0;
	for (int j=0; j<n; ++j) {
		std::swap(arr[size1], arr[n1]);
		size1--;
		n1++;
	}
}
int main() {
	int array[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout<<"Before function reverse: ";
	for (int n: array) {
		std::cout<<n<<" ";
	}
	std::cout<<std::endl;
	reverse(array, sizeof(array)/sizeof(array[0]));
	std::cout<<"After function reverse: ";
	for (int i=0; i<sizeof(array)/sizeof(array[0]); ++i) {
		std::cout<<array[i]<<" ";
	}
	std::cout<<std::endl;
}