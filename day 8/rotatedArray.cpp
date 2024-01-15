#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n){
	int s = 0;
	int e = n-1;
	int mid = (s+e)/2;
	while(s<e){
		if(arr[e]<arr[mid]){
			s=mid+1;
		}
		else {
			e = mid;
		}
		mid = (s+e)/2;		
		
	}
	return arr[s];
}
int main(){

	int arr[8] = {4,5,6,7,8,1,2,3};
	int mid = binary_search(arr,8);
	cout<<mid;
	return 0;
}



