#include<iostream>
using namespace std;

bool palindrome(string s, int i, int j){
	if(i>=j) return true;
	if(s[i]!=s[j-1]){
		return false;
	}
	return palindrome(s, i+1,j-1);
}

int main(){
	string str="abba";
	int n =str.size();
	if (palindrome(str, 0,n-1)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}