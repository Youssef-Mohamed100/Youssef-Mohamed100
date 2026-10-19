// This project is just for personal practice
// to learn and improve my C++ skills.
// It is not intended for real-world use.

#include <iostream>
using namespace std;

int main(){

    int month ,day ,year, age ;
    cout << "Enter your birthday date : \n" ;
    cout << "Enter day : " ;
    cin >> day;
    cout << "Enter month from 1 to 12 : " ;
    cin >> month;
    cout << "Enter year : " ;
    cin >> year;
      
    day = 30 - day;
    month = 12 - month;
    year = 2026 - year; 
    cout << "You have: " << day << " days ,"<< month << " months ," << year << " years.\n";
    
    int age_in_days = year * 356;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    
    cout << "You Live: " << age_in_days << " days ,"<< age_in_hours << " hours ," << age_in_minutes << " minutes.";
    
    return 0;
}
