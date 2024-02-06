#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	vector<int> vec ={2,1,3,4,2,6,4,6,74,2};
	map<int,string> m;
	m[1]="Gopal";
	m[2]="kRISHNA";
	m[1]="Shrivastava";
	m.insert({4,"Gaurav"});
	map<int, string> :: iterator itr=m.begin();
	for(;itr!=m.end();itr++){
		cout<<(*itr).first<<" "<<(*itr).second<<endl;
	}

	


	return 0;
}