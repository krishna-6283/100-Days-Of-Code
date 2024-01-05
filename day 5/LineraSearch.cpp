#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
	for(int i =0;i<n;i++){
		if (arr[i]==key){
			return true;
		}
	}
	return false;

}

int main(){
	int arr[100], n;
	cin>>n;
	for (int i =0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Number to be found: ";
	cin>>key;
	bool ans = linearSearch(arr,n,key);
	cout<<ans;
	return 0;
}