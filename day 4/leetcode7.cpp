#include<iostream>
#include<math.h>
using namespace std;



    int reverse(int x) {

        int ans = 0;
        while(x!=0){
            int rem = x%10;
            if ((ans>INT32_MAX/10) || (ans<INT32_MIN/10)){
                return 0;
            }
            ans = (ans*10)+rem;
            x=x/10;
        } 
        return ans;
    }


int main(){
	int x;
	cin>>x;
	int ans = reverse(x);
	cout<<ans;
	return 0;
}