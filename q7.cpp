//UpperCase and LowerCase
#include<iostream>
using namespace std;

//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
char toLower(char a ) { char i=(char)((int)a+32);
return i;
}



//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.

char toUpper(char a ) { char i=(char)((int)a-32);
return i;
}




//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
int main(){
char p,q;
cout<<"enter any character"<<endl;
cin>>p;
if ((int)p>=65&& (int)p<=91)
q=toLower(p);
else if ((int)p>=97&&(int)p<=122)
q=toUpper(p);
cout<<p<<" after convertion is "<<q<<endl;
return 0;
}
