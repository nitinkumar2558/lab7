
#include <iostream>
using namespace std;
//Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. 
 int func(int a,int b){
if ( a>b ) { return a; }
else  { return b;
}
}
//(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
void fun(int& a,int& b,int& c) { 
   if (a>b) c=a;
  else c=b;
}


/* The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.*/
int main() {
cout <<"enter two number" <<endl;
int p,q,max;
cin>>p>>q;
 
max=func(p,q);
cout<<"using call by value"<<endl;
cout <<"maximum is" <<max<<endl;
cout<<"using call by reference."<<endl;
cout <<"enter two number" <<endl;
cin>>p>>q;
fun(p,q,max);
cout <<"maximum(by refrence) is" <<max<<endl;
return 0;
}
