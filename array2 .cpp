#include <iostream>
using namespace std;
int main(){
     /*สูตรหาจำนวนสมาขิก array 
       sizeof(ชนิดตัวแปร)/sizeof(ชนิดข้อมูล);
       สมมุติ int = 4 byte
       int score[]={10,20,30} = 4*3 byte = 12 byte
       sizeof(score)/sizeof[int]; : 12/4 = 3 byte 
     */
     int number[4];
     int sum = 0;
     //หาจำนวน array
     int count = sizeof(number)/sizeof(int);
     for(int i=0; i<count; i++){
      cout << "Input your number (" << i+1 <<")" << "=";
      cin >> number[i];
      //sum+=number sum = sum + number
      sum+=number[i];
     }
        cout << "Total = " << sum << endl;
        cout << "Average = " << sum/count << endl;

        return 0;
}