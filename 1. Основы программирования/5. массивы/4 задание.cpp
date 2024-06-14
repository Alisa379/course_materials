#include <iostream>
int main() {
	int arr[10]={10, 3, 4, 1, 8, 9, 7, 2, 6, 5};
	bool fact=false;
	std::cout<<"Array before sorting: ";
	for (int n: arr) {
			std::cout<<n<<" ";
	}
	do {
		fact=false;
		for (int i=8; i>=0; --i) {
			if (arr[i]<arr[i+1]) {
				std::swap(arr[i], arr[i+1]);
				fact=true;
			}
		}
	} while (fact);
	
	std::cout<<"\nArray after sorting: ";
	for (int i=9; i>=0; --i) {
		std::cout<<arr[i]<<" ";
	}
}