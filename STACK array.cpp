#include <iostream>
#define MAX 5
using namespace std;

int top, status;

void push(int stack[], int item)
{
if(top == (MAX - 1)){
status = 0;
}
else
{
status = 1;
++top;
stack[top] = item;
}
}

int pop(int stack[])
{
int ret;
if(top == -1)
{
ret = 0;
status = 0;
}
else
{
status = 1;
ret = stack[top];
--top;
}
return ret;
}

void display(int stack[])
{
int i;
cout<<"The stack is:";
if(top == -1){
cout<<"\nEmpty\n";
}
else
{
for(i=top; i>=0; --i)
{
cout<<"\n"<<stack[i];
}
}
}

int main()
{
int stack[MAX], item, ch;
top = -1;
do
{
cout<<"\nOptions: 1. Push in Stack\t2. Pop from Stack\t3. Exit";
do
{
cout<<"\nEnter your choice:--------->";
cin>>ch;
if(ch<1 || ch>3){
cout<<"\nInvalid choice\n";
}
}while(ch<1 || ch>3);
switch(ch)
{
case 1:
cout<<"\nEnter the element to be pushed: ";
cin>>item;
push(stack, item);
if(status)
{
cout<<"\nAfter pushing:\n";
display(stack);
if(top == (MAX - 1)){
cout<<"\nThe stack is full\n";
}
}
else{
cout<<"\nStack overflow on push\n";
}
break;
case 2:
item = pop(stack);
if(status)
{
cout<<"\nThe popped element is: "<<item<<"\n";
display(stack);
}
else{
cout<<"\nStack underflow on pop\n";
}
break;
default:
cout<<"\nEnd";
}
}while(ch != 3);
return 0;
}
