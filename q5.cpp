//Write a program that includes the above three (2,3,4) functions. 
#include<iostream>
using namespace std;
//1 func for sum
int funcsum(int a,int b) {
	int sum;
     sum=a+b;
   return sum;
   }
//2 func for maximum
	int funcmax(int a,int b){
if ( a>b ) { return a; }
else  { return b;
}
}
//3 func for minimum
	int funcmin(int a,int b) { 
	if (a<b) {
		return a;
	}
	else {
		return b;
	}
}
	
//Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
	int main () {
 	cout<<"please enter two variabls"<<endl;
	int p,q, sum,max,min,choice;
	cin>>p>>q;
	cout<<"which operation does you want to perform"<<endl;
	cout<<"Enter 1 to find the sum of two numbers."<<endl;
	cout<<"Enter 2 to find the maximum of the two numbers."<<endl;
	cout<<"Enter 3 to find the minimum of the two numbers."<<endl;
 	cin>> choice;
 	if (choice==1) { sum=funcsum(p,q);
	cout<<"sum of two numbers is"<<sum<<endl; }
	else if (choice==2) { max= funcmax(p,q);
	cout<<"maximum among two numbers is"<<max<<endl; }
	else { min=funcmin(p,q);
	cout<<"minimum among two numbers is"<<min<<endl; }
	
	return 0;
}
