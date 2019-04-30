#include<iostream>
#include<cstdlib>

using namespace std;

int display(float , float);

int main()
{
    float result;
    result=display(27.4, 6.3);
    cout<<"result is : "<<result<<endl;
    return 0;

}
int display(float a, float b){

int plus;
cout<<"Anything"<<endl;
cout<<a<<endl;
cout<<b<<endl;
plus=a+b;

return plus;

}


