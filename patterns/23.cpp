//    1
//   23
//  456
// 78910

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k =1;
	 for (int i =1;i<=n;i++){

		for(int j=n-i;j>=1;j--){
			cout<<" ";
		}
		for (int j=1;j<=i;j++){
			cout<<k;
			k+=1;
		}
		cout<<endl;
	 }
	return 0;
}