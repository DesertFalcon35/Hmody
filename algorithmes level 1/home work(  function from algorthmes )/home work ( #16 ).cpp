#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void readInputs(int &input1,int &input2)
{
    cout << " please enter ( A , B ) to calculating rectangle area through diagonal and side area of rectangle.\n";
    cout << " A : "; cin >> input1;
    cout << " B : "; cin >> input2;
};
float rectangleArea(int a, int b)
{
    float A = float(a), B = float(b);
    float area = A * (sqrt( pow(B,2) - pow(A,2)));
    return area;
};
void rectangleAreaPrint(int input1,int input2)
{
    cout << " \n\n*************************\n";
    cout << "rectangle area is : " << rectangleArea(input1, input2) << " cm.\n\n";
};
int main()
{
    int num1, num2;
    readInputs(num1, num2);
    rectangleAreaPrint(num1, num2);

    return 0;
}