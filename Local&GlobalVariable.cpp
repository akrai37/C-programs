#include<iostream>
#include<cstdlib>
using namespace std;


void display();

int k=45;//global variable , can be used anywhere

int main(){

display();

//cout<<a<<b; error as a and b are local variables
cout<<k<<endl;;

return 0;
}

void display(){

int a=3,  b=6;

cout<<a<<endl<<b<<endl;

cout<<k<<endl;

}
