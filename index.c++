#include <iostream>
using namespace std;

int main(){
     int score;
     string status,name;
     char grade;

    //input
    cout << "Student is = ";
    cin >> name;
    cout << "Score = ";
    cin >> score;
    //ternary operator
    status = (score >= 80) ? grade = 'A' :
        (score >= 70) ? grade = 'B' :
        (score >= 60) ? grade = 'C' :
        (score >= 50) ? grade = 'D' :
        grade = 'F';
        cout << "Grade = " << status;
       
    return 0;
}
