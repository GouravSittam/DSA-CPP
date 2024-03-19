#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void inst_beg(int item)
{
	struct node*p=new struct node;
	if(p==NULL)
	{
		cout<<"Overlap";
		return;
	}
	p->data=item;
	p->next=head;
	head=p;
	cout<<"Node inserted";
}
struct node*copy_list()
{
	struct node*start;
	if(head==NULL)
	{
		start=NULL;
		return start;
	}
	struct node*p=new struct node;
	p->data=head->data;
	start=p;
	struct node*ptr,*prev;
	ptr=p;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		struct node*newnode=new struct node;
		newnode->data=ptr->data;
		prev->next=newnode;
		prev=prev->next;
	}
	prev->next=NULL;
	return start;
}
void display(struct node*h)
{
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}
int main(){
	int item,choice;
	do{
		cout<<"Enter item: "<<endl;
		cin>>item;
		inst_beg(item);
		cout<<"\nEnter 0 to add more: ";
		cin>>choice;
		if (choice!=0)
		{
			break;
		}
	}while(choice==0);
	cout<<"\nList 1: ";
	display(head);
	struct node*start=copy_list();
	cout<<"\nlist 2: ";
	display(start);
	return 0;
}














