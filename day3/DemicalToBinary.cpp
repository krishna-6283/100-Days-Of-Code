#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int ans = 0;
	int i =0;
	int base =1;
	while(n!=0){
		int rem = n&1;
		ans = (rem * base ) + ans;
		n=n>>1;
		base*=10;
	}
	cout<<ans;


	return 0;
}