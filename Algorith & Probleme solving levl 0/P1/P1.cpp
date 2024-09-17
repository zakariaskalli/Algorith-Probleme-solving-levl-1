

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// P8

/*

struct Home
{
	string NameHome;
	int EtageHome;
};

struct Adresing
{
	Home MyHome;
	string AdressHome;
	string Position;
};

struct Cantact {
	string Phone;
	string Email;
	string Fecebook;
};

struct MyInfo 
{
	Adresing Adress;
	string FamilyName;
	string Name;
	int Age;
	Cantact CantactInfo;
};

struct InfoPerso 
{
	MyInfo iformation;
	string City;
	string Country;
	int Monthly_Salary;
	int Yearly_Salary;
	Char Gender;
	bool Married;
};

*/
// P9

/*

enum enGendor {Male , Female };
enum enMarietelStatus {Married, Single};
enum enFavoriteColor {red, blue,green,yellow};

struct stAdress
{
	string POBOX;
	string ZipCode;
	string StreetName;
	string BuildingNo;
};

struct stContactInfo
{
	string Email;
	string Phone;

	stAdress Adress;
};


struct stPerson {
	string FirstName;
	string LastName;

	stContactInfo ContactInfo;
	enGendor Gendor;
	enMarietelStatus MarietelStatus;
	enFavoriteColor FavoriteColor;
};

*/
// P12

/*

void DisplayMyCartInfo() {
	
	cout << "  ***************************************\n";
	cout << "  Name: " << "Zakaria Skalli Houssaini.\n";
	cout << "  Age : " << 40 + 4 << " Years.\n";
	cout << "  City: " << "Morroco.\n";
	cout << "  Country: " << "Fes.\n";
	cout << "  ***************************************\n\n";
}

void PrintSqarStars() {
	cout << "  ********\n";
	cout << "  ********\n";
	cout << "  ********\n";
	cout << "  ********\n\n\n";
}

void PrintILoveProgramming() {
	cout << "  I Love Programming!" << endl << endl;
	cout << "  I promise to be the best developper ever!" << endl << endl;
	cout << "  I know it will take some time to practice, but I" << endl << "  will achieve my gool.";
	cout << endl << endl;
	cout << "  Best Regerds," << endl;
	cout << "  Zakaria Skalli Houssaini" << endl << endl;
}

void ProntH() {
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  * * * * *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
}


*/

// P13 
/*

void MySumProcedure() 
{

	int Number1 , Number2;

	cout << "PLease Enter Number1 : ";
	cin >> Number1;

	cout << "PLease Enter Number2 : ";
	cin >> Number2;
	
	cout << "********************************" << endl;
	cout << Number1 + Number2 << endl;

}

int MySumFunction() 
{

	int Number1 , Number2;

	cout << "PLease Enter Number1 : ";
	cin >> Number1;

	cout << "PLease Enter Number2 : ";
	cin >> Number2;

	cout << "*****************************" << endl;
	return Number1 + Number2;

}

*/

// P14

/*
struct strInfo
{
	string Name;
	int Age;
	string City;
	string Country;
	int Monthly_Salary;
	char Gender;
	bool Married;
};

void ReadInfo(strInfo &Info)
{
	cout << "Please Enter Your Name ==> ";
	cin.ignore(1, '\n');
	getline(cin, Info.Name);

	cout << "Please Enter Your Age ==> ";
	cin >> Info.Age;

	cout << "Please Enter Your City ==> ";
	cin >> Info.City;

	cout << "Please Enter Your Country ==> ";
	cin >> Info.Country;
	
	cout << "Please Enter Your Monthly Salary ==> ";
	cin >> Info.Monthly_Salary;

	cout << "Please Enter Your Gender M/F ==> ";
	cin >> Info.Gender;

	cout << "Please Enter Your Married 0/1 ==> ";
	cin >> Info.Married;
};

void PrintInfo(strInfo Info) {

	cout << "**************************************" << endl;
	cout << "Your Name Is : " << Info.Name << endl;
	cout << "Your Age Is : " << Info.Age << endl;
	cout << "Your City Is : " << Info.City << endl;
	cout << "Your Country Is : " << Info.Country << endl;
	cout << "Your Monthly Salary Is : " << Info.Monthly_Salary << endl;
	cout << "Your Yearly Salary Is : " << Info.Monthly_Salary * 12 << endl;
	cout << "Your Gender Is : " << Info.Gender << endl;
	cout << "Your Married Is : " << Info.Married << endl;
	cout << "**************************************" << endl;
	
}
*/

