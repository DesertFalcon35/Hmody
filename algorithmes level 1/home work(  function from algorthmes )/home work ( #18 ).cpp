#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void circleAreaInputsReading(int &input1)
{
    cout << " please enter a number to calculate circle area.\n";
    cout << " a number : "; cin >> input1;
};
float circleArea(int input)
{
    const float PI = 3.14;
    float A = float(input);
    float area = PI * (pow(A,2));

    return area;
};
void circleAreaResultPrinting(int input)
{
    cout << "\n\n circle area is : " << circleArea(input) << " cm.";
};
int main()
{
    int num1;
    circleAreaInputsReading(num1);
    circleAreaResultPrinting(num1);
    

    return 0;
}