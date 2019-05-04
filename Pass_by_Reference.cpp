#include<iostream>
#include<cstdlib>
using namespace std;


void display(int *ptr);

int main(){

int a=24;
display(&a); // address of a . Remember always store address of value in the pointer

cout<<a;

return 0;
}

void display(int *ptr){

cout<<*ptr<<endl;
cout<<ptr<<endl;

*ptr=100;

}
