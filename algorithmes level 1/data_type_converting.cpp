
#include <iostream>
#include <string>

using namespace std;


int main()
{
    // converting int to float,double -- float,double to int

    int intNum = 10;
    float floatNum = 20.5;

    int newIntNum = int(floatNum);

    float newFloatNum = float(intNum);

    newFloatNum += 0.5;

    cout << newIntNum << endl;
    cout << newFloatNum << "\n\n";

    // converting string number to int or float,double

    string stringNum = "35.8";

    int newIntNumSt = stoi(stringNum);
    float newFloatNumSt = stof(stringNum);

    cout << newIntNumSt << endl;
    cout << newFloatNumSt << "\n\n";

    // convering int or float,double to string

    int intNumber = 53;
    float floatNumber = 53.8;

    string stringNumberFint = to_string(intNumber);
    string stringNumberFfloat = to_string(floatNumber);


    cout << stringNumberFint << endl;
    cout << stringNumberFfloat << "\n\n";
}