#include<iostream>
#include<cstdlib>
using namespace std;


struct student{

int roll; // member
char gender;//member
int age;//member

};

void display(student s);
void show(student *s);

int main(){

student dab= {2414,'m',22}; //one more way to declare the values of STRCTURE member


 display(dab);

 show(&dab);


 display(dab);

 show(&dab);

}

void display(student s){

cout<<s.roll<<endl;
cout<<s.gender<<endl;
cout<<s.age<<endl;

s.age=32;

}


void show(student *s){

cout<<s->roll<<endl;
cout<<s->gender<<endl;
cout<<s->age<<endl;

s->age=54;

}



