#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

void encryptString(char *str){
	int i=0,count=0;
	while(str[i]!='\0'){
			str[i]=str[i]+'*'+count;
			count++;
			i++;
		}
}

void decryptString(char *str) {
	int i = 0, count = 0;
	while (str[i] != '\0') {
		str[i]=str[i]-'*'-count;
		count++;
		i++;
	}
}

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	char str[30];
	cout<<"Enter a String : ";
	scanf("%[^\n]s",str);
	encryptString(str);
	cout<<"Encrypted String : "<<str<<endl;
	decryptString(str);
	cout<<"Decrypted String : "<<str<<endl;
}
