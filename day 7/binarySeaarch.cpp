#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0;
	int end = size-1;

	int mid = start+ ( end-start )/2;
	while(start <=end){
		if (arr[mid] == key){
			return mid;
		}
		// right part
		else if (key > arr[mid]){
			start = mid+1;
		}
		else{
			end = mid -1;
		}
		mid = start +(end-start)/2;
	}
	return -1;

}


int main(){

	int even[6] ={4,5,7,9,15,18};
	int odd[5] ={4,5,7,9,18};
	int index = binarySearch(even, 6, 19 );
	cout<<index<<endl;

	int index2 = binarySearch(odd,5, 9);
	cout<<index2<<endl;
	return 0;
}