
#include <iostream>
#include <string>

using namespace std;

enum enGender {mail,femail};
enum enFevuretColor {white,red,blue,green,black,yellow};
enum enMarrid {yes,no};
struct stSelfInformationCart
{
    string name,city,country;
    short age,monthlySalary;
};

int main()
{
    stSelfInformationCart SelfInformationCart;
    enGender gender = enGender::mail;
    enMarrid marrid = enMarrid::no;
    enFevuretColor fevuratColor = enFevuretColor::yellow;

    SelfInformationCart.name = "omar";
    SelfInformationCart.age = 25;
    SelfInformationCart.city = "albasra";
    SelfInformationCart.country = "iraq";
    SelfInformationCart.monthlySalary = 5000;
    
    cout << "*************************************\n";
    cout << " Name : " << SelfInformationCart.name << "\n";
    cout << " City : " << SelfInformationCart.city << "\n";
    cout << " Country : " << SelfInformationCart.country << "\n";
    cout << " Monthly salary : " << SelfInformationCart.monthlySalary << "\n";
    cout << " Yearly salary : " << SelfInformationCart.monthlySalary*12 << "\n";
    cout << " Gender : " << gender << "\n";
    cout << " Marrid : " << marrid << "\n";
    cout << " Fevurate color : " << fevuratColor << "\n";
    cout << "*************************************" << endl;
    return 0;
}