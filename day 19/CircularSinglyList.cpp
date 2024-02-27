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

ListNode* InsertAtEnd(ListNode* &head, int x){
	if(head==NULL){
		head=new ListNode(x);
		head->next=head;
		return head;
	}
	ListNode* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	ListNode* node=new ListNode(x);
	temp->next=node;
	node->next=head;
	return head;

}

void InsertatHead(ListNode* &head, int x){
	ListNode* node=new ListNode(x);
	ListNode* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	node-> next=head;
	temp->next=node;
	head=node;
}
void display(ListNode* head){
	ListNode* temp=head;
	while(temp->next!=head){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<temp->val<<" "<<temp->next->val<<endl;
}

void deleteNode(ListNode* &head, int idx){
	ListNode* temp=head;
	if(idx==0){
		while(temp->next!=head){
			temp=temp->next;
		}
		head=head->next;
		temp->next=head;
	}
	while(idx>1){
		temp=temp->next;
		idx--;
	}
	temp->next=temp->next->next;

}
int main(){
	ListNode* head=NULL;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		InsertAtEnd(head, x);
	}
	InsertatHead(head, 6);
	deleteNode(head,2);
	display(head);
}