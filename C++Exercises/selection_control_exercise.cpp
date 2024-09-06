#include <iostream>

using namespace std;

    void vehicleType1(){

        //start of motorcycle
        //initialization
        float r, s, R, S;
        char customerType;
        float regular = 0.0;
        float senior = 0.10;
        float hours = 0.0;
        float fee = 0.0;
        float result = 0.0;
        float total = 0.0;
        float cash = 0.0;
        float change = 0.0;

        //input
        cout << "Enter hour's parked: ";
        cin >> hours;
        cout << "Enter customer type(r=regular, s=senior): ";
        cin >> customerType;

        //process/output
        if(hours >=0 && hours <= 3){
            fee = 3;
        } // end of if(hours >=0 && hours <= 3)
        else if(hours > 3 && hours <= 8) {
            fee = 4 * static_cast<int>(hours + 1);
        }
        else if(hours > 8 && hours <= 24){
            fee = 40;
        }

        if(customerType == 's' || customerType == 'S'){
            senior = 0.10;

            result = fee * senior;
            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;
            cout << "Less senior citizen's discount(10%): $" << result << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";
            cin >> cash;

            change = cash - total;
            cout << "Change: $" << change << endl;
        }

        if(customerType == 'r' || customerType == 'R'){
            regular = 0.0;

            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";

            change = cash - total;
            cout << "Change: $" << change << endl;
        }//end of motorcycle
    }

    void vehicleType2(){

        //start of sedan
        //initialization
        float r, s, R, S;
        char customerType;
        float regular = 0.0;
        float senior = 0.10;
        float hours = 0.0;
        float fee = 0.0;
        float result = 0.0;
        float total = 0.0;
        float cash = 0.0;
        float change = 0.0;

        //input
        cout << "Enter hour's parked: ";
        cin >> hours;
        cout << "Enter customer type(r=regular, s=senior): ";
        cin >> customerType;

        //process/output
        if(hours >=0 && hours <= 3){
            fee = 5;
        } // end of if(hours >=0 && hours <= 3)
        else if(hours > 3 && hours <= 9) {
            fee = 6 * static_cast<int>(hours + 1);
        }
        else if(hours > 9 && hours <= 24){
            fee = 60;
        }

        if(customerType == 's' || customerType == 'S'){
            senior = 0.10;

            result = fee * senior;
            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;
            cout << "Less senior citizen's discount(10%): $" << result << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";
            cin >> cash;

            change = cash - total;
            cout << "Change: $" << change << endl;
        }

        if(customerType == 'r' || customerType == 'R'){
            regular = 0.0;

            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";
            cin >> cash;

            change = cash - total;
            cout << "Change: $" << change << endl;
        }//end of sedan
    }

    void vehicleType3(){

        //start of truck
        //initialization
        float r, s, R, S;
        char customerType;
        float regular = 0.0;
        float senior = 0.10;
        float hours = 0.0;
        float fee = 0.0;
        float result = 0.0;
        float total = 0.0;
        float cash = 0.0;
        float change = 0.0;

        //input
        cout << "Enter hour's parked: ";
        cin >> hours;
        cout << "Enter customer type(r=regular, s=senior): ";
        cin >> customerType;

        //process/output
        if(hours >=0 && hours <= 3){
            fee = 6;
        } // end of if(hours >=0 && hours <= 3)
        else if(hours > 3 && hours <= 12) {
            fee = 8 * static_cast<int>(hours + 3);
        }
        else if(hours > 12 && hours <= 24){
            fee = 125;
        }


        if(customerType == 's' || customerType == 'S'){
            senior = 0.10;

            result = fee * senior;
            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;
            cout << "Less senior citizen's discount(10%): $" << result << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";
            cin >> cash;

            change = cash - total;
            cout << "Change: $" << change << endl;
        }

        if(customerType == 'r' || customerType == 'R'){
            regular = 0.0;

            cout << "=======================================================" << endl;
            cout << "Total parking fee: $" << fee << endl;

            total = fee - result;

            cout << "Total fee: $" << total << endl;
            cout << "=======================================================" << endl;
            cout << "Enter cash tendered: ";
            cin >> cash;

            change = cash - total;
            cout << "Change: $" << change << endl;
        }//end of truck
    }

int main()
{
    /*what vehicle type
    options:
    m = motorcycle
    s = sedan
    t = truck*/

    char vehicleType;

    cout << "Enter vehicle type(m=motorcycle,s=sedan,t=truck): ";
    cin >> vehicleType;

    switch(vehicleType){
    case 'm':
        vehicleType1();
        break;
    case 's':
        vehicleType2();
        break;
    case 't':
        vehicleType3();
        break;
    default:
        cout << "Invalid vehicle type!" << endl;
        break;
    }
}

