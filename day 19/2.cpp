#include<iostream>
using namespace std;



class ListNode{
public:
	int val;
	ListNode* next;
	ListNode(int x){
		val=x;
		next=NULL;
	}
};
class Stack{
	ListNode* top;
	int capacity;
	int cursize;
	public:

	Stack(int cap){
		top=NULL;
		capacity=cap;
		cursize=0;

	}
	void push(int x){
		if(cursize==capacity){
			cout<<"Stack overflow"<<endl;
			return;
		}
		if(cursize==0){
			top=new ListNode(x);
			cursize++;
			return;
		}
		ListNode* node= new ListNode(x);
		node->next=top;
		top=node;
		cursize++;
	}
	void pop()
	{
		if (cursize == 0)
		{
			cout << "Stack underflow" << endl;
			return;
		}
		ListNode* temp=top;
		top=top->next;
		delete temp;
		cursize--;
	}

	int peak()
	{
		if (cursize == 0)
		{
			cout << "There is no element in the stack"<<endl;
			return -1;
		}
		return top->val;
	}

	bool isEmpty()
	{
		return cursize;
	}

	int size()
	{
		return cursize;
	}
};

void display(Stack s){
	while(!s.isEmpty()){
		cout<<s.peak()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	Stack s(5);
	s.pop();
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.pop();
	s.push(6);
	display(s);
}
