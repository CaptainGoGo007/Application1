#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"What is student 1 name: ";
    cin>> name;

    int id;
    cout<<"His id: ";
    cin>>id;

    int grade;
    cout<<"His math exam grade: ";
    cin>>grade;

    string _name;
    cout<<"What is student 2 name: ";
    cin>> _name;

    int _id;
    cout<<"His id: ";
    cin>>_id;

    int _grade;
    cout<<"His math exam grade: ";
    cin>>_grade;


    cout<<"Students grade in math\n"
        <<name<<"(with id "<<id<<") "<<"got grade: "<<grade<<"\n"
        <<_name<<"(with id "<<_id<<") "<<"got grade: "<<_grade<<"\n";


    cout<<"average grade is "<< (grade + _grade)/2<<".\n";    

    return 0;
}