#include <iostream>

using namespace std;

void readGrades(float grades[3])
{
    cout << " please enter a grade 1 :\n";
    cin >> grades[0];
    cout << " please enter a grade 2 :\n";
    cin >> grades[1];
    cout << " please enter a grade 3 :\n";
    cin >> grades[2];
}

float avrageCalculate(float grades[3])
{
    return (grades[0] + grades[1] + grades[2]) / 3;
}

void printAvrage(float grades[3])
{
    cout << "\n******************************\n";
    cout << "\n the average of geades is : ( " << avrageCalculate(grades) << " ) ." << endl;
    cout << "------------------------------------------------------------\n\n";
}


int main()
{
    float grades[3];

    readGrades(grades);
    printAvrage(grades);


    return 0;
};