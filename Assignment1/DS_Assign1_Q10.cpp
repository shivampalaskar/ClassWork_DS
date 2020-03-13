#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int getRowSum(int arr[][3],int row,int column){
	int sum = 0,sum1;
	bool flag = true;
	for(int i=0;i<row;i++){
		sum1=0;
		for(int j=0;j<column;j++){
			sum1+=arr[i][j];
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

int getColumnSum(int arr[][3],int row,int column){
	int sum = 0,sum1;
	bool flag = true;
	for(int i=0;i<row;i++){
		sum1=0;
		for(int j=0;j<column;j++){
			sum1+=arr[j][i];
		}
		if(i==0)
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

int getDigonalSum(int arr[][3],int row,int column){
	int sum1=0,sum2=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(i==j)
				sum1+=arr[i][j];
			if((i+j)==(row-1))
				sum2+=arr[i][j];
		}
	}
	cout<<sum1<<" "<<sum2<<endl;
	if(sum1 == sum2)
		return sum1;
	else
		return 0;
}

int main() {
	int arr[3][3] = { {8,1,6},
					  {3,5,7},
					  {4,9,2} };
	int row = 3,column=3;
	int rowSum = getRowSum(arr,row,column);
	int columnSum = getColumnSum(arr,row,column);
	int digonalSum = getDigonalSum(arr,row,column);
	cout<<rowSum<<" "<<columnSum<<" "<<digonalSum<<endl;
	if((rowSum == columnSum) && (rowSum == digonalSum))
			cout<<"Magic Square !"<<endl;
	else
		cout<<"Not Magic Square !"<<endl;
	return 0;
}
