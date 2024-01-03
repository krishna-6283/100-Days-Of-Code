#include<iostream>
using namespace std;

int main(){

	long int n;
	cin>>n;
	int ans =0;
	int base =1;
	while(n!=0){
		int rem = n%10;
		ans = (rem * base) + ans;
		base*=2;
		n=n/10;
	}
	cout<<ans;

	return 0;
}