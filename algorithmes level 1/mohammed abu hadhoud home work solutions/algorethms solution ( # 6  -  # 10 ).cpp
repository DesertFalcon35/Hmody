#include <iostream>
#include <string>

using namespace std;
//-----------------   problem #6   ----------
enum nameType {reversed = true,unreversed = false};
struct stNameInfo
{
    string firstName,lastName;
};
stNameInfo readName()
{
    stNameInfo info;
    cout << " enter your First name : ";
    cin >> info.firstName;
    cout << " enter your Last name : ";
    cin >> info.lastName;
    return info;

}
string getFullName(stNameInfo name,bool reversed)
{
    string fullName = "";
    if(reversed)
        fullName = name.lastName + " " + name.firstName;
    else
        fullName = name.firstName + " " + name.lastName;

    return fullName;
}
void printFullName(string fullName)
{
    cout << "\n your full name is : " << fullName << endl;
}
//-----------------   problem #7   ----------
int readNumber(string message)
{
    int num;
    cout << message;
    cin >> num;
    return num;
}
float getHalfNumber(int num)
{
    return (float)num / 2;
}
void printHalfNumber(int num)
{
    string result = " the half number of ( " + to_string(num) + " ) is = " + to_string(getHalfNumber(num));
    cout << endl << result << endl;
}
//-----------------   problem #8   ----------
enum enPassFail {pass = 1,faile = 0};
enPassFail checkMark(int mark)
{
    if (mark >= 50)
        return enPassFail::pass;
    else
        return enPassFail::faile;
}
void printMarkResult(int mark)
{
    if (checkMark(mark) == enPassFail::pass)
        cout << "\n you Passed \n" << endl;
    else
        cout << "\n you failed \n" << endl;
}
//-----------------   problem #9   ----------
struct stNumbers
{
    int num1, num2, num3;
};
stNumbers readNumbers(string massege)
{
    stNumbers nums;
    cout << massege << "\n\n";
    cout << " enter a number 1 : ";
    cin >> nums.num1;
    cout << " enter a number 2 : ";
    cin >> nums.num2;
    cout << " enter a number 3 : ";
    cin >> nums.num3;
    return nums;
}
int numbersSum(stNumbers nums)
{
    return nums.num1 + nums.num2 + nums.num3;
}
void printSumResult(stNumbers nums)
{
    cout << "\n result numbers sum is = " << numbersSum(nums);
}
//-----------------   problem #10   ----------
float calculateAverage(stNumbers nums)
{
    return (float)numbersSum(nums) / 3;
}
void printAverageResult(stNumbers nums)
{
    cout << "\n result numbers Average is = " << calculateAverage(nums);
}

int main()
{
    //-----------------   problem #6   ----------
    //printFullName(getFullName(readName(),nameType::unreversed));
    
    //-----------------   problem #7   ----------
    //printHalfNumber(readNumber(" please enter a number : "));

    //-----------------   problem #8   ----------
    //printMarkResult(readNumber(" please enter your mark : "));
    
    //-----------------   problem #9   ----------
    //printSumResult(readNumbers(" please enter a 3 number to calculate sum."));
    
    //-----------------   problem #10   ----------
    printAverageResult(readNumbers(" please enter a 3 mark to calculate Average."));


    return 0;
}