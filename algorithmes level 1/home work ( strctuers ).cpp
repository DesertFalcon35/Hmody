
#include <iostream>
using namespace std;
struct stMedia {
    string fecebook,twiter,instagram;
};
struct stSosial {
    string hobit;
    short phone;
    stMedia media;

};
struct stCart {
    string name,city,country;
    short age,munthly_salary;
    char gender;
    bool marrid;
    stSosial sosial;
};
int main()
{
    stCart myCart;
    cout << "please enter your informations.\n";
    cout << "your name : "; cin >> myCart.name;
    cout << "your Age : "; cin >> myCart.age;
    cout << "your city : "; cin >> myCart.city;
    cout << "your country : "; cin >> myCart.country;
    cout << "your month salary : "; cin >> myCart.munthly_salary;
    cout << "your gender ( M or F ) : "; cin >> myCart.gender;
    cout << "are you marrid ? ( true or false ) : "; cin >> myCart.marrid;
    cout << "your hobit : "; cin >> myCart.sosial.hobit;
    cout << "your phone : "; cin >> myCart.sosial.phone;
    cout << "your facebook acount : "; cin >> myCart.sosial.media.fecebook;
    cout << "your twiter acount : "; cin >> myCart.sosial.media.twiter;
    cout << "your instagram acount : "; cin >> myCart.sosial.media.instagram;
    cout << "\n\n";
    cout << "*******************************************\n";
    cout << "Name : " << myCart.name << endl;
    cout << "Age : " << myCart.age << "\n";
    cout << "City : " << myCart.city << "\n";
    cout << "Country : " << myCart.country << "\n";
    cout << "monthly salary : " << myCart.munthly_salary << "\n";
    cout << "yearly salary : " << myCart.munthly_salary*12 << "\n";
    cout << "gender : " << myCart.gender << "\n";
    cout << "is a marrid : " << myCart.marrid << "\n";
    cout << "hobit : " << myCart.sosial.hobit << "\n";
    cout << "phone : " << myCart.sosial.phone << "\n";
    cout << "facebook : " << myCart.sosial.media.fecebook << "\n";
    cout << "instagram : " << myCart.sosial.media.instagram << endl;
    cout << "twiter : " << myCart.sosial.media.twiter << "\n";
    cout << "*******************************************\n\n";


    return 0;
}