
#include<iostream>
using namespace std;

//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
int funcevan(int a,int b) {int i,sum;
if (a%2==0) i=a;
else i=a+1;
for (;i<=b;i+=2)
sum=sum+i;
return sum;
}

//Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
int funcodd(int a,int b) {int i,sum;
if (a%2!=0) i=a;
else i=a+1;
for (;i<=b;i+=2)
sum=sum+i;
return sum;
}

//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value.
int funcoddsqure(int a,int b) {int i,sum;
if (a%2!=0) i=a;
else i=a+1;
while (i<=b){
sum=sum+i;
i+=2;
}
return sum;
}

 
//Write a function that outputs the sum of the square of the evan numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.

int funcevansqure(int a,int b) {int i,sum;
if (a%2==0) i=a;
else i=a+1;
while (i<=b){
sum=sum+i*i;
i+=2;
}
return sum;
}
 
//Write a main program.
int main() { 

//Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value
int sumEvan,p,q;
cout<<"please enter two numbers"<<endl;
cin>>p>>q;
sumEvan=funcevan(p,q);

//Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
int sumOdd=funcodd(p,q);

//Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
int sumEvansqure=funcevansqure(p,q);


//Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
int sumOddSquare=funcoddsqure(p,q);

//Then display the values
cout<<"sum of evan numbers between" <<p<<"&"<<q<<"is"<<sumEvan<<endl;
cout<<"sum of odd numbers between" <<p<<"&"<<q<<"is"<<sumOdd<<endl;
cout<<"sum of squre of evan numbers between" <<p<<"&"<<q<<"is"<<sumEvansqure<<endl;
cout<<"sum of squre of odd numbers between" <<p<<"&"<<q<<"is"<<sumOddSquare<<endl;
return 0;
}
