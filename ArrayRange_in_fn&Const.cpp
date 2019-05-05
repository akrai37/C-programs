#include<iostream>
#include<cstdlib>
using namespace std;

void display(const int *start, const int *last);

int main(){

int a[5]={25,73,89,23,65}; // 5 is excluded in the list like in python range. so total we can have 5 values only , from 0 to 4

cout<<a[0]<<endl;

display(a,a+3);//a is at zeroth index and and other indexes are getting added . Dont confuse with index ,
//a is representing zeroth index

return 0;
}
void display(const int *start, const int *last)//using pointer because we are dealing with array
{
    const int *ptr;

    for(ptr=start; ptr!=last; ptr++)
    {
      cout<<*ptr<<endl;
    };
}

