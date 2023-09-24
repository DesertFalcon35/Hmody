#include <iostream>
#include <string>

using namespace std;
struct stNumbers
{ 
    int arrayNums[100];
    short length;
};
stNumbers readNumbers(string message,string minMessage)
{
    stNumbers nums;
    cout << " how many number you want enter ? \n";
    cin >> nums.length;
    cout << minMessage << endl;
    for (short i = 0;i < nums.length;i++)
    {
        cout << message << i + 1 << " :";
        cin >> nums.arrayNums[i];
    }
    return nums;

}
//-----------------   problem #11   ----------
enum enPassFail{pass = 1, fail = 0};
int sumOfNumbers(stNumbers nums)
{
    int sum = 0;
    for (short i = 0;i < nums.length;i++)
    {
        sum += nums.arrayNums[i];
    }

    return sum;
}
float numbersAverage(stNumbers nums)
{
    return (float)sumOfNumbers(nums)/nums.length;
}
enPassFail checkAverage(float average)
{
    if (average >= 50)
    {
        return enPassFail::pass;
    }
    else
    {
        return enPassFail::fail;
    }
}
void printResult(float average)
{
    cout << "\n your marks average is = ( " << average << " ).\n";
    if (checkAverage(average) == enPassFail::pass)
        cout << " you a pass \n\n";
    else
        cout << " you a fail \n\n";
}
//-----------------   problem #12   ----------
int maxOfNumbers(stNumbers nums)
{
    int maxNum = 0;
    for (short i = 0;i < nums.length;i++)
    {
        if (nums.arrayNums[i] > maxNum)
            maxNum = nums.arrayNums[i];
    }
    return maxNum;
}
void printMaxNumber(int maxNum)
{
    cout << "\n the max number is = ( " << maxNum << " ).\n\n";
}
//-----------------   problem #13   ----------
void readNumber(int &A,int &B)
{
    cout << " please enter 2 numbers to swap .\n";
    cout << " number 1 : - "; cin >> A;
    cout << " number 2 : - "; cin >> B;
}
void swapNum(int &A,int &B)
{
    int temp = 0;
    temp = A;
    A = B;
    B = temp;
}
void printNumbers(string message,int A,int B)
{
    cout << "\n" << message << "\n" << A << "\n" << B;
}
//=================
struct stNumbersSW
{
    int num1, num2;
};
stNumbersSW readNumberss()
{
    stNumbersSW numbers;
    cout << " please enter a number 1 : ";
    cin >> numbers.num1;
    cout << " please enter a number 2 : ";
    cin >> numbers.num2;
    return numbers;

}
stNumbersSW swap(stNumbersSW nums)
{
    stNumbersSW numss = nums;
    int temp = numss.num1;
    numss.num1 = numss.num2;
    numss.num2 = temp;
    return numss;
}
void printNumberss(stNumbersSW numbers,string minMessage)
{
    cout << "\n" << minMessage << "\n";
    cout << " number 1 = " << numbers.num1;
    cout << "\n number 2 = " << numbers.num2 << endl;
}

//-----------------   problem #14   ----------

//-----------------   problem #15   ----------


int main()
{
    //-----------------   problem #11   ----------
    //printResult(numbersAverage(readNumbers(" enter mark - "," please enter your marks to calculate average. ")));

    //-----------------   problem #12   ----------
    //printMaxNumber(maxOfNumbers(readNumbers(" enter a number -  "," please enter a numbers to print a max number. ")));

    //-----------------   problem #13   ----------
    /* int number1, number2;
    readNumber(number1, number2);
    printNumbers(" entered number is : ", number1, number2);
    swapNum(number1, number2);
    printNumbers(" swaped number is : ", number1, number2);
    */
    //=============== (2)
    /* stNumbersSW numbers = readNumberss();
    printNumberss(numbers," entered numbers ");
    printNumberss(swap(numbers), " swaped numbers ");
    printNumberss(numbers, " entered numbers (2) ");
    */
    //-----------------   problem #14   ----------

    //-----------------   problem #15   ----------


    return 0;
}