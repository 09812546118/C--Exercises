#include <iostream>

using namespace std;

typedef enum _days {
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
} days;

int main()
{

    //create a c++ program that will determine if the day belongs to "Weekdays" or
    //"Weekends"

    int day = 0;

    cout << "Enter day: ";
    cin >> day;

    //fall-through switch
    switch(day){
        case monday:
        case tuesday:
        case wednesday:
        case thursday:
        case friday:
            cout << "Weekdays!" << endl;
            break;
        case sunday:
        case saturday:
            cout << "Weekends!" << endl;
            break;
        default:
             cout << "You entered an invalid day!" << endl;
             break;
    }

    //create a c++ program that will convert digits into days of the week
    //example:
    // Enter day:1
    // Sunday!
    //monday = 2, tuesday =3 ... sat = 7
     /*
    int day = 0;

    cout << "Enter day: ";
    cin >> day;


    switch(day){
        case 1:
            cout << "Sunday!" << endl;
            break;
        case 2:
            cout << "Monday!" << endl;
            break;
        case 3:
            cout << "Tuesday!" << endl;
            break;
        case 4:
            cout << "Wednesday!" << endl;
            break;
        case 5:
            cout << "Thursday!" << endl;
            break;
        case 6:
            cout << "Friday!" << endl;
            break;
        case 7:
            cout << "Saturday!" << endl;
            break;
        default:
            cout << "You entered an invalid day!" << endl;
            break;

    }
    */
    /*
    //example 1 refactored
    float temperature = 0;
    bool haveRash = false;

    temperature = 99.2;
    haveRash = true;

    if(temperature > 98.6 || haveRash == true){
        cout << "Admit to the hospital and see a doctor!\n";
    }


    //example 2 refactored
    bool isStung = false;
    bool isAllergic  = false;

    isStung = true;
    isAllergic = false;

    if(isStung == true && isAllergic == true)
    {
        cout << "Take me to the doctor!\n";
    }


    //example 3 refactored
     bool haveFever = false;
    bool isFatigue = false;
    bool jointsHurt = false;
    bool haveCough = false;

    haveFever = true;
    isFatigue = false;
    jointsHurt = false;
    haveCough = true;

    if(haveFever == true && (isFatigue==true || jointsHurt == true
        || haveCough ==true )){
            cout << "You need to quarantine!\n";
        }
    */
    /*
    //example 1
    float temperature = 0;
    bool haveRash = false;
    bool admitToHospital = false;

    temperature = 99.2;
    haveRash = true;



    if(temperature > 98.6) {
        admitToHospital = true;
    }
    if(haveRash == true){
        admitToHospital = true;
    }

    if(admitToHospital){
        cout << "Admit to the hospital and see a doctor!\n";
    }

    //example 2
    bool isStung = false;
    bool isAllergic  = false;

    isStung = true;
    isAllergic = false;

    if(isStung){
        if(isAllergic){
            cout << "Take me to the doctor!\n";
        }
    }

    //example 3
    bool haveFever = false;
    bool isFatigue = false;
    bool jointsHurt = false;
    bool haveCough = false;
    bool goToQuarantine = false;

    haveFever = true;
    isFatigue = false;
    jointsHurt = false;
    haveCough = true;

    if(haveFever){
        if(isFatigue){
            goToQuarantine = true;
        }
        if(jointsHurt){
            goToQuarantine = true;
        }
        if(haveCough){
            goToQuarantine = true;
        }
    }

    if(goToQuarantine){
        cout << "You need to quarantine!\n";
    }

    */
    // Create a C++ program that will determine if a person is a can vote or not.
    //note: a voter must be 18 y/o and above
    //sample run:
    // enter age: 18
    // This person can VOTE! Vote straight!

    //enter age: 17
    // This person is not yet allowed to vote!

    //initialization

    /*
    int age = 0;

    //input
    cout << "Enter age: ";
    cin >> age;

    string  result = "";

    //process
    if(age >= 18)
        result = "CAN VOTE!";
    else
        result = "CANNOT VOTE!";

    //output
    cout << "THIS PERSON " << result;
    */
    //
    // =================================================================================
    //   E X A M P L E BELOW!
    // =================================================================================
    //

    /*
    //two - way selection
    //bool x = false;
    int x = 5;
    int y = 3*2;
    int z = x -2;

    if(x < y > z)
    {
        cout << "This is executed!" << endl;
        cout << "The stmt is true!" << endl;
    }
    else
    {
        cout << "The statement is false!" <<endl;
        cout << "Test!" <<endl;
    }

    one - way selection
    bool x = false;
    int x = 16;
    int y = 20;

    if (x > y)
    {
        cout << "This is executed!" << endl;
        cout << "The statement is true!" << endl;
    }
    */

    return 0;
}
