#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

void deleteCharFromString(char *str,int i){
	while(str[i]!='\0'){
		str[i] = str[i+1];
		i++;
	}
}
int getCorrectedString(char *str,char ch){
	int i=0,holes=0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			deleteCharFromString(str,i);
			holes++;
		}
		i++;
	}
	return holes;
}
int main() {
	char str[30];
	char ch;
	cout<<"Enter a String : ";
	scanf("%[^\n]s",str);
	cout<<"Enter a Character : ";
	cin>>ch;
	int holes = getCorrectedString(str,ch);
	cout<<"Corrected String : "<<str<<endl;
	cout<<"Holes : "<<holes<<endl;
}
