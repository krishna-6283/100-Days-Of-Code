// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k;
	 for (int i =1;i<=n;i++){
		k=i;

		for(int j=1;j<=i;j++){
			cout<<k<<" ";
			k+=1;
		}
		cout<<endl;
	 }
	return 0;
}