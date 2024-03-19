#include<iostream>//deletion of array
using namespace std;
int main(){
	int n,i,item,k,j;
	cout<<"Enter the number of element: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the Element: ";
	for(i=0; i<n ;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter new location where you want to insert: ";
	cin>>k;
	cout<<"\nEnter new Element: ";
	cin>>item;
	for(j=n-1; j>=k; j--){
		arr[j+1]=arr[j];
	}
	arr[k]=item;
	n=n+1;
	
	for(i=0;i<n;i++){
		cout<<"\n"<<arr[i];
	}
	return 0;
}
