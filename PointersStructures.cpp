#include<iostream>
#include<cstdlib>
using namespace std;

struct student{

int roll;
char gender;
};

int main(){

    student status;
    student *statusptr;

    statusptr=&status;

    status.roll=25;
    statusptr->gender='m';

    cout<< status.roll<<endl;
    cout<< statusptr->gender<<endl;
    cout<< status.gender<<endl;

    return 0;

}

