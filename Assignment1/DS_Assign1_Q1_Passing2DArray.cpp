#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int getRowSum(int *arr,int row,int column){
	int sum = 0,sum1;
	bool flag = true;
	for(int i=0;i<row;i++){
		sum1=0;
		for(int j=0;j<column;j++){
			int pos = (i*column)+j;
			sum1+=(*(arr+pos));
		}
		if(i==0)
			sum = sum1;
		else if(sum1 != sum){
			flag = false;
			break;
		}
	}
	if(flag)
		return sum;
	else
		return 0;
}

int getColumnSum(int *arr,int row,int column){
	int sum = 0,sum1;
	bool flag = true;
	for(int i=0;i<row;i++){
		sum1 = 0;
		for (int j = 0; j < column; j++) {
			int pos = (i * column) + j;
			sum1 += (*(arr + pos));
		}
		if (i == 0)
			sum = sum1;
		else if(sum1 != sum){
			flag = false;
			break;
		}
	}
	if (flag)
		return sum;
	else
		return 0;
}

int getDigonalSum(int *arr,int row,int column){
	int sum1=0,sum2=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			int pos = (i * column) + j;
			if(i==j)
				sum1+=(*(arr+pos));
			if((i+j)==(row-1))
				sum2+=(*(arr+pos));
		}
	}
	if(sum1 == sum2)
		return sum1;
	else
		return 0;
}

void test(int *arr){
	int column = 3;
	int pos = (2*column)+0;
	cout<<*(arr+pos)<<endl;
}
int main() {
	/*int arr[3][3] = { {8,1,6},
					  {3,5,7},
					  {4,9,2}
					};*/
	int arr[5][5] = { {11,24,7,20,3},
					  {4,12,25,8,16},
					  {17,5,13,21,9},
					  {10,18,1,14,22},
					  {23,6,19,2,15}
					};
	int row = 5,column=5;


	int rowSum = getRowSum(((int*)arr),row,column);
	int columnSum = getColumnSum(((int*)arr),row,column);
	int digonalSum = getDigonalSum(((int*)arr),row,column);
	cout<<rowSum<<" "<<columnSum<<" "<<digonalSum<<endl;
	if((rowSum == columnSum) && (rowSum == digonalSum))
			cout<<"Magic Square !"<<endl;
	else
		cout<<"Not Magic Square !"<<endl;
	return 0;
}
