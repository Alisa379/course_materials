#include <iostream>
int main() {
	int arr[3][6]={{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}};
	int max=arr[0][0], max1=0, max2=0, min=arr[0][0], min1=0, min2=0;
	std::cout<<"The array: "<<"\n";
	for (int i=0; i<3; ++i) {
		for (int j=0; j<6; ++j) {
			std::cout<<arr[i][j]<<"\t";
			if (arr[i][j]>max) {
				max=arr[i][j];
				max1=i;
				max2=j;
			}
			if (arr[i][j]<min) {
				min=arr[i][j];
				min1=i;
				min2=j;
			}
		}
	    std::cout<<"\n";
	}
	std::cout<<"index of maximum element: "<<max1<<" "<<max2<<"\n";
	std::cout<<"index of minimum element: "<<min1<<" "<<min2<<"\n";
}