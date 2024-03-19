#include<iostream>
#include<cstdlib>
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
void del_loc(int loc)
{
	struct node*ptr,*prev;
	if(head==NULL)
	{
		cout<<"Underflow";
		return;
	}
	ptr=head;
	prev=NULL;
	if(loc==0)
	{
		head=head->next;
	}
	else
	{
		for(int i=1;i<=loc;i++)
		{
			prev=ptr;
			ptr=ptr->next;
			if(ptr==NULL)
			{
				cout<<"\nNode not found";
			}
		}
		prev->next=ptr->next;
	}
	free(ptr);
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
	int item,choice,loc;
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
	cout<<"\nList is: ";
	display(head);
	cout<<"\nEnter location of item you want to delete: ";
	cin>>loc;
	del_loc(loc);
	cout<<"\nlist is: ";
	display(head);

	return 0;
}
