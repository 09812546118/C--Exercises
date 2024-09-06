#include <iostream>
#include <string>

using namespace std;

const double X = 13.45; const int  Y=18;
const char STAR = '*';

int main()
{
    string employeeID;
    string department;
    
    int num;
    
    double salary;
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << endl;
    
    cout << "Enter department: ";
    cin >> department;
    cout << endl;
    
    cout << "Enter a positive integer less than 80: ";
    cin >> num;
    cout << endl;
    
    salary= num * X;
    
    cout << "ID: " << employeeID << endl;
    cout << "Department " << department << endl;
    cout << "Star: " << STAR << endl;
    cout << "Wages: $" << salary << endl;
    cout << "X = " << X << endl; cout << "X+Y = " << X+Y << endl;
    
    return 0;
}
