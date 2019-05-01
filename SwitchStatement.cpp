#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int input;
    cin>>input;

    switch(input){
        //the input should match with case value like here 1 or 2 or 3 .
        case 1: {
            cout<<"this is case one"<<endl;
            break;
        };
        case 2:
            cout<<"this is case two"<<endl;
            break;
        case 3:
            cout<<"this is case three"<<endl;
            break;

        default:
            cout<<"give the valid input"<<endl;

            }
    return 0;
}
