//Name: Kim Carlo Larino
//Activity: OE-7

#include<iostream>
#include<string>
#include<windows.h>
#include<cstring>

using namespace std;

int main(){
    char username[15]; 
    char password[12]; 
    string cname;
    long long int id;
    double hours,minutes,rate,aminutes,ctime,gpay,tax,npay,taxrate;
    const double converter = 60,vat1 = 0.05,vat2 = 0.1,vat3 = 0.12;

    system("cls");
    system("Color 01");
 
    cout << endl;
    cout << "<<Login Page>>" <<endl;
    cout << endl;
    cout << "Enter Username: "; 
    cin >> username;
 
    cout << "Enter Password: "; 
    cin >> password;
 
    if(strcmp(username,"Kim")==0)
    { 
        if(strcmp(password,"123")==0)
    {
    system("cls");
    cout << endl;
    cout << "======================================" << endl;
    cout << "Hello " <<username <<"!" << endl;
    cout << "Enter Your Full Name : ";
    cin.ignore();
    getline(cin,cname);
    cout << "Enter Your ID Number : ";
    cin >> id;
    cout << "Enter Rate Per Hour  : P";
    cin >> rate;
    cout << "Enter Clocked In Hours For This Passed Month : ";
    cin >> hours;
    cout << "Enter Extra Minutes For This Passed Month    : ";
    cin >> minutes;
    system("cls");
    cout <<endl;


    aminutes = minutes / converter;
    ctime = hours + aminutes;

    gpay = rate * ctime;

    if(gpay <= 20000){
        taxrate = 5;
        tax = gpay * vat1;
        npay = gpay - tax;
    }
    else if (gpay <= 40000){
        taxrate = 10;
        tax = gpay * vat2;
        npay = gpay - tax;
    }
    else if (gpay >= 40001){
        taxrate = 12;
        tax = gpay * vat3;
        npay = gpay - tax;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);    

    cout <<endl;
    cout <<endl;
    cout << "--------------------------------------" << endl;
    cout << "----------------SALARY----------------" << endl;
    cout << "--------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;

    cout <<"Name of Employee : " <<cname << endl;
    cout <<"ID Number        : " <<id << endl;
    cout <<endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout <<"Gross Salary : P" <<gpay << endl;
    cout <<"TAX Rate     : " <<taxrate <<"%" << endl;
    cout <<"TAX Amount   : P" <<tax <<endl;
    cout <<"Net Pay      : P" <<npay << endl;
    }
    else
    {
    cout << endl;
    cout << ("Password Incorrect") <<endl;
    cout << endl;
    } 
    }
    else
    {
    cout << endl;
    cout << ("User Not Found") <<endl;
    cout << endl;
    } 
 
    return 0; 
}