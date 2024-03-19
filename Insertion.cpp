#include<iostream>
using namespace std;
int main(){
	int LA[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>LA[i];
	}
	cout<<"Enter location where you want to insert new element=";
	int k;
	cin>>k;
	int item;
	cout<<"Enter value you want to insert=";
	cin>>item;
	for(int j=n-1;j>=k;j--)
	{
		LA[j+1]=LA[j];
	}
	LA[k]=item;
	n=n+1;
	for(int i=0;i<n;i++)
	cout<<LA[i]<<",";
	
	return 0;
}
