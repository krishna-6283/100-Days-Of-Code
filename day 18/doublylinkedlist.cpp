#include<iostream>
using namespace std;
class Listnode{
	public:
	int val;
	Listnode* next;
	Listnode* prev;

	Listnode(int x){
		val=x;
		next=NULL;
		prev=NULL;
	}
	Listnode(int x, Listnode* n, Listnode* p){
		val=x;
		next=n;
		prev=p;
	}
};
void insertATend(Listnode* &tail, int x){
	tail->next=new Listnode(x);
	// temp->next= new Listnode(x, NULL, temp);
	// OR
	tail->next->prev=tail;
	tail=tail->next;

}

void display(Listnode* head){
	Listnode* temp=head;
	while(temp){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void displayT(Listnode* tail){
	Listnode* temp=tail;
	while(temp){
		cout<<tail->val<<" ";
		tail=tail->prev;
	}
}

void insertAtHead(Listnode* &head, int data){
	Listnode* node = new Listnode(data);
	node->next=head;
	head->prev=node;
	head=node;
}

void InsertAtMid(Listnode* &head, int data, int pos){
	Listnode* temp=head;
	while(pos>1){
		temp=temp->next;
	}
	Listnode* forw=temp->next;
	Listnode* node=new Listnode(data);
	node->next=forw;
	temp->next=node;
	forw->prev=node;
	node->prev=temp;
}
int main(){

	Listnode* head=new Listnode(0);
	// head->next=new Listnode(1,NULL,head);
	Listnode* tail=head;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		insertATend(tail,x);

	}
	insertAtHead(head, 4);
	InsertAtMid(head,9,1);
	display(head);
	displayT(tail);


}
//reverse of doubly linked list doubt