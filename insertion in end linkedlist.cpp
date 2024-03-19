#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
void display(struct node *h);
struct node *head;
void at_end(int item){
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overflow";
		return;
	}
	else{
	p->data=item;
	if(head==NULL){
		p->next=NULL;
		head=p;
	cout<<"Node Inserted";
}

else{
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	p->next=NULL;
	temp->next=p;
	cout<<"Node Inserted";
}
}
}

int main()
{
	int item, ch;
	do
	{
		cout<<"\nEnter item: ";
		cin>>item;
		at_end(item);
		cout<<"\n Enter 0 to add more: ";
		cin>>ch;
		if(ch!=0)
		{
			break;
		}
		}
		while(ch==0);
		display(head);
		return 0;
	}

void display(struct node *h)
{
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}
