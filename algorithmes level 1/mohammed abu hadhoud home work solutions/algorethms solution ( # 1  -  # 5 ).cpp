#include <iostream>
#include <string>

using namespace std;
//-----------------   problem #1   ----------
void printName(string name)
{
    cout << " your name is : " << name << endl;
}
//-----------------   problem #2   ----------
string readName()
{
    string name;
    cout << " please enter your name : ";
    getline(cin,name);
    return name;
}
//-----------------   problem #3   ----------
enum enNumberType { odd = 1 , even = 2 };
int readNumber()
{
    int number;
    cout << " please enter a number : ";
    cin >> number;
    return number;
}
enNumberType checkNumberType(int num)
{
    if ((num % 2) == 0)
    {
        return enNumberType::even;
    }
    else
    {
        return enNumberType::odd;
    }
}
void printNumberType(enNumberType numType)
{
    switch (numType)
    {
    case enNumberType::odd:
        cout << "its Odd number.\n";
        break;
    case enNumberType::even:
        cout << "its Even number.\n";
        break;
    }
}
//-----------------   problem #4   ----------
struct strInfo
{
    short age;
    bool hasDrivingLicense;
    bool hasRecommendation;
};
bool yesOrNo(string wrongMessage)
{
    string result;
    do
    {
        cin >> result;
        if (result == "yes")
        {
            return true;
            break;
        }
        else if (result == "no")
        {
            return false;
            break;
        }
        else
        {
            cout << "\n-------- wrong input enter ( yes or no )\n";
            cout << wrongMessage;
        }

    } while (result != "yes" || result != "no");
} // i write thes
strInfo readInfo()
{
    strInfo info;
    cout << " are you hav a recommendation ? : ";
    info.hasRecommendation = yesOrNo(" are you hav a recommendation ? : ");
    if (info.hasRecommendation == false)
    {
        cout << "\n please enter your age : ";
        cin >> info.age;
        cout << " are you hav a driver license ? : ";
        info.hasDrivingLicense = yesOrNo(" are you hav a driver license ? : ");
    }
    return info;
}
bool isAccepted(strInfo info)
{
    if (info.hasRecommendation)
    {
        return true;
    }
    else
    {
        return (info.age > 21 && info.hasDrivingLicense);
    }
}
void printResult(strInfo info)
{
    if (isAccepted(info))
    {
        cout << "\n*******************\n";
        cout << " you a Hired \n" << endl;
    }
    else
    {
        cout << "\n*******************\n";
        cout << " you a Rejected \n" << endl;
    }
}
//-----------------   problem #5   ----------


int main()
{
    //-----------------   problem #1   ----------
    //printName("omar ahmed alrashed");
    // 
    //-----------------   problem #2   ----------
    //printName(readName());
    // 
    //-----------------   problem #3   ----------
    //printNumberType(checkNumberType(readNumber()));

    //-----------------   problem #4   ----------
    //printResult(readInfo());

    //-----------------   problem #5   ----------
    printResult(readInfo());


    return 0;
}