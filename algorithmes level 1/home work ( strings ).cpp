
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string SN1;
    string SN2;
    string SN3;

    cout << " please enter your name : ";
    cout << " "; getline(cin, SN1); cout << "\n";
    cout << " please enter a string 2 (number) : ";
    cout << " "; cin >> SN2; cout << "\n";
    cout << " please enter a string 3 (number) : ";
    cout << " "; cin >> SN3; cout << "\n\n";

    cout << " *****************************************\n";
    cout << " the length of name is : " << SN1.length() << "\n";
    cout << " characters of name [0,2,4,7] : " << SN1[0] << " , " << SN1[2] << " , " << SN1[4] << " , " << SN1[7] << endl;
    cout << " concatenating srtrng 2 and string 3 = " << SN2 + SN3 << "\n";
    cout << " " << SN2 << " * " << SN3 << " = " << stoi(SN2) * stoi(SN3) << "\n";


    return 0;
}