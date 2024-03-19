#include<iostream>
using namespace std;

int binarysearch(int a[], int n, int item){
		int loc=-1;
		int beg=0,End=n-1,mid;
		while(beg<=End){
			mid=(beg + End)/2;
			if(item==a[mid]){
				loc=mid;
				return loc;
			}
			if(item>a[mid]){
				beg=mid+1;
			}
			else{
				End=mid-1;			}
		}
		return loc;
	}
int main(){
	int n,item,loc=-1;
	cout<<"Enter the number Elements: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Enter a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"Enter the item you want to search: ";
	cin>>item;
	loc=binarysearch(a,n,item);
	if(loc==-1){
		cout<<"Not found!";
	}
	else{
		cout<<"Item Found at : "<<loc;
	}
	
	return 0;
}

//Enter the number Elements: 5
//Enter a[0]: 10
//Enter a[1]: 22
//Enter a[2]: 22
//Enter a[3]: 33
//Enter a[4]: 55
//Enter the item you want to search: 55
//Item Found at : 4
