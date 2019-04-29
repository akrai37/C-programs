#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char input;
    int counter=0;
    do{
        cout<<"you are working "<<endl;
        cout<<"if you press x loop will be terminated otherwise continued"<<endl;
        cin>>input;
        counter++;
        //if counter was necessary , it could have been used here
    }
    while(input!='x' && counter <=30);

    return 0;

}

