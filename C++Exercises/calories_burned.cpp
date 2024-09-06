#include <iostream>

using namespace std;

int main()
{
    //repeat until user press  'e'
    char response;

    while(response != 'e'){
        //input
        int calburned = 0;
        float total_calburned = 0.0, ave_calburned = 0.0;
        int day = 1;
        //while
        while(day <= 7){
            //stmts to execute
            cout << "Enter calories burned -" << day << " : ";
            cin >> calburned;
            total_calburned = total_calburned +  calburned;
            day = day + 1;
        }
        ave_calburned = total_calburned / 7;

        //output
        cout << "average calories burned = " << ave_calburned << endl;

        cout << "Do you want to continue ? (press 'e' to exit)";
        cin >> response;

    }


    /*
    //init
    int calburned_mon = 0, calburned_tue = 0, calburned_wed = 0, calburned_thr = 0,
    calburned_fri = 0, calburned_sat = 0, calburned_sun = 0;
    float average_calburned = 0.0;

    //input
    cout << "Enter calories burned - monday: ";
    cin >> calburned_mon;
    cout << "Enter calories burned - Tue: ";
    cin >> calburned_tue;
    cout << "Enter calories burned - wed: ";
    cin >> calburned_wed;
    cout << "Enter calories burned - thr: ";
    cin >> calburned_thr;
    cout << "Enter calories burned - fri: ";
    cin >> calburned_fri;
    cout << "Enter calories burned - sat: ";
    cin >> calburned_sat;
    cout << "Enter calories burned - sun: ";
    cin >> calburned_sun;

    //process
    average_calburned =
    (calburned_mon +  calburned_tue + calburned_wed + calburned_thr +
    calburned_fri + calburned_sat + calburned_sun) /7;

    //output
    cout << "Total calories burned in a week: " << average_calburned << endl;
    */
    return 0;
}