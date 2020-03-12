#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int *arr, int len) {
	cout<<"Array : ";
	for (int i = 0; i < len; i++) {
		cout << left << setw(3) << arr[i];
	}
	cout << endl;
}

void acceptElement(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}
}

int getRank(int *arr,int len,int rankElement){
	int rank =0;
	for(int i=0;i<len;i++){
		if(arr[i]<=rankElement)
			rank++;
	}
	return rank;
}
int main() {
	int len,rankElement;
	cout<<"Enter Length of Array : ";
	cin>>len;
	int arr[len];
	cout << "Enter Array Elements : "<<endl;
	acceptElement(arr, len);
	displayArray(arr, len);
	cout<<"Enter Element Whose Rank Need to Find : ";
	cin>>rankElement;
	int rank = getRank(arr,len,rankElement);
	cout<<"Rank Of Element "<<rankElement<<" Is "<<rank;
}
