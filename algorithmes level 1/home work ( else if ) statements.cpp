#include <iostream>

using namespace std;

int main()
{   // -------------------   home work #33   -----------------------
    /*short grade;

    cout << " please enter your grade to print your result.\n";
    cin >> grade;

    if (grade >= 90)
    {
        cout << "\n your result is ( A ).\n\n";
    }
    else if (grade >= 80)
    {
        cout << "\n your result is ( B ).\n\n";
    }
    else if (grade >= 70)
    {
        cout << "\n your result is ( C ).\n\n";
    }
    else if (grade >= 60)
    {
        cout << "\n your result is ( D ).\n\n";
    }
    else if (grade >= 50)
    {
        cout << "\n your result is ( E ).\n\n";
    }
    else
    {
        cout << "\n your result is ( F ).\n\n";
    };*/
    // -------------------   home work #34   -----------------------

    /*int totalSales;

    cout << " please enter your totale sales to print your Percentage.\n";
    cin >> totalSales;

    if (totalSales >= 1000000)
    {
        cout << "\n your percentage is ( 1% ) = " << totalSales * 0.01 << " $\n\n";
    }
    else if (totalSales >= 500000)
    {
        cout << "\n your percentage is ( 2% ) = " << totalSales * 0.02 << " $\n\n";
    }
    else if (totalSales >= 100000)
    {
        cout << "\n your percentage is ( 3% ) = " << totalSales * 0.03 << " $\n\n";
    }
    else if (totalSales >= 50000)
    {
        cout << "\n your percentage is ( 5% ) = " << totalSales * 0.05 << " $\n\n";
    }
    else
    {
        cout << "\n your percentage is ( 0% ) = " << totalSales * 0 << " $\n\n";
    };*/
    // -------------------   home work #36   -----------------------

    int num1,num2;
    string operationType;

    cout << " please enter (number 1) and (operation) type and (number 2) to calculating.\n";
    cout << " "; cin >> num1;
    cout << " "; cin >> operationType;
    cout << " "; cin >> num2;

    if (operationType == "+")
    {
        cout << "\n " << num1 << " + " << num2 << " = " << num1 + num2 << "\n\n";
    }
    else if (operationType == "*")
    {
        cout << "\n " << num1 << " * " << num2 << " = " << num1 * num2 << "\n\n";
    }
    else if (operationType == "/")
    {
        cout << "\n " << num1 << " / " << num2 << " = " << num1 / num2 << "\n\n";
    }
    else if (operationType == "-")
    {
        cout << "\n " << num1 << " - " << num2 << " = " << num1 - num2 << "\n\n";
    }
    else if (operationType == "%")
    {
        cout << "\n " << num1 << " % " << num2 << " = " << num1 % num2 << "\n\n";
    }
    else
    {
        cout << " " << " (  EROR ! )   PLEASE ENTER A OPERATION TYPE AND TRY AGAIN.";
    };


    return 0;
}
