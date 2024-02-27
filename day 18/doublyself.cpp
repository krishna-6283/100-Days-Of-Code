#include<iostream>
using namespace std;

class ListNode{
	public:
	int val;
	ListNode* next;
	ListNode* prev;

	ListNode(int x){
		val=x;
		next=NULL;
		prev=NULL;
	}
	ListNode(int x, ListNode* n, ListNode* p){
		val=x;
		next=n;
		prev=p;
	}
};


void display(ListNode* head){
	ListNode* temp=head;
	while(temp){
		cout<<temp->val<<" ";
		temp=temp->next;
	}

}

ListNode* InsertAtFront(ListNode* head, int value){
	ListNode* temp=head;
	ListNode* ans=new ListNode(value);
	ans->next=temp;
	ans->next->prev=ans;
	return ans;
}

ListNode* InsertAtLast(ListNode* head, int value){
	ListNode* temp=head;
	ListNode* ans=new ListNode(value);
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=ans;
	temp->next->prev=temp;
	return head;
}


int main(){

	ListNode* head=new ListNode(1);
	head->next=new ListNode(2);
	head->next->next=new ListNode(3);
	head = InsertAtFront(head, 0);
	head = InsertAtLast(head,4);
	display(head);


}