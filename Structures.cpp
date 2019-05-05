#include<iostream>
#include<cstdlib>
using namespace std;

struct student{

int roll;
char gender;

}john,ali; //john,ali are both global STRUCTURE variable and can be used anywhere in the program .

int main(){

student status;//status here is the local structure variable and can only be used in the main fn.

status.roll= 45;
status.gender='m';

john.roll=57;
john.gender='m';

cout<<status.roll<<endl;
cout<<john.gender<<endl;

return 0;
}
