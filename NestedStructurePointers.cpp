#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct address{

int house_no;
string street;

};

struct student{

int rollno;
string name;
address *addr;
};

int main(){

student rohan;
student *rohanptr;

rohanptr=&rohan;

address adr={78,"hvb  j"};
rohanptr->addr=&adr;

rohanptr->rollno=45;
rohanptr->name="rohan";

//rohanptr->addr.house_no=681;
//rohanptr->addr.street="mg nagar";
//above values are used when the addr is NORMAL VARIABLE , not pointer

cout<<rohanptr->rollno<<endl;
cout<<rohanptr->name<<endl;

cout<<rohanptr->addr->house_no<<endl;
cout<<rohanptr->addr->street<<endl;
//we can also just use "rohan" instead of its pointer "rohanptr" .
//we wont we required to store the address of rohan and use of arrow operator. ex-rohan.addr->house_no;

return 0;
}
