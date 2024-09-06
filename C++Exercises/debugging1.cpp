#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
    double radius;
    cout << "Enter the Radius: ";
    cin >> radius;
    cout << endl;
    
    double area;
    cout << "Enter Area: ";
    cin >> area;
    cout << endl;
    
    double circumference;
    cout << "Enter a circumference: ";
    cin >> circumference;
    cout << endl;
    
    cout << "Area = " << PI * radius * radius << endl;
    cout << "circumference = " << 2 * PI * radius << endl;
    
    return 0;
}
