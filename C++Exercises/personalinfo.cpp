
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
        /* Write a c++ program that accepts a firstname and a lastname
        then outputs the Fullname
    */
    //inputs
    //declare inputs
    string firstname;
    string age;
    string address;
    string favorite_color;
    string favorite_sports;
    //string firstname;

    cout << "Enter firstname: ";
    getline(cin,firstname);
   

    cout << "Enter age: ";
    getline(cin, age);
    

    cout << "Enter address: ";
    getline(cin, address);
    

    cout << "Enter favorite_color: ";
    getline(cin, favorite_color);
    

    cout << "Enter  favorite_sports: ";
    getline(cin, favorite_sports);
    
    //process
    //declare pocess
    /* Hi! I'm (firstname)!
    I am (age) years old.
    I live in (address).
    My favorite color is (favorite_color).
    I love to play (favorite_sports).
    */

    //output
    //declare output
    cout << "\n Hi! I'm " << firstname << "!" ;
    cout << "\n I am " << age << " years old.";
    cout << "\n I live in " << address << "." ;
    cout << "\n My favorite color is " << favorite_color  << "." ;
    cout << "\n I love to play " << favorite_sports << "." ;


}
