#include <iostream>

using namespace std;

// -------------------------------  # 44 -----------------------------
enum enWeekDays { Sunday=1,Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, saturday=7};
void weekDays(enWeekDays dayNum)
{
    switch (dayNum)
    {
    case enWeekDays::Sunday:
        cout << "Sunday";
        break;
    case enWeekDays::Monday:
        cout << "Monday";
        break;
    case enWeekDays::Tuesday:
        cout << "Tuesday";
        break;
    case enWeekDays::Wednesday:
        cout << "Wednesday";
        break;
    case enWeekDays::Thursday:
        cout << "Thursday";
        break;
    case enWeekDays::Friday:
        cout << "Friday";
        break;
    case enWeekDays::saturday:
        cout << "saturday";
        break;
    default:
        cout << " Wrong week days number ";
    }
}
// -------------------------------  # 45 -----------------------------
void yearMonths(short monthNum)
{
    switch (monthNum)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "september";
        break;
    case 10:
        cout << "october";
        break;
    case 11:
        cout << "november";
        break;
    case 12:
        cout << "december";
        break;
    default:
        cout << " Wrong month number ";
    }
}


int main()
{
    // -------------------------------  # 36 -----------------------------
    /* int num1, num2;
    char operation;

    cout << " enter (number 1) and (operation) type and (number 2) to calculating .\n";
    cout << "\t "; cin >> num1;
    cout << "\t\t "; cin >> operation;
    cout << "\t "; cin >> num2;
    cout << "------------------------\n";
    switch (operation)
    {
    case '+':
        cout << "\t" << num1 + num2 << "\n\n";
        break;
    case '-':
        cout << "\t" << num1 - num2 << "\n\n";
        break;
    case '*':
        cout << "\t" << num1 * num2 << "\n\n";
        break;
    case '/':
        cout << "\t" << num1 / num2 << "\n\n";
        break;
    default:
        cout << " please enter this ( + , - , * , / ) operation types and try again \n\n";

    };*/
    // -------------------------------  # 44 -----------------------------
    short c;
    enWeekDays day;

    cout << " please enter a day number to printing day name.\n";
    cout << " "; cin >> day;
    day = (enWeekDays)c;
    cout << "--------------------------------------------------\n";
    if (day >= 1 && day <= 7)
    {
        system("color 2f");
        cout << " ( " << day << " ) day is a : "; weekDays(day); cout << endl;
    }
    else
    {
        system("color 4f");
        cout <<" ( " << day << " ) number is Wrong week day ... please try again \n\n";

    };
    // -------------------------------  # 45 -----------------------------

    /* short month;
    cout << " please enter a month number to printing month name.\n";
    cout << " "; cin >> month;
    cout << "--------------------------------------------------\n";
    if (month >= 1 && month <= 12)
    {
        system("color 2f");
        cout << " ( " << month << " ) month its a : "; yearMonths(month); cout << endl;
    }
    else
    {
        system("color 4f");
        cout << " ( " << month << " ) its not month in the year :) ... please try again \n\n";

    };*/


    return 0;
};