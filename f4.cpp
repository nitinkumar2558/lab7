
#include <iostream>
using namespace std;

/*(By Value) Write a program with a function that takes two int parameters, finds the minimum, then returns the minimum.*/

int func (int a,int b) { 
	if (a<b) {
		return a;
	}
	else {
		return b;
	}
}

//(By Reference) Goal is the same as above, but this time, the function that finds the minimum should be void, and takes a third, pass by reference parameter; then puts the minimum in that.
	void fun(int& a,int& b,int& c) {
	if (a<b) c=a;
	else c=b;  }



//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.*/
int main () {
	int p,q,min;
	cout<<"using call by value"<<endl;
	cout <<"please enter two number to cheak which is minimum"<<endl;
	cin>>p>>q;
	min=func(p,q);
	cout<<min<<"is minimum"<<endl;
	cout<<"using call by refrence"<<endl;
	cout <<"please enter two number to cheak which is minimum"<<endl;
	cin>>p>>q;
	fun(p,q,min);
	cout<<min<<"is minimum"<<endl;
	return 0;


}
