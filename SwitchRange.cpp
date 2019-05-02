#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char a;
    cout<<"enter the input :"<<endl;
    cin>>a;
    switch(a){

    case 'a' ...'z':
        cout<<"lower case letters"<<endl;
        break;

    case 'A' ...'Z':
        cout<<"Upper case letters"<<endl;
        break;

    default:
        cout<<"enter the valid letter"<<endl;

    };
    cout<<"switch is over "<<endl;
    return 0;
}
