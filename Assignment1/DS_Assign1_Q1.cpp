#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 };
	int len = 11;
	int flag;
	for (int i = 0; i < len - 1; i++) {
		flag = 1;
		for (int j = 0 ; j < len; j++) {
			if ((arr[i] == arr[j]) && (i != j)){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			cout<<arr[i]<<" ";
			break;
		}
	}
	if(flag !=1)
		cout<<"All Are Repetitive Element"<<endl;
}
