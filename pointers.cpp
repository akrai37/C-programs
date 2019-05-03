#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int age;
    char name;

    cout<<"enter the name and age"<<endl;
    cin>>age;
    cin>>name;

    int *ageptr;
    char *nameptr;

    ageptr= &age;//& refers that address of the variable is stored , not the value in the variable
    nameptr=&name;

    cout<<age<<endl<<ageptr<<endl;
    cout<<name<<endl<<nameptr<<endl;

    cout<<age<<endl<<*ageptr<<endl;//if we refer the "*" for the pointer , it means that it is
    cout<<name<<endl<<*nameptr<<endl;// referring to the value store in the memory location whose address is referred by pointer

    return 0;
}
