#include<iostream>
using namespace std;

int main (){
	float floatValue;
	cout<<"Enter a float number :";
	cin>>floatValue;
	
	int intValueTruncate = int(floatValue);
	int intValueRound = round(floatValue);
	int intValueCast = static cast<int>(floatValue);
	
	cout<<"Truncation :"<<intValueTruncate<<enl;
	cout<<"Routing :"<<intValueRound<<endl;
	cout<<"Type casing :"<<intValueCast<<endl;
	
	return 0;
}
