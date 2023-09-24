#include <iostream>

using namespace std;

struct strInfo
{
	string firstName, lastName, phone;
	short age;
};
void readInfo(strInfo& person,short perNum)
{
	cout << " \n please enter infos for person - " << perNum+1 << " - .\n\n";
	cout << " First Name : "; cin >> person.firstName;
	cout << " Last Name : "; cin >> person.lastName;
	cout << " Age : "; cin >> person.age;
	cout << " Phone : "; cin >> person.phone;
	cout << endl;
}
void printInfo(strInfo person, short perNum)
{
	cout << "\n******************************( " << person.firstName << " - " << perNum << " - )******************************\n\n";
	cout << " First Name : ( " << person.firstName << " ).\n";
	cout << " Last Name : ( " << person.lastName << " ).\n";
	cout << " Age : ( " << person.age << " ).\n";
	cout << " Phone : ( " << person.phone << " ).\n\n";
	cout << "********************************************************************************************\n\n";
}
void readArrayPersons(strInfo persons[100], short& length)
{
	cout << " how many persons information do you want to enter ?\n";
	cout << " "; cin >> length;
	for (short i = 0; i < length ; i++)
	{
		readInfo(persons[i],i);
	}
}
void printArrayPersons(strInfo persons[100], short length)
{
	short x;
	do
	{
		cout << "\n-------------------------------\n";
		cout << " enter a person number to printing : - ";cin >> x;
		cout << "\n-------------------------------\n";
		printInfo(persons[x - 1], x);

	} while (x > 0 && x - 1 < length);

	cout << " ( " << x << " ) its not person number ! please try again\n -- Closed --\n\n";

	/* for (short i = 0; i < length; i++)
	{
		printInfo(persons[i],i);
	}*/
}


int main()
{
	strInfo infos[100];
	short length;
	readArrayPersons(infos,length);
	printArrayPersons(infos, length);

	return 0;
}