// P16

/*

void ReadGrades(float x[3])
{
	cout << "Please Enter Grade1 ==> ";
	cin >> x[0];

	cout << "Please Enter Grade1 ==> ";
	cin >> x[1];

	cout << "Please Enter Grade1 ==> ";
	cin >> x[2];
	
}

float CalculateAverageGrades(float x[3])
{
	return (x[0] + x[1] + x[2]) / 3;
}

void PrintAverageGrades(float x[3])
{
	cout << "The average of grades is : " << CalculateAverageGrades(x);
}
*/

// P17

/*
struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void EnterDataPerson(strInfo &InfoPersons)
{
	cout << "Please Enter your First Name ==> ";
	cin >> InfoPersons.FirstName;

	cout << "Please Enter your Last Name ==> ";
	cin >> InfoPersons.LastName;

	cout << "Please Enter your Age ==> ";
	cin >> InfoPersons.Age;

	cout << "Please Enter your Phone ==> ";
	cin >> InfoPersons.Phone;
};

void PrintDataPerson(strInfo InfoPersons)
{
	cout << "**********************************\n";
	
	cout << "FirstName : " << InfoPersons.FirstName << endl;
	cout << "LastName : " << InfoPersons.LastName << endl;
	cout << "Age : " << InfoPersons.Age << endl;
	cout << "Phone : " << InfoPersons.Phone << endl;
	
	cout << "**********************************\n";

};

void EnterDataPersons(strInfo InfoPersons[100], int& Lenght)
{
	cout << "Please Enter How many Persons's (1 to 100) : ";
	cin >> Lenght;

	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << "\nPlease Enter Person " << i+1 << " Info : \n";
		EnterDataPerson(InfoPersons[i]);
	};
};

void PrintDataPersons(strInfo InfoPersons[100], int Lenght)
{
	cout << "\n**********************************\n";

	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << "\nPerson Info " << i + 1 << endl;
		PrintDataPerson(InfoPersons[i]);
	};
};

*/

// P18

/*


	// Poj 1

enum enSystemColor { Red = 1,Blue = 2, Green = 3, Yellow = 4 };
	// Poj 2
enum enArabicState { Morroco = 1, Algerie = 2, Tunisia = 3, Libia = 4, Egypt = 5, Moritania = 6, Other = 7 };

*/

// P20

/*
void ReadNumberForUser(int Arr1[100], int& Lenght)
{
	cout << "PLease Enter NUmber 1 to 100 : ";
	cin >> Lenght;

	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << "Please Enter Number " << i + 1 << " : ";
		cin >> Arr1[i];
	};
};

void PrintNumberInOfScreen(int Arr1[100], int& Lenght)
{
	cout << "Your Numbers Is : " << endl;
	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << " - Number [" << i + 1 << "] : " << Arr1[i] << endl;
	};

}

int SumNumbersForArray(int Arr1[100], int Lenght) 
{
	int Sum = 0;

	for (int i = 0; i <= Lenght - 1; i++)
	{
		Sum += Arr1[i];
	};

	return Sum;
}

float AverageForArray(int Arr1[100], int Lenght)
{
	return (float)SumNumbersForArray(Arr1, Lenght) / Lenght ;
}
*/

// P22

// HomeWork 2

/*

int ChekNumberPositifUsingWhile()
{
	int Number;

	cout << "Please Enter number positif : ";
	cin >> Number;

	while (Number < 0)
	{
		cout << "Wrong Number , Enter number positif : ";
		cin >> Number;
	}
	return Number;
}

int ChekNumberPositifUsingDoWhile()
{
	int Number;
	do {
		cout << "Please Enter number positif : ";
		cin >> Number;
	} while (Number < 0);

	return Number;
}

*/

// HomeWork 3

/*

int ChekNumberBetweenTwoUsingWhile(int From, int To)
{
	int Number;

	cout << "Please Enter Number From " << From << " To " << To << " : ";
	cin >> Number;

	while (Number <= From || Number >= To)
	{
		cout << "Wrong Number , Enter Number From " << From << " To " << To << " : ";
		cin >> Number;
	}

	return Number;
}

int ChekNumberBetweenTwoUsingDoWhile(int From, int To)
{
	int Number;

	do {

	cout << "Please Enter Number From " << From << " To " << To << " : ";
	cin >> Number;

	} while (Number <= From || Number >= To);


	return Number;
}

*/

