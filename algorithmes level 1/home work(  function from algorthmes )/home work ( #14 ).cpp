#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int rectangleAreaFun(int A,int B)
{
    int result = A * B;
    return result;
};




int main()
{
    int A, B;

    cout << " please enter ( A and B ) for calculating a rectangle area.\n";
    cout << " A : "; cin >> A;
    cout << " B : "; cin >> B;

    cout << " rectangle area is : " << rectangleAreaFun(A, B) << " cm " << endl;


    return 0;
}