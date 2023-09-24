#include <iostream>

using namespace std;
// -------------------------------  # 44 -----------------------------
enum enWeekDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, saturday = 7 };
enum continueORClosse {cont = 'yes', closse = 'no' };
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
    cout << " please enter any day \" number \" to printing the inputid day \" name \" :\n";
}
enWeekDays readWeekDay()
{
    short day;
    cout << "\t\t enter a number : "; cin >> day; cout << "\n";
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
void oORx()
{
    continueORClosse result;
    string rInput;
    cout << " Do You Want Continue (yes , no ) ?\n";
    cout << " \t\t - "; cin >> rInput;
    result = continueORClosse(rInput);
    switch (result)
    {
    case continueORClosse::cont :
        return readWeekDay();
        break;
    case continueORClosse::closse :
        return "x";
        break;
    default:
        return "x";
    }

}
void printSelectedDay(enWeekDays selectedNum)
{
    for (selectedNum; selectedNum >= 1; selectedNum = oORx())
    {
        if (selectedNum >= 1 && selectedNum <= 7)
        {
            system("color 0f");
            cout << " ( " << selectedNum << " ) day its a : { " << weekDays(selectedNum) << " } \n\n";
            cout << "------------------------------------------\n\n";
        }
        else
        {
            system("color 04");
            cout << "There is no day in the week with the number ( " << selectedNum << " ) :) ... please try again \n\n";
            cout << "------------------------------------------\n\n";
        };

    };
    cout << " X  closed  X \n\n";
}

int main()
{
    // thes is for loop exercise
    shoeWeekDays();
    printSelectedDay(readWeekDay());


    return 0;
};