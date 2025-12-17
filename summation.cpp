#include <iostream>
using namespace std;
int main(){
    int number ;
    int sum=0;
    for(int count=1;count<=5;count++){
        cout<<"Input your number "<<count<<" = ";
        cin>>number;
        sum+=number;
        cout<<"Sum = "<<sum<<endl;
         
    }

    return 0;
}