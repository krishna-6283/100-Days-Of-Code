// 1234
//  234
//   34
//    4

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	 for (int i =1;i<=n;i++){
		int k =i;
		for (int j=1;j<i;j++){
			cout<<" ";
		}
		for(int j=1;j<=n-i+1;j++){
			cout<<k;
			k+=1;
		}
		cout<<endl;
	 }
	return 0;
}