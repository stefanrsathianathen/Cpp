#include <iostream>
#include <string>
#include <cmath>

using namespace std;


void add(double a, double b);
void subtract(double a, double b);
void divide(double a, double b);
void multiply(double a, double b);
void exponent(double a, double b);
double read(int num);

int main(int argc, char const *argv[])
{
	string response;
	double a,b;
	cout<<"What do you want to do? (Add,Subtract,Divide,Multiply,Exponent,Square root): ";
	getline(cin,response);
	//cout<<response;
	if (response == "Add" || response == "add"){
		a = read(1);
		b = read(2);
		add(a,b);
	}
	else if(response == "Subtract" || response =="subtract"){
		a = read(1);
		b = read(2);
		subtract(a,b);
	}
	else if(response=="Divide" || response=="divide"){
		a = read(1);
		b = read(2);
		divide(a,b);
	}
	else if(response=="Multiply" || response=="multiply"){
		a = read(1);
		b = read(2);
		multiply(a,b);
	}
	else if(response=="Exponent" || response=="exponent"){
		a = read(1);
		b = read(2);
		exponent(a,b);
	}
	else if(response=="Square root" || response=="square root"){
		cout<<"Enter the number to find the square root: ";
		cin>>a;
		b = 0.5;
		exponent(a,b);
	}
	else{
		cout<<"I don't follow; I'm very stupid";
	}
	return 0;
}

double read(int num){
	double x;
	cout<<"Enter the "<<num<<" number: ";
	cin>>x;
	return x;
}

void add(double a, double b){
	cout<<a+b;
}
void subtract(double a, double b){
	cout<<a-b;
}
void divide(double a, double b){
	if(b==0){
		cout<<"Division by Zero Error";
	}
	else{
		cout<<a/b;
	}
}
void multiply(double a, double b){
	cout<<a*b;
}
void exponent(double a, double b){
	cout<<pow(a,b);
}