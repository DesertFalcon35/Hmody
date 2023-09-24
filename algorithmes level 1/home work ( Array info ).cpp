#include <iostream>

using namespace std;

struct stInfo
{
    string ferstName, lastName, phone;
    short age;
};

void readInfo(stInfo& info)
{
    cout << "------------------------------------------------------\n";
    cout << " please enter your ( ferst name ): "; cin >> info.ferstName;
    cout << "\n please enter your ( last name ): "; cin >> info.lastName;
    cout << "\n please enter your ( Age ): "; cin >> info.age;
    cout << "\n please enter your ( Phone ): "; cin >> info.phone;
    cout << "\n------------------------------------------------------\n\n";
};
void printPerson(stInfo info)
{
    cout << " ***************************************\n";
    cout << " ferst name : " << info.ferstName << "\n";
    cout << " ferst name : " << info.lastName << "\n";
    cout << " ferst name : " << info.age << "\n";
    cout << " ferst name : " << info.phone << "\n";
    cout << " ***************************************\n\n";
};
void readPersons(stInfo info[2])
{
    readInfo(info[0]);
    readInfo(info[1]);
};
void printPresons(stInfo info[2])
{
    short perNum;
    cout << "\n enter (0) for ferst person info , (1) for last person info : "; cin >> perNum;
    printPerson(info[perNum]);
};

int main()
{
    stInfo info[2];

    readPersons(info);
    printPresons(info);

    return 0;
}