#include <iostream>

using namespace std;
// --------------- home work #26
int readIn()
{
    int z;
    cout << " please enter a number to printing 1 to your number:\n\n";
    cout << " "; cin >> z;
    return z;
}
void from1ToInPrint(int c)
{
    for (c;c >= 1;c = readIn())
    {
        short in = c;
        cout << "--------------------------\n\n";
        for (short i = 1;i <= in;i++)
        {
            cout << " " << i << "\n";
        }
        cout << "\n press any ( a - z ) to close\n\n";

    }
}
// --------------- home work #28
int sumOddNumPrint(int x)
{
    int sumOdd = 0;
    for (int i = 1; i <= x; i += 2)
    {
        sumOdd += i;
    }
    return sumOdd;
}
void oddNumPrint(int z)
{
    
    cout << "\n odd numbers is :\n\n";
    for (int i = 1; i <= z; i += 2)
    {
        cout << " - " << i << endl;
    }
}
void oddNumbers()
{
    int num;
    cout << "please enter anumber to print sum odd numbers.\n\n";
    cin >> num;
    cout << " your number is : ( " << num << " )\n";
    oddNumPrint(num);
    cout << "\n sum odd numbers is : (" << sumOddNumPrint(num) << "). \n\n";
}
// --------------- home work #30
int calculateFactorial(int d)
{
    int factorial = d;
    int counter = d - 1;
    for (counter; counter >= 1; counter--)
    {
        factorial = factorial * counter;
    }
    return factorial;
}
int readNum()
{
    int pn;
    cin >> pn;
    return pn;
}
int readPositiveNum()
{
    for (int i = readNum(); i >= 0 || i <= 0; i = readNum())
    {
        if (i > 0)
        {
            return i;
        }
        else
        {
            cout << " ( EROR ) its not positive number!\n please try again...\n";
        }
    }
}
// --------------- home work #32
int powerCalc(int n ,int p)
{
    int number = n;
    for (int repete = 1; repete < p; repete++)
    {
        number = number * n;
    }
    return number;
}

int main()
{
    // --------------- home work #26
    /* int c = readIn();
    from1ToInPrint(c);*/

    // --------------- home work #28
    /* oddNumbers();*/
    
    // --------------- home work #30

    /* cout << " please enter a number to calculate factorial yor number.\n";
    short inNum = readPositiveNum();
    cout << "---------------------------------\n\n";
    cout << " factorial of ( " << inNum << " ) is : = " << calculateFactorial(inNum) << endl;*/

    // --------------- home work #32
    int number, power;
    cout << " please enter a ( number and power ) to printing result.\n";
    cout << " \n number : "; cin >> number; cout << " power : "; cin >> power;
    cout << "\n-----------------------------------\n";
    cout << "   " << number << " ^ " << power << " = " << powerCalc(number, power) << endl;


    return 0;
}