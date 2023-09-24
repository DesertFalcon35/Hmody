
#include <iostream>
using namespace std;

int main()
{
	// home work from algorithms #7
	/*
	int input_number;
	cout << "please enter a number :\n";
	cin >> input_number;
	cout << endl;
	cout << "Half of ( " << input_number << " ) is ( " << input_number / 2 << " )\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #9
	/*
	int num1, num2, num3;

	cout << "please enter a 3 numbers A , B and C\n";
	cout << "A\n";
	cin >> num1;
	cout << "B\n";
	cin >> num2;
	cout << "C\n";
	cin >> num3;
	cout << endl << endl;

	cout << "sum of 3 number is : ( " << num1 + num2 + num3 << " )\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #10
	/*
	short mark1;
	short mark2;
	short mark3;
	cout << " please enter your marks to know your average\n";
	cout << " mark 1 :\n";
	cin >> mark1;
	cout << " mark 2 :\n";
	cin >> mark2;
	cout << " mark 3\n";
	cin >> mark3;
	cout << "\n\n";

	cout << " yor average is ( " << (mark1 + mark2 + mark3) / 3 << " )\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #14
	/*
	short num1;
	short num2;
	short temp;
	cout << "please enter a 2 numbers for swaping .\n";
	cout << " number 1 :\n";
	cin >> num1;
	cout << " number 2 :\n";
	cin >> num2;

	cout << "**************** befor swaping **************\n";
	cout << " number 1 : " << num1 << endl;
	cout << " number 2 : " << num2 << endl;
	cout << "*********************************************\n";
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "\n\n";
	cout << "**************** after swaping **************\n";
	cout << " number 1 : " << num1 << endl;
	cout << " number 2 : " << num2 << endl;
	cout << "*********************************************\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #15
	/*
	short a;
	short b;
	cout << "please enter a and b for calculateing the rectangle area .\n";
	cout << " a\n";
	cin >> a;
	cout << " b\n";
	cin >> b;
	short area = a*b;
	cout << "the rectangle area is : " << area << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #17
	/*
	short a;
	short h;
	cout << "please enter a and h for calculateing the triangle area .\n";
	cout << " a\n";
	cin >> a;
	cout << " h\n";
	cin >> h;
	short area = (a/2)*h;
	cout << "the triangle area is : " << area << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #19
	
	const float pi = 3.14;
	int d;
	cout << "please enter D for calculateing the circle area .\n";
	cout << " D\n";
	cin >> d;
	cout << " \n\n";
	float area = ( pi* pow(d,2) )/4;
	cout << "the circle area is : " << area << endl;
	
	//-------------------------------------------------------------------------------------
	// home work from algorithms #21
	/*
	float PI = 3.14;
	short l;
	cout << "please enter l for calculateing the circle area along circumference .\n";
	cout << " l\n";
	cin >> l;
	cout << " \n\n";
	float area = (l*l)/(4*PI);
	cout << "the circle area is : " << area << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #22
	/*
	float PI = 3.14;
	short a;
	short b;
	cout << "please enter a and b for calculateing the circle area inscribed in an isosceles triangle .\n";
	cout << " a\n";
	cin >> a;
	cout << " b\n";
	cin >> b;
	cout << " \n\n";
	float area = (PI * ((b*b)/4))*( (static_cast <float> (2)*a-b ) / ( 2*a+b ) );
	cout << "the circle area is : " << area << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #31
	/*
	short num;
	cout << "please enter a number : ";
	cin >> num;

	cout << num << "^ 2 = ( " << num * num << " )\n";
	cout << num << "^ 3 = ( " << num * num * num << " )\n";
	cout << num << "^ 4 = ( " << num * num * num * num << " )\n\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #35
	/*
	short pennies;
	short nickels;
	short dimes;
	short quarters;
	short dollars;
	cout << "Enter how much money you have from : pennie,nickel,dime,quarter,dollar..calculate total Pennies and dollars.\n";
	cout << "pennies : "; cin >> pennies;
	cout << "nickels : "; cin >> nickels;
	cout << "dimes : "; cin >> dimes;
	cout << "quarters : "; cin >> quarters;
	cout << "dollars : "; cin >> dollars;
	cout << endl;
	cout << "----------------------------------------\n";
	short total_pennies = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
	cout << "you have total pennies : ( " << total_pennies << " )\n";
	cout << "you have total dollars : ( " << total_pennies/100 << " )\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #39
	/*
	short total_bill;
	short cash_paid;
	cout << "enter total bill : "; cin >> total_bill;
	cout << "enter cash paid : "; cin >> cash_paid;
	cout << "----------------------------------------\n";
	cout << "remainder to be paid back is : " << cash_paid - total_bill << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #40
	/*
	short bill_value;
	cout << "please enter a bill value : "; cin >> bill_value;
	cout << "----------------------------------------\n";
	float total_bill = bill_value *1.10 * 1.16;
	cout << "service fee is : 10%.\nsales tax is : 16%.\n\n";
	cout << "total bill is : " << total_bill;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #42
	/*
	short day_num;
	short hour_num;
	short minute_num;
	short second_num;
	cout << "enter days number : "; cin >> day_num;
	cout << "enter days hour : "; cin >> hour_num;
	cout << "enter days minute : "; cin >> minute_num;
	cout << "enter days second : "; cin >> second_num;
	cout << "------------------------------------------\n\n";
	int total_seconds = day_num * 24 * 60 * 60 + hour_num * 60 * 60 + minute_num * 60 + second_num;
	cout << "total work seconds is : " << total_seconds << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #43
	/*
	int total_seconds;
	cout << "please enter a number of seconds : ( "; cin >> total_seconds; cout << " )";
	int seconsPerDay = 24 * 60 * 60;
	short seconsPerHour = 60 * 60;
	short seconsPerMinute = 60;

	short numberOfDays = floor(total_seconds/seconsPerDay);

	short remainder = total_seconds % seconsPerDay;

	short numberOfhours = floor(remainder / seconsPerHour);

	remainder = remainder % seconsPerHour;

	short numberOfMinutes = floor(remainder / seconsPerMinute);

	remainder = remainder % seconsPerMinute;

	short numberOfSeconds = remainder;
	cout << "-----------------------------------------\n\n";
	cout << "total seconds is : " << numberOfDays << " : " << numberOfhours << " : " << numberOfMinutes << " : " << numberOfSeconds << endl;
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #47
	/*
	short loan_amount;
	short monthly_payment;
	cout << "please enter a total loan amount and monthly payment :\n";
	cout << "loan amount : "; cin >> loan_amount;
	cout << "monthly payment : "; cin >> monthly_payment;
	cout << "------------------------------------\n\n";
	cout << "you need to settle the loan : ( " << loan_amount / monthly_payment << " ) months.\n";
	*/
	//-------------------------------------------------------------------------------------
	// home work from algorithms #48
	/*
	short loan_amount;
	short howMany_months;
	cout << "please enter a total loan amount and how many months you need to settle the loan :\n";
	cout << "loan amount : "; cin >> loan_amount;
	cout << "how many months : "; cin >> howMany_months;
	cout << "------------------------------------\n\n";
	cout << "you need pay : ( " << loan_amount / howMany_months << " $ ) every month to settle the loan .\n";
	*/
	return 0;
}