#include <iostream>
using namespace std;

int main(){
     int service;
      cout<<"In put your number service(1,2) : ";
      cin >> service;
    

      switch(service){
        case 1:
        cout<<"Create New Bank Account";
        break;
        case 2:
        cout<<"Withdraw and deposit";
        break;
        default :
        cout<<"Invalid choice";
      }
      


    return 0;
}
