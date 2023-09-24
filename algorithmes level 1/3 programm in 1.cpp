#include <iostream>
#include <string>

using namespace std;

void questionToContinue(string question,string & decision)
{
    do
    {
        cout << question << "\n";
        cin >> decision;
        if (decision == "yes" || decision == "no")
        {
            break;
        }
        else
        {
            cout << "\n Wrong input please try again...\n\n";

        }

    } while (decision != "yes" || decision != "no");
}
void questionToper(string question, string& decision)
{
    do
    {
        cout << question << "\n";
        cin >> decision;
        if (decision == "p" || decision == "+" || decision == "x")
        {
            break;
        }
        else
        {
            cout << "\n Wrong input please try again...\n\n";

        }

    } while (decision != "yes" || decision != "no");
}
//----------------- factorial -------------------
int readPositiveNumber()
{
    int posNum = 0;
    do
    {
        cin >> posNum;
        if (posNum <= 0)
        {
            cout << " --(" << posNum << ") its Not Positive number ! --\n";
        }
    } while (posNum <= 0);
    return posNum;
}
void factorialCalculater()
{
    int positiveNum;
    cout << "--------------------( factorial Calculater )------------------------\n\n";
    cout << " please enter a positive number to print factorial :\n";
    positiveNum = readPositiveNumber();
    int factorial = positiveNum;
    for (int i = positiveNum - 1; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << "\n the factorial number of - " << positiveNum << " - is = ( " << factorial << " ).\n";
    cout << "--------------------------------------------------------------------\n\n";
}
//----------------- average -------------------
void averageCalculater()
{
    short marks[100], marksLength, average = 0;

    cout << "--------------------( Average Calculater )------------------------\n\n";
    cout << " How many your marks ? :\n";
    marksLength = readPositiveNumber();
    cout << " enter your marks to calculate average .\n";
    for (short i = 1; i <= marksLength; i++)
    {
        short x;
        cout << " enter marks - " << i << " - : ";
        cin >> x;
        average += x;
    }
    average = average / marksLength;
    cout << "\n your marks average is = ( " << average << " ).\n";
    cout << "--------------------------------------------------------------------\n\n";
}
//------------------ person infos ------------------
struct personInfos
{
    string name, country, city, phone;
    short age;
};
void read1Person(personInfos& per, short perNum)
{
    cout << "\n------------- person " << perNum + 1 << " --------------\n";
    cout << "- Name : "; cin >> per.name;
    cout << "- Age : "; cin >> per.age;
    cout << "- Country : "; cin >> per.country;
    cout << "- City : "; cin >> per.city;
    cout << "- Phone : "; cin >> per.phone;
    cout << "\n------------------------------------\n";
}
void readPersons(personInfos perArray[100], short& langth)
{
    cout << " enter how many person you want (0 to 100) ?\n";
    do
    {
        langth = readPositiveNumber();
        if (langth > 0 && langth < 100)
        {
            break;
        }
        else
        {
            cout << "\n - its high number. try again... -\n";
        }

    } while (langth > 100);
    cout << "\n---------------------------------------\n";
    for (short i = 0; i < langth; i++)
    {
        read1Person(perArray[i], i);
    }
}
void printPersonsInfos(personInfos perArray[100], short langth)
{
    string searchName, decision;
    cout << "\n><><><><><><><><><><><><>( person printing )<><><><><><><><><><><><><\n";
    do
    {
        cout << "\n enter person name to print him infos : - "; cin >> searchName;
        for (short i = 0; i < langth; i++)
        {
            if (searchName == perArray[i].name)
            {
                cout << "\n****************** ( " << searchName << " info ) ******************\n";
                cout << " Name : " << perArray[i].name;
                cout << "\n Name : " << perArray[i].age << " years.";
                cout << "\n Name : " << perArray[i].country;
                cout << "\n Name : " << perArray[i].city;
                cout << "\n Name : " << perArray[i].phone;
                cout << "\n**************************************************\n\n";
                break;
            }
            else if (i == langth - 1 && searchName != perArray[i].name)
            {
                cout << "\n - its wrong person name / try again ... -\n\n";
                continue;
            }
        }
        questionToContinue("><><><><><> Are you want print more persons (yes ,no) ? ", decision);
    } while (decision == "yes");
}
void addNewPerson(personInfos perArray[100], short& langth, short& addPer)
{
    cout << "\n><><><><><><><><><><><><>( person Adding )<><><><><><><><><><><><><\n";
    cout << " enter how many person you want to add (0 to 100) ?\n";
    do
    {
        addPer = readPositiveNumber();
        if (addPer > 0 && addPer < 100)
        {
            break;
        }
        else
        {
            cout << "\n - its high number. try again... -\n";
        }

    } while (addPer > 100);
    cout << "\n---------------------------------------\n";
    for (short i = langth; i < addPer+langth; i++)
    {
        read1Person(perArray[i], i);
    }
    langth += addPer;
}
void personInformations()
{
    personInfos persons[100];
    short langth, addPer;
    string decisions;

    readPersons(persons, langth);
    do
    {
        questionToper(" enter - (p) to Print person , (+) to Add person , (x) to Exet :", decisions);
        if (decisions == "p")
        {
            printPersonsInfos(persons, langth);
        }
        else if (decisions == "+")
        {
            addNewPerson(persons, langth, addPer);
        }
        else
        {
            cout << " ><----- persons progamming is closed ----->< \n\n";
        }

    } while (decisions == "p" || decisions == "+");
}
//------------------------------------
void choseProgrammes()
{
    string decision;
    int proNum = 0;
    do
    {
        cout << "\n *****************************************\n";
        cout << " - 1 - :{ factorial calculater }.\n";
        cout << " - 2 - :{ average calculater }.\n";
        cout << " - 3 - :{ person informations }.\n";
        cout << "\n *****************************************\n\n";
        cout << " please enter a programm number to run thes : \n";
        cout << " - "; cin >> proNum;
        switch (proNum)
        {
        case 1:
            factorialCalculater();
            break;
        case 2:
            averageCalculater();
            break;
        case 3:
            personInformations();
            break;
        default:
            cout << "\n Wrong number please try again...\n\n";
        }
        questionToContinue("------------------------------ Are you want to continue in the min programm ( yes , no) ? : ", decision);

    } while (decision == "yes");
}

int main()
{
    choseProgrammes();

    return 0;
}