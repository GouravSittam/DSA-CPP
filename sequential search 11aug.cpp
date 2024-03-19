#include<iostream>
using namespace std;
int main(){
	int la[10];
	int n,i;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>la[i];
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<la[i]<<",";
	cout<<"Enter element you want to search";
	int item;
	cin>>item;
	for(i=0;i<n;i++)
	{
		if(la[i]==item)
		break;
	}
	if (la[i]==item)
	cout<<item<<"Found at index="<<i;
	else
	cout<<item<<"Not found";

	return 0;
}
