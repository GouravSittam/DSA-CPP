#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;
void inst_beg(int item)
{
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overflow";
		return;
	}
	p->data=item;
	p->next=head;
	head=p;
	cout<<"Node inserted";
}
void inst_loc(int item,int loc)
{
	struct node *p=new struct node;
	struct node *temp;
	p->data=item;
	temp=head;
	for(int i=1; i<loc; i++)
	{
		temp=temp->next;
		if(temp==NULL){
			cout<<"Can't insert";
			return;
		}
	}
	p->next=temp->next;
	temp->next=p;
	cout<<"Node inserted";
}
void display(struct node *h)
{
	cout<<"\nlist is: ";
	while(h!=NULL){
		cout<<h->data<<"->";
		h=h->next;
	}
}


int main(){
	int item,choice,loc;
	do{
		cout<<"\nEnter item: ";
		cin>>item;
		cout<<"\nEnter loc: ";
		cin>>loc;
		
		if(loc==0){
			inst_beg(item);
		}
		else{
			inst_loc(item,loc);
		}
		display(head);
		cout<<"\nEnter 0 to add more: ";
		cin>>choice;
		if(choice!=0){
			break;
		}
	}
	while(choice==0);
	return 0;
	
}
