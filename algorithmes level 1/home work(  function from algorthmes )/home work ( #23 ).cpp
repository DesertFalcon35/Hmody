#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void circleAreaInputsReading(int &input1, int &input2, int &input3)
{
    cout << " please enter 2 number to calculate circle area.\n";
    cout << " a number 1 : "; cin >> input1;
    cout << " a number 2 : "; cin >> input2;
    cout << " a number 3 : "; cin >> input3;
};
float circleArea(int input1, int input2, int input3)
{
    const float PI = 3.14;
    int P = (input1 + input2 + input3)/2;
    float A = float(input1),B = float(input2), C = float(input3);
    float area = PI*pow((A*B*C)/(4*sqrt(P*(P-A)*(P-B)*(P-C))),2);

    return area;
};
void circleAreaResultPrinting(int input1, int input2, int input3)
{
    cout << "\n\n circle area is : " << circleArea(input1,input2,input3) << " cm.";
};
int main()
{
    int num1,num2, num3;
    circleAreaInputsReading(num1,num2, num3);
    circleAreaResultPrinting(num1,num2, num3);
    

    return 0;
}