#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[100];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	for (int i =0;i<n-1;i+=2){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1]= temp;

	}
	
	cout<<"After Swapping: "<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}