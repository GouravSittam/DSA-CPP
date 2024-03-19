#include <iostream>
using namespace std;

void swap(int& a, int& b) {
int temp = a;
a = b;
b = temp;
}

int partition(int arr[], int low, int high) {
int pivot = arr[low];
int left = low + 1;
int right = high;
while (true) {
while (left <= right && arr[left] <= pivot) {
left++;
}
while (arr[right] > pivot) {
right--;
}
if (left > right) {
break;
}
swap(arr[left], arr[right]);
}
swap(arr[low], arr[right]);
return right;
}

void quickSort(int arr[], int low, int high) {
if (low < high) {
int pivotIndex = partition(arr, low, high);
quickSort(arr, low, pivotIndex - 1);
quickSort(arr, pivotIndex + 1, high);
}
}

void printArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
cout<<arr[i]<<" ";
}
cout<<endl;
}

int main() {
int n;
cout<<"Enter no. of elements: ";
cin>>n;
int arr[n];
for(int i=0; i<n;i++){
cout<<"Enter arr["<<i<<"]: ";
cin>>arr[i];
}
cout<<"\nOriginal array: ";
printArray(arr, n)
quickSort(arr, 0, n - 1);
cout<<"\nSorted array: ";
printArray(arr, n);
return 0; 
}
