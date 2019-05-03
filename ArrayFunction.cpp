#include<iostream>
#include<cstdlib>
using namespace std;

void show(int [], int);

int main(){

    int numbers[]={12,43,42,64,94,48,65,19};
    int length=5;

    show(numbers,length);

    return 0;
};

void show(int numbers[], int length)
{
    int i;

    for(i=0; i<=length ; i++)
    {
        cout<< i << endl;
    };

}

