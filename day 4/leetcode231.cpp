//power of two
#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n) {
        for (int i =0;i<=30;i++){
            int ans = pow(2,i);
            if (ans == n){
                return true;
            }
        }
        
        return false;
        
}

// public static boolean isPowerOfTwo(int n) {
// 	return n < 1 ? false : (n & (n - 1)) == 0 ? true : false;
// }

int main(){
	
	int n;
	cin>>n;
	bool res = isPowerOfTwo(n);
	cout<<res;


	return 0;
}