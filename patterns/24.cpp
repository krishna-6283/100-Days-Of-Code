//    1
//   121
//  12321
// 1234321

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	 for (int i =1;i<=n;i++){
		int k =1;
		int m =i-1;
		for(int j=n-i;j>=1;j--){
			cout<<" ";
		}
		for (int j =1;j<=i;j++){
			cout<<k;
			k+=1;
		}
		for (int j=1;j<i;j++){
			cout<<m;
			m-=1;
		}


		cout<<endl;
	 }
	return 0;
}