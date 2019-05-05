#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct student{

int house_no;
string street_name;

};

struct details{

int roll_no;
string name;
student addr;

};

int main(){

details john;

john.roll_no=34;
john.name="anil";

john.addr.house_no=239;
john.addr.street_name="ROYALA STREET";

cout<<john.roll_no<<endl;
cout<<john.name<<endl;
cout<<john.addr.street_name<<endl;
cout<<john.addr.house_no<<endl;

return 0;
}

