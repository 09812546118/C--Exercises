#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    string str1;
    
    cout << "Enter a string without any blanks in it: ";
    cin >> str1;
    cout << endl;
    
    cout << "Enter two integers: ";
    cin >> num1, num2;
    cout << endl;
    
    cout << str1 << " " << "num1 * num2: " << num1 * num2 << endl;
    
    return 0;
    
}
