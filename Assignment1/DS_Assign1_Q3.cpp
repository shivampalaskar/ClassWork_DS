#include <iostream>
#include <iomanip>
using namespace std;

void shiftAndAddNewArrayElement(int *arr, int len, int from, int newValue) {
	len--;
	for (int i = len - 1; i >= from; i--)
		arr[i + 1] = arr[i];
	arr[from] = newValue;
}

void displayArray(int *arr, int len) {
	cout<<"Array : ";
	for (int i = 0; i < len; i++) {
		cout << left << setw(3) << arr[i];
	}
	cout << endl;
}

int checkForIndex(int *arr, int len, int newValue) {
	static int index = 0;
	//cout<<"Index : "<<index<<endl;
	int insertIndex;
	if (index == 0)
		return index++;
	else {
		for (int i = 0; i < index; i++) {
			if (newValue > arr[i]){
				insertIndex = i + 1;
			}else{
				insertIndex = i;
				break;
			}
		}
	}
	index++;
	return insertIndex;
}
void acceptElement(int *arr, int len) {
	for(int i=0;i<len;i++){
	int newValue;
	cout<<"arr["<<i<<"] : ";
	cin >> newValue;
	int insertIndex = checkForIndex(arr, len, newValue);
	//cout<<"Insert Index : "<<insertIndex<<endl;
		shiftAndAddNewArrayElement(arr, len, insertIndex, newValue);
	}
}

int main() {
	int len;
	cout<<"Enter Length of Array : ";
	cin>>len;
	int arr[len];
	cout << "Enter Array Elements : "<<endl;
	acceptElement(arr, len);
	displayArray(arr, len);
}