int main()
{
	// P1
	/*
	
	// This the homework 1

	cout << "  ***************************************\n";
	cout << "  Name: " << "Zakaria Skalli Houssaini.\n";
	cout << "  Age : " << 40+4 << " Years.\n";
	cout << "  City: " << "Morroco.\n";
	cout << "  Country: " << "Fes.\n";
	cout << "  ***************************************\n\n";
	
	// This the homework 2

	cout << "   2 ***************************************\n\n";
	cout << "  ********\n";
	cout << "  ********\n";
	cout << "  ********\n";
	cout << "  ********\n\n\n";
	
	// This the homework 3
	
	cout << "   3 ***************************************\n\n";
	cout << "  I Love Programming!" << endl << endl ;
	cout << "  I promise to be the best developper ever!" << endl << endl;
	cout << "  I know it will take some time to practice, but I" << endl << "  will achieve my gool.";
	cout << endl << endl;
	cout << "  Best Regerds," << endl;
	cout << "  Zakaria Skalli Houssaini" << endl << endl;
	
	// This the homework 4

	cout << "   4 ***************************************\n\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  * * * * *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	cout << "  *       *\n";
	
	
	
	*/
	                                            // P2
	/*
	
	// Home work 1
	cout << "\a";

	// Home work 2

	cout << "  Dear Sir\\Madam," << endl << endl;
	cout << "  How are you?" << endl << endl;
	cout << "  My name is \"Zakaria\" , nice to meet you." << endl << endl;
	// Home work 3

	cout << "  Ali\tAhmed\tLina\n ";
	cout << " Fadi\tZain\tMona";

	*/
	                                            // P3
	/*

	// Home Work 1

	// Age , My_Age , _Age ,  , MyName is Yes
	// My-Age , 2X , My NAme , #Name , $Name , N@me , int , floot is No

	// Home Work 2

	string Name = "Zakaria Skalli Houssaini.";
	short unsigned int Age = 16;
	string City = "Morroco";
	string Country = "Fes";
	short unsigned int Monthly_Salary = 5000;
	short unsigned int Yearly_Salary = Monthly_Salary * 12;
	unsigned char Gender = 'M';
	bool Married = false;

	cout << "***********************************\n";
	cout << "Name : " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "City : " << City << endl;
	cout << "Monthly Salary : " << Monthly_Salary << endl;
	cout << "Yearthly Salary : " << Yearly_Salary << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << Married << endl;
	cout << "***********************************\n";


	// Home Work 3

	short int Number_1 = 20;
	short int Number_2 = 30;
	short int Number_3 = 10;
	int Total = Number_1 + Number_2 + Number_3;


	cout << Number_1 << " + " << endl;
	cout << Number_2 << " + " << endl;
	cout << Number_3 << endl;
	cout << "------------------------" << endl;
	cout << "Total = " << Total << endl;



	// Home Work 4

	cout << endl << endl;

	short unsigned int Age_4 = 25;  //because home work 4

	cout << "After 5 years you will be " << Age_4 + 5 << " years old." << endl << endl;

	*/
	                                            // P4
	/*
	// Home Work 1

	string Name;
	short unsigned int Age;
	string City;
	string Country;
	short unsigned int Monthly_Salary;
	char Gender;
	bool Married;

	cout << "What is your Name ==> ";
	cin >> Name;

	cout << "What is your Age ==> ";
	cin >> Age;

	cout << "What is your City ==> ";
	cin >> City;

	cout << "What is your Country ==> ";
	cin >> Country;

	cout << "What is your Monthly Salary ==> ";
	cin >> Monthly_Salary;

	cout << "What is your Gender M/F ==> ";
	cin >> Gender;

	cout << "You Are Married 0/1 ==> ";
	cin >> Married;


	cout << "***********************************" << endl;
	cout << "Name : " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "City : " << City << endl;
	cout << "Monthly Salary : " << Monthly_Salary << endl;
	cout << "Yearthly Salary : " << Monthly_Salary * 12 << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << Married << endl;
	cout << "***********************************" << endl;

	// Home work 2

	short int Number_1;
	short int Number_2;
	short int Number_3;

	cout << "Enter Number 1 ==> ";
	cin >> Number_1;

	cout << "Enter Number 2 ==> ";
	cin >> Number_2;

	cout << "Enter Number 3 ==> ";
	cin >> Number_3;

	cout << Number_1 << " +" << endl;
	cout << Number_2 << " +" << endl;
	cout << Number_3 << endl;
	cout << "--------------------" << endl;
	cout << "Total = " << Number_1 + Number_2 + Number_3 << endl;

	// Home Work 3


	short unsigned int Age_3;

	cout << "enter years for you ==> ";
	cin >> Age_3;

	cout << "After 5 years you will be " << Age_3 + 5 << " years old." << endl << endl;

	*/
												// P5
	/*

	// Home Work 1

	int Number_A;
	int Number_B;

	cout << "Please enter the first Number A?" << endl;
	cin >> Number_A;

	cout << "Please enter the first Number B?" << endl;
	cin >> Number_B;
	cout << endl;

	cout << Number_A << " + " << Number_B << " = " << Number_A + Number_B << endl;
	cout << Number_A << " - " << Number_B << " = " << Number_A - Number_B << endl;
	cout << Number_A << " * " << Number_B << " = " << Number_A * Number_B << endl;
	cout << Number_A << " / " << Number_B << " = " << Number_A / Number_B << endl;
	cout << Number_A << " % " << Number_B << " = " << Number_A % Number_B << endl;

	*/
											 	// P6
	/*


	int A;
	int B;

	cout << "Please enter the first number A : ";
		cin >> A;

	cout << "Please enter the first number B : ";
		cin >> B;

	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << "is " << (A <= B) << endl;


	*/
												// P7
	/*

	// Home work 1

	cout << (12 >= 12) << endl;
	cout << (12 > 7)  << endl;
	cout << (8 < 6) << endl;
	cout << (8 == 8) << endl;
	cout << (12 <= 12) << endl;
	cout << (7 == 5) << endl;
	cout << (!(12 >= 12)) << endl;
	cout << (!(12 < 7)) << endl;
	cout << (!(8 < 6)) << endl;
	cout << (!(8 == 8)) << endl;
	cout << (!(12 <= 12)) << endl;
	cout << (!(7 == 5)) << endl;
	cout << (1 && 1) << endl;
	cout << (1 && 0) << endl;
	cout << (0 || 1) << endl;
	cout << (0 || 0) << endl;
	cout << (!0) << endl;
	cout << (!(1 || 0)) << endl;
	cout << ((7 == 7) && (7 > 5)) << endl;
	cout << ((7 == 7) && (7 < 5)) << endl;
	cout << ((7 == 7) || (7 > 5)) << endl;
	cout << ((7 == 7) || (7 < 5)) << endl;
	cout << (!(7 == 7) && (7 > 5)) << endl;
	cout << ((7 == 7) && !(7 < 5)) << endl;
	
	cout << endl << "************************" << endl << endl;

	// Homework 2

	cout << (  ( (5 > 6) && (7 == 7) ) || (1 || 0)  ) << endl ;
	cout << (  !( (5 > 6) && (7 == 7) ) || (1 || 0)  ) << endl ;
	cout << (  !( (5 > 6) && (7 == 7)) || !(1 || 0)  ) << endl ;
	cout << (  !( (5 > 6) && (7 == 7)) && !(1 || 0)  ) << endl ;
	cout << ( (((5 > 6) && (7 <= 8)) || ( (8 > 1) && (4 <= 3) )) && (1) )  << endl ;
	cout << ( (((5 > 6) && (!(7 <= 8))) && ((8 > 1) || (4 <= 3))) || (1) )  << endl ;

	*/	
												// P8

	/*
	InfoPerso MyInfo;


	cout << "What is your First Name ==> ";
	cin >> MyInfo.iformation.Name;

	cout << "What is your Family Name ==> ";
	cin >> MyInfo.iformation.FamilyName;

	cout << "What is your Age ==> ";
	cin >> MyInfo.iformation.Age;

	cout << "What is your City ==> ";
	cin >> MyInfo.City;

	cout << "What is your Country ==> ";
	cin >> MyInfo.Country;

	cout << "What is your Monthly Salary ==> ";
	cin >> MyInfo.Monthly_Salary;

	cout << "What is your Phone ==> ";
	cin >> MyInfo.iformation.CantactInfo.Phone;

	cout << "What is your Email ==> ";
	cin >> MyInfo.iformation.CantactInfo.Email;

	cout << "What is your Fecebook ==> ";
	cin >> MyInfo.iformation.CantactInfo.Fecebook;

	cout << "What is your Adress Home ==> ";
	cin >> MyInfo.iformation.Adress.AdressHome;

	cout << "What is your Position ==> ";
	cin >> MyInfo.iformation.Adress.Position;

	cout << "What is your Name Home ==> ";
	cin >> MyInfo.iformation.Adress.MyHome.NameHome;

	cout << "What is your Name Etage Home ==> ";
	cin >> MyInfo.iformation.Adress.MyHome.EtageHome;

	cout << "You Are Gender M/F ==> ";
	cin >> MyInfo.Gender;

	cout << "You Are Married 0/1 ==> ";
	cin >> MyInfo.Married;


	cout << "***********************************" << endl;
	cout << "Your is First Name : " << MyInfo.iformation.Name << endl;
	cout << "Your is Family Name : " << MyInfo.iformation.FamilyName << endl;
	cout << "Your is Age : " << MyInfo.iformation.Age << endl;
	cout << "Your is City : " << MyInfo.City << endl;
	cout << "Your is Country : " << MyInfo.Country << endl;
	cout << "Your is Monthly Salary : " << MyInfo.Monthly_Salary << endl;
	cout << "Your is Yearthly Salary : " << MyInfo.Monthly_Salary * 12 << endl;
	cout << "Your is Phone : " << MyInfo.iformation.CantactInfo.Phone << endl;
	cout << "Your is Email : " << MyInfo.iformation.CantactInfo.Email << endl;
	cout << "Your is Fecbook : " << MyInfo.iformation.CantactInfo.Fecebook << endl;
	cout << "Your is Adress Home : " << MyInfo.iformation.Adress.AdressHome << endl;
	cout << "Your is Position : " << MyInfo.iformation.Adress.Position << endl;
	cout << "Your is Name Home : " << MyInfo.iformation.Adress.MyHome.NameHome << endl;
	cout << "Your is Etage Home : " << MyInfo.iformation.Adress.MyHome.EtageHome << endl;
	cout << "Your is Gender : " << MyInfo.Gender << endl;
	cout << "Your is Married : " << MyInfo.Married << endl;
	cout << "***********************************" << endl;

	*/

												// P9 
	/*

	stPerson Person1 , Person2 ;
	
	Person1.FirstName = "Mohammed";
	Person1.LastName = "Abu-Hadhoud";

	Person1.ContactInfo.Email = "xyz@xyz.com";
	Person1.ContactInfo.Phone = "+961000000999";
	Person1.ContactInfo.Adress.POBOX = "7777";
	Person1.ContactInfo.Adress.ZipCode = "11194";
	Person1.ContactInfo.Adress.StreetName = "Queen1 Street";
	Person1.ContactInfo.Adress.BuildingNo = "313";

	Person1.Gendor = enGendor::Male;
	Person1.MarietelStatus = enMarietelStatus::Married;
	Person1.FavoriteColor = enFavoriteColor::green;

	cout << Person1.ContactInfo.Email << endl;

	Person2.FirstName = "Zakaria Skalli";
	Person2.LastName = "Skalli Houssaini";
	Person2.ContactInfo.Email = "zakariaskalli@gmail.com";
	Person2.ContactInfo.Phone = "0666736152";
	Person2.ContactInfo.Adress.POBOX = "5212";
	Person2.ContactInfo.Adress.ZipCode = "1231254";
	Person2.ContactInfo.Adress.StreetName = "Ain Chkeff";
	Person2.ContactInfo.Adress.BuildingNo = "333";

	Person2.Gendor = enGendor::Male ;
	Person2.MarietelStatus = enMarietelStatus::Single;
	Person2.FavoriteColor = enFavoriteColor::green;

	cout << Person2.ContactInfo.Adress.StreetName;
	
	*/
												// P10
    /*

    string st1 = "43.22";

	double str_to_double = stod(st1);
	float str_to_float = stof(st1);
	int str_to_int = stoi(st1);

	cout << str_to_double << endl;
	cout << str_to_float << endl;
	cout << str_to_int << endl;

	int N1 = 20;

	string int_to_string = to_string(N1);
	cout << int_to_string << endl;

	double N2 = 33.5;

	string double_to_string = to_string(N2);
	cout << double_to_string << endl;

	float N3 = 55.23;

	string float_to_string = to_string(N3);
	cout << float_to_string << endl;

	int int_to_float;

	int_to_float = N3;
	int_to_float = (int) N3;
	int_to_float = int(N3);

	cout << int_to_float << endl;


	*/
												// P11
	/*
	
	string String1, String2, String3;
	
	cout << "Please enter String1 : ";
	getline(cin, String1);

	cout << "Please enter String2 : ";
	getline(cin, String2);

	cout << "Please enter String3 : ";
	getline(cin, String3);
 

	cout << "*****************************" << endl;
	cout << "The Length of String1 is " << String1.length() << endl;
	cout << "Characters at 0,2,4,7 ara : " << String1[0] << " " << String1[2] << " " << String1[4] << " " << String1[7] << endl;
	
	string Str_Concatination = String2 + String3;

	cout << "Concaterating String2 and String3 = " << Str_Concatination << endl;
	
	int Multiplication = stoi(String2) * stoi(String3);

	cout << String2 << " * " << String3 << " = " << Multiplication << endl;
	
	*/
												// P12 
	/*

	DisplayMyCartInfo();
	PrintSqarStars();
	PrintILoveProgramming();
	ProntH();

	*/
												// P13
	/*
	MySumProcedure();

	cout << MySumFunction() << endl;
	*/
												// P14
	/*
	strInfo(Person1Info);
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
	*/
												// P15
	/*

	float Grades[3];

	cout << "Please Enter Grade1 ==> ";
	cin >> Grades[0];

	cout << "Please Enter Grade1 ==> ";
	cin >> Grades[1];

	cout << "Please Enter Grade1 ==> ";
	cin >> Grades[2];

	float average = (Grades[0] + Grades[1] + Grades[2]) / 3;

	cout << "***********************************" << endl;
	cout << "The average of grades is : " << average << endl;

	return 0;
	*/

												// P16

	/*
	float x[3]; // x = Grades

	ReadGrades(x);

	CalculateAverageGrades(x);

	PrintAverageGrades(x);

	*/

												// P17

	/*

	int Lenght = 0;
	strInfo InfoPersons[100];


	EnterDataPersons(InfoPersons , Lenght);
	PrintDataPersons(InfoPersons, Lenght);
	
	*/

												// P18

	/*

	int x;

	cout << "Please enter your number? \n";
	cin >> x;


	if (x > 5)
	{
		cout << "Yes, X is grator than 5 " << endl;
	}
	else
	{
		cout << "No, X is less than 5 " << endl;
	}

	cout << "The code after if body always exuted." << endl;

	*/

												// P19

	/*

	// Poj 1

	cout << "Enter Number IN this ?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "***************************\n";
	cout << "Enter Number : ";

	int x;
	enSystemColor Color;

	cin >> x;
	Color = (enSystemColor)x;

	if (Color == enSystemColor::Red)
	{
		system("Color 4F");
	}
	else if (Color == enSystemColor::Blue)
	{
		system("Color 1F");
	}
	else if (Color == enSystemColor::Green)
	{
		system("Color 2F");
	}
	else if (Color == enSystemColor::Yellow)
	{
		system("Color 6F");
	}
	else
	{
		cout << "Please Enter Number 1 to 4" << endl;
	}

	// Poj 2

	cout << "Enter Number IN this ?\n";
	cout << "(1) Morroco\n";
	cout << "(2) Algerie\n";
	cout << "(3) Tunisia\n";
	cout << "(4) Libia\n";
	cout << "(5) Egypt\n";
	cout << "(6) Moritania\n";
	cout << "(7) Other\n";
	cout << "***************************\n";
	cout << "Enter Number : ";

	int c;
	enArabicState ArbicState;

	cin >> c;
	ArbicState = (enArabicState)c;

	if (ArbicState == enArabicState::Morroco)
	{
		cout << "Your Country Is Morroco" << endl;
	}
	else if (ArbicState == enArabicState::Algerie)
	{
		cout << "Your Country Is Algerie" << endl;
	}
	else if (ArbicState == enArabicState::Tunisia)
	{
		cout << "Your Country Is Tunisia" << endl;
	}
	else if (ArbicState == enArabicState::Libia)
	{
		cout << "Your Country Is Libia" << endl;
	}
	else if (ArbicState == enArabicState::Egypt)
	{
		cout << "Your Country Is Egypt" << endl;
	}
	else
	{
		cout << "Your Country Is Other" << endl;
	};
	*/

												// P20

												// P20

	/*

	int Arr1[100], Lenght = 0;

	ReadNumberForUser(Arr1 , Lenght);
	
	PrintNumberInOfScreen(Arr1, Lenght);


	cout << "Sum This Numbers Is : " << SumNumbersForArray(Arr1, Lenght) << endl;
	cout << "Average Numbers Is : " << AverageForArray(Arr1, Lenght) << endl;

	*/

												// P21
	
	// Home work 1

	/*
	int NumMultitable;

	cout << "Please Enter Number For Table Mutplication : ";
	cin >> NumMultitable;

	for (int i = 1; i <= NumMultitable; i++)
	{
		cout << "i = " << i << endl;

		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << "--------------------------------\n";
	}
	*/

	// Home work 2

	/*
	
	for (int i = 65; i <= 90; i++)
	{
		cout << "Letter : " << char(i) << endl;

		for (int j = 65; j <= 90; j++)
		{
				cout << char(i) << char(j) << endl;

		};

		cout << "---------------------------------\n";
	};

	*/

	// Home work 3

	/*
	for (int i = 10; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

	// Home work 4

	/*
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	*/
	
	// Home work 5
	
	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	*/

	// Home work Me	

	/*

	long long Number;

	cout << "Plese Enter Number : ";
	cin >> Number;

	long long Sum = 0;

	// Long Methode
	
	
	//for (int i = 0; i <= Number; i++)
	//{
	//	cout << i ;
	//	if (i < Number)
	//	{
	//		cout << " + ";
	//	}
	//}

	//for (long long j = 0; j <= Number; j++)
	//{
	//	Sum += j;
	//	
	//}
	//cout << "= " << Sum << endl;
	

	// Cout Methode

	
	//Sum = (Number + 1) * Number / 2;
	//cout << "Total is = " << Sum << endl;
	

	if (Sum >= pow(10,3) && Sum < pow(10, 6))
	{
		cout << Sum / pow(10, 3) << " * 10^3";
	}
	else if (Sum >= pow(10, 6) && Sum < pow(10, 9))
	{
		cout << Sum / 1000000 << " * 10^6";
	}
	else if (Sum >= pow(10, 9) && Sum < pow(10, 12))
	{
		cout << Sum / pow(10, 9) << " * 10^9";
	}
	else if (Sum >= pow(10, 12) && Sum < pow(10, 15))
	{
		cout << Sum / pow(10, 12) << " * 10^12";
	}
	else if (Sum >= pow(10, 15) && Sum < pow(10, 18))
	{
		cout << Sum / pow(10, 15) << " * 10^15";
	}
	else if (Sum >= pow(10, 18) && Sum < pow(10, 21))
	{
		cout << Sum / pow(10, 18) << " * 10^18";
	}
	else if (Sum >= pow(10, 21) && Sum < pow(10, 24))
	{
		cout << Sum / pow(10, 21) << " * 10^21";
	}*/

	// Home work 6
	
	/*
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j) << " ";
		}
		cout << "\n";
	}
	*/

	// Home work 7

	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	*/

											// P22

	// Home work 1

	/*
	// For Loop	
	
	cout << "For Loop" << endl;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}

	// While Loop	

	cout << "While Loop" << endl;
	int i = 1;
	while (i <= 5)
	{
		cout << i << endl;
		i++;
	}
	*/

	// Home work 2

	/*

	cout << "This Number Is : " << ChekNumberPositifUsingWhile() << endl;
	cout << "This Number Is : " << ChekNumberPositifUsingDoWhile() << endl;
	
	*/

	// Home work 3

	/*
	cout << "The Number Is is : " << ChekNumberBetweenTwoUsingWhile(18, 45) << endl;
	cout << "The Number Is is : " << ChekNumberBetweenTwoUsingDoWhile(18, 45) << endl;
	*/

											// P23

	/*

	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	
	int x;

	for (int i = 0; i < 10; i++)
	{
		x = arr[i];

		if (x == 20)
		{
			cout << "Position 20 in This Array is : " << i << endl;
			break;
		}
		
	}
	*/

	// P24	
	
	/*
	
	int sum = 0;

	int Number;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Please Enter Number " << i << " : ";
		cin >> Number;

		if (Number >= 50)
		{
			cout << "The number is greater and won4t be caluculate sum." << endl;
			continue;
		}

		sum += Number;

	}

	cout << "Total Number is : " << sum << endl;

	*/

};

