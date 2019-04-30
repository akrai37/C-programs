#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    //the below syntax is also ok
  int marks[2][6] {
                    {
                        23,43,44,32,46,54
                    },
                    {
                      43,56,34,18,30,14
                    }

                    };
  cout<<marks[0][3]<<endl;

   return 0;

}

