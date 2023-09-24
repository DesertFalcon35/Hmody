#include <iostream>
#include <string>

using namespace std;

// ----------------------   home work #30   -------
int readPositiveNumber()
{
    int num;
    cin >> num;
    while (num <= 0)
    {
        cout << " -- Wrong --  ( " << num << " ) Its Not Positive Number . Please Try Again ...\n";
        cin >> num;
    }
    return num;
}
int factorialNumber(int num)
{
    int factorial = num,x = num-1;
    for (x; x >= 1; x--)
    {
        factorial = factorial * x;
    }
    return factorial;
}
// ----------------------   home work #50   -------
void printWrongMassage(string x) 
{
    cout << "\n ------------------------------.\n";
    cout << " Wrong - "<< x << " - ... try again.";
    cout << "\n ------------------------------.\n";
}
void readPinCode(short &pin,string &name)
{
    cout << " please enter your ( Name ) : - ";
    getline(cin, name);
    cout << " please enter your new PIN code : - ";
    cin >> pin;
    cout << "****************************************\n\n";

}
void verifyFromInfo(short pin,string name)
{
    short wrongCode = 0;
    short codeInput;
    string nameInput;
    do
    {
        cout << " enter your Name : - ";
        cin.ignore(1, '\n');
        getline(cin, nameInput);
        cout << "\n enter your PIN : - ";
        cin >> codeInput;

        if (codeInput == pin && nameInput == name)
        {
            cout << "\n your balance is = ( 1000 000 ).\n";
            break;
        }
        else if (codeInput != pin && nameInput == name)
        {
            wrongCode++;
            printWrongMassage("PIN");
        }
        else if (codeInput == pin && nameInput != name)
        {
            wrongCode++;
            printWrongMassage("Name");
        }
        else
        {
            wrongCode++;
            printWrongMassage("Inputs");
        }

    } while (wrongCode != 3);
    if (wrongCode == 3)
    {
    cout << "\n\n ----- card locked ----- \n";
    }
}

int main()
{
    // ----------------------   home work #30   -------
    /* int positiveNum;
    do
    {
    cout << " please enter a number to calculate factorial number :\n";
    positiveNum = readPositiveNumber();
    cout << "\n-{ " << positiveNum << " }- factorial number is = ( " << factorialNumber(positiveNum) << " ) .\n\n";

    } while (positiveNum > 0);*/

    // ----------------------   home work #37   -------
    /* int inputNum;
    int sum = 0;
    short loopNum = 1;
    cout << " please enter a numbers to calculate them sum ... enter -99 to print the sum result.\n";
    do
    {
        cout << "\n please enter a number ( " << loopNum << " ) : ";
        cin >> inputNum;
        if (inputNum == -99)
        {
            cout << "\n sum result is = ( " << sum << " ).\n";
        }
        else
        {
            sum = sum + inputNum;
            loopNum++;

        }

    } while (inputNum != -99);*/

    // ----------------------   home work #50   -------
    short pin;
    string userName;
    readPinCode(pin,userName);
    verifyFromInfo(pin, userName);



    return 0;
}