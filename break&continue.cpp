#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
//break statement
    int i,j;

    cout<<"break and continue"<<endl;

    for(i=1;i<=10;i++){

        for(j=1;j<=3;j++)
        {
            cout<<j<<endl;
            if(j==2)
                break;
        }
     }
    //continue statement
    int k=1;
    while(k<=10){

      if(k==6){
        k++;   //slick move
        continue;
      } ;
      cout<< k ;
      k++;

    }
return 0;
}



