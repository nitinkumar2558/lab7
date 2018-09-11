/*  Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/


#include <iostream>
using namespace std;
//a program with a function that takes two int parameters,adds them returns the sum.
   int func(int a,int b){
   int sum;
     sum=a+b;
   return sum;
   }

/*
(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

*/

void fun(int& a,int& b,int& c ){
   
   
 c=a+b;
}
 
//The program should ask the user for two numbers,call the function with the numbers as arguments,tell the user the sum

int main (){
cout<<"Using call by value."<<endl;
cout<<"enter two numbers"<<endl;
int p,q,total;
cin>>p>>q;
total=func(p,q);
cout<<"total is"<<total<<endl;
cout<<"Using call by reference."<<endl;
cout<<"enter two numbers"<<endl;
total=0;
cin>>p>>q;
fun(p,q,total);
cout<<total<<"is the sum"<<endl;

return 0;
}

