#include <iostream>

using namespace std;
// -------------------------------  # 44 -----------------------------
enum enWeekDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, saturday = 7 };
void shoeWeekDays()
{
    cout << "            {   Week Days   }\n";
    cout << "------------------------------------------\n";
    cout << " 1 - { sunday }\n";
    cout << " 2 - { Monday }\n";
    cout << " 3 - { Tuesday }\n";
    cout << " 4 - { Wednesday }\n";
    cout << " 5 - { Thursday }\n";
    cout << " 6 - { Friday }\n";
    cout << " 7 - { saturday }\n";
    cout << "------------------------------------------\n\n";
    cout << " please enter a day number to printing day name :\n";
}
enWeekDays readWeekDay()
{
    short day;
    cout << "                "; cin >> day;
    return enWeekDays(day);
}
string weekDays(enWeekDays dayNum)
{
    switch (dayNum)
    {
    case enWeekDays::Sunday:
        return "Sunday";
        break;
    case enWeekDays::Monday:
        return "Monday";
        break;
    case enWeekDays::Tuesday:
        return "Tuesday";
        break;
    case enWeekDays::Wednesday:
        return "Wednesday";
        break;
    case enWeekDays::Thursday:
        return "Thursday";
        break;
    case enWeekDays::Friday:
        return "Friday";
        break;
    case enWeekDays::saturday:
        return "saturday";
        break;
    default:
        return " Wrong week days number ";
    }
}
void printSelectedDay(enWeekDays selectedNum)
{
    if (selectedNum >= 1 && selectedNum <= 7)
    {
        cout << " ( " << selectedNum << " ) day is a : " << weekDays(selectedNum) << endl;
        cout << "------------------------------------------\n\n";
    }
    else
    {
        system("color 04");
        cout << " ( " << selectedNum << " ) number is Wrong week day ... please try again \n\n";
        cout << "------------------------------------------\n\n";
    };

}

int main()
{
    shoeWeekDays();
    //enWeekDays ss = readWeekDay();
    for (readWeekDay(); readWeekDay() >= 1 && ss <= 7)
    {
        enWeekDays ss = readWeekDay();
        printSelectedDay(ss);

    };
    

    return 0;
};