#include <iostream>

using namespace std;


// ---------------------   home work # 11   --------------------------
void readMarks(int marks[3])
{
    cout << " please enter yor marks to printing yor result.\n";
    cout << " mark 1 : "; cin >> marks[0];
    cout << " mark 2 : "; cin >> marks[1];
    cout << " mark 3 : "; cin >> marks[2];
}
int averageCalc(int marks[3])
{
    return (marks[0] + marks[1] + marks[2]) / 3;
}
void marksResult(int average)
{
    if (average >= 50)
    {
        cout << " yor result is ( PASS ).\n\n";
    }
    else
    {
        cout << " yor result is ( FAIL ).\n\n";
    };
}
// ---------------------   home work # 11   --------------------------



int main()
{
    // ---------------------   home work # 8   --------------------------
    /*
    short age;
    bool isHasDriverLisens;
    cout << " please enter your informations to hire a driver.\n";
    cout << " yore Age : "; cin >> age;
    cout << " are you has a driver lisnens ? true or false : "; cin >> isHasDriverLisens;
    if (age >= 21 && isHasDriverLisens == true)
    {
        cout << " \n\nyou is hired\n";
    }
    else
    {
        cout << " \n\nyou is rejected\n";
    };
    */
    // ---------------------   home work # 11   --------------------------
    
    /*int marks[3];

    readMarks(marks);
    cout << " \nyor marks average is : " << averageCalc(marks) << endl;
    marksResult(averageCalc(marks));*/
    // ---------------------   home work # 11   --------------------------
    // ---------------------   home work # 49   --------------------------
    
    short PIN;
    short input;
    cout << " enter yor new password : "; cin >> PIN;
    cout << "\n\n******************************************\n\n";
    cout << " enter a password to login your acount : "; cin >> input;
    if (input == PIN)
    {
        cout << " \nwellcome in yor acount \nyour balance is : ( 7500 $ ).\n\n";
    }
    else
    {
        cout << " \npassword is a wrong , please try again ...\n\n";
    }

    // ---------------------   home work # 49   --------------------------




    return 0;
}