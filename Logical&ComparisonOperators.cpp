#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

int date;

cin>>date;

if(date>=1 && date<=31){
    cout<<"date is ok."<<endl;
    if(date==6 || date==25){
        cout<<"special"<<endl;
    }
}
else{
    cout<<"out of range"<<endl;
  }

bool human=true;

if(!human)
{
    cout<<"not human"<<endl;
}
else{
    cout<<"human"<<endl;
}
return 0;
}
