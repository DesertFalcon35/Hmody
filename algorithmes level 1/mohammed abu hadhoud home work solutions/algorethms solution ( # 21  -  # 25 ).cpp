#include <iostream>
#include <string>

using namespace std;

//-----------------   problem #21   ----------

//-----------------   problem #22   ----------

//-----------------   problem #23   ----------

//-----------------   problem #24   ----------
short readAge()
{
    short age = 0;
    cout << "\n please enter your Age : ";
    cin >> age;
    return age;
}
bool ValidateNumberInRange(short number, short from, short to)
{
    return (number >= from && number <= to);
}
void PrintValidateAgeInRange(short age, short from, short to)
{
    if (ValidateNumberInRange(age, from, to))
    {
        cout << "\n its a vaild Age.\n\n ";
    }
    else
    {
        cout << "\n its a unvaild Age.\n\n ";
    }
}
//-----------------   problem #25   ----------
void PrintAgeInRange(short from,short to)
{
    short age = 0;
    do
    {
        age = readAge();
        if (ValidateNumberInRange(age, from, to) == false)
            cout << " --- Its Unvalid Age. Try Again... \n";
    } while (ValidateNumberInRange(age,from,to) == false);

    cout << "\n Your Age its a Valid... its ( " << age << " ) Years.\n\n";
}

int main()
{
    //-----------------   problem #21   ----------
    
    //-----------------   problem #22   ----------
    
    //-----------------   problem #23   ----------
    
    //-----------------   problem #24   ----------
    //PrintValidateAgeInRange(readAge(), 17, 20);
    //-----------------   problem #25   ----------
    //PrintAgeInRange(20,30);

    return 0;
}