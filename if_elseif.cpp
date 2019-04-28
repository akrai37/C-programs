#include<iostream>
#include<cstdlib>

using namespace std;

int main()

{
int age;
cin >> age;

if(age<=18){
    cout<<"teen"<<endl;
}
else if(age<=40){
    cout<<"middle age"<<endl;
}
else{
    cout<<"old"<<endl;
}

return 0;
}
