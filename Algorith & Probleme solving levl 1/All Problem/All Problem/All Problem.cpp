
#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

// Problem 1

/*

void PrintMyName(string Name)
{
	cout << "My Name is " << Name;
}

*/

// Problem 2

/*

string ReadName()
{
	string Name;

	cout << "Please Enter Your Name : ";
	getline(cin, Name);
	return Name;
}

void PrintName(string Name)
{
	
	cout << "\n Your Name is : " << Name;
}

*/

// Problem 3

/*

enum enNumberType { Odd = 1, Even = 2};

int ReadNumber()
{
	int Num;

	cout << "Please Enter Number : ";
	cin >> Num;
	return Num;
}

enNumberType ChekNumberType(int Num) {

	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType) {

	if (NumberType == enNumberType::Even)
		cout << "\n Number is Even. \n";
	else
		cout << "\n Number is Odd. \n";

}

*/

// Problem 4

/*

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo()
{

	stInfo Info;

	cout << "Please Enter your Age : ";
	cin >> Info.Age;

	cout << "Please your Are A Driver license 0/1 : ";
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccespted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccespted(Info))
	{
		cout << "\n Hired \n";
	}
	else 
	{
		cout << "\n Rejected \n";
	}
}

*/

// Problem 5

/*

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo()
{

	stInfo Info;

	cout << "Please Enter your Age : ";
	cin >> Info.Age;

	cout << "Please your Are A Driver license 0/1 : ";
	cin >> Info.HasDrivingLicense;

	cout << "Please your Has Recomendation 0/1 : ";
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccespted(stInfo Info)
{
	if (Info.HasRecommendation)
		return true;
	else
		return (Info.Age > 21 && Info.HasDrivingLicense);

}

void PrintResult(stInfo Info)
{
	if (IsAccespted(Info))
	{
		cout << "\n Hired \n";
	}
	else
	{
		cout << "\n Rejected \n";
	}
}

*/

// Problem 6

/*
struct stInfo
{
	string FirstName;
	string LastName;
	bool reversed;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your First Name : ";
	getline(cin , Info.FirstName);

	cout << "Please enter your Last Name : ";
	getline(cin, Info.LastName);

	cout << "Please enter your Full Name Reversed 0/1 : ";
	cin >> Info.reversed;

	return Info;
}

string GetFullNeme(stInfo Info)
{
	string FullName = "";

	if(Info.reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{

	cout << "\n Your Full Name is : " << FullName << endl;

}
*/

// Problem 7

/*

int ReadNumber()
{
	int Num;

	cout << "Please Enter Number : ";
	cin >> Num;
	return Num;
}

float CalculateHalfNumber(int Num)
{
	return (float)Num / 2;
}

void PrintResults(int Num)
{
	string Result = "Half of " + to_string(Num) + " is : " + to_string(CalculateHalfNumber(Num));
	cout << Result << endl;
}

*/

// Problem 8

/*

enum enPassFail { Pass = 1, Fail = 2};

int ReadMark()
{
	int Mark;

	cout << "Please Enter your Mark : ";
	cin >> Mark;
	return Mark;

}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark)
{

	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Pased" << endl;
	else
		cout << "\n You Failed" << endl;

}

*/

// Problem 9

/*

void ReadNumbers(int ArrNum[3])
{
	cout << "Enter Number 1 ==> ";
	cin >> ArrNum[0];

	cout << "Enter Number 2 ==> ";
	cin >> ArrNum[1];

	cout << "Enter Number 3 ==> ";
	cin >> ArrNum[2];

}

int SumOf3Numbers(int ArrNum[3])
{
	return ArrNum[0] + ArrNum[1] + ArrNum[2];
}

void PrintResults(int Total)
{
	cout << "\n The total sum of numbers is : " << Total << endl;
}

*/

// Problem 10

/*

void ReadNumbers(int ArrNum[3])
{
	cout << "Enter Number 1 ==> ";
	cin >> ArrNum[0];

	cout << "Enter Number 2 ==> ";
	cin >> ArrNum[1];

	cout << "Enter Number 3 ==> ";
	cin >> ArrNum[2];

}

int SumOf3Numbers(int ArrNum[3])
{
	return ArrNum[0] + ArrNum[1] + ArrNum[2];
}

float CalculateAverage(int ArrMark[3])
{
	return (float)SumOf3Numbers(ArrMark) / 3;
}

void PrintResults(float Average)
{
	cout << "\n The Average of Marks is : " << Average << endl;
}

*/

// Problem 11

/*

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int ArrNum[3])
{
	cout << "Enter Number 1 ==> ";
	cin >> ArrNum[0];

	cout << "Enter Number 2 ==> ";
	cin >> ArrNum[1];

	cout << "Enter Number 3 ==> ";
	cin >> ArrNum[2];

}

int SumOf3Numbers(int ArrNum[3])
{
	return ArrNum[0] + ArrNum[1] + ArrNum[2];
}

float CalculateAverage(int ArrMark[3])
{
	return (float)SumOf3Numbers(ArrMark) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Average)
{
	cout << "\n The Average of Marks is : " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\n you Passed" << endl;
	else
		cout << "\n You Faild" << endl;
}

*/

// Problem 12

/*

void ReadNumbers(int &Num1 , int &Num2)
{
	cout << "Please Enter Number 1 : ";
	cin >> Num1;

	cout << "Please Enter Number 2 : ";
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{

	if (Num1 > Num2)
		return Num1;
	else
		return Num2;

}

void PrintResults(int Max)
{
	cout << "\n The Maximum Number is : " << Max << endl;
}

*/

// Problem 13

/*

void ReadNumbers(int Num[3])
{
	cout << "Please Enter Number 1 : ";
	cin >> Num[0];

	cout << "Please Enter Number 2 : ";
	cin >> Num[1];

	cout << "Please Enter Number 3 : ";
	cin >> Num[2];
}

int MaxOf3Numbers(int Num[3])
{

	if (Num[0] > Num[1])
		if (Num[0] > Num[2])
			return Num[0];
		else
			return Num[2];
	else 
		if (Num[1] > Num[2])
			return Num[1];
		else
			return Num[2];

}

string NumberOFMaxNumber(int Num[3])
{

	if (Num[0] > Num[1])
		if (Num[0] > Num[2])
			return "(Number 1)";
		else
			return "(Number 3)";
	else
		if (Num[1] > Num[2])
			return "(Number 2)";
		else
			return "(Number 3)";

}

void PrintResults(int Max, string NumOfNum)
{
	if (Max)
	cout << "\n The Maximum Number is " << NumOfNum << " : " << Max << endl;
}

*/

// Problem 14

/*

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number A : ";
	cin >> Num1;

	cout << "Please Enter Number B : ";
	cin >> Num2;

}

void SwapNumber(int& A, int&B)
{
	int Swap;

	Swap = A;
	A = B;
	B = Swap;
}

void PrintNumber(int Num1 ,int Num2)
{
	cout << "\n Number A : " << Num1 << endl;
	cout << " Number B : " << Num2 << endl;
}

*/

// Problem 15

/*

void ReadNumbers(float& A, float& B)
{
	cout << "Enter Width Rectangle : ";
	cin >> A;

	cout << "Enter Lang Rectangle : ";
	cin >> B;

}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

*/

// Problem 16

/*

void ReadNumbers(float& A, float& D)
{
	cout << "Enter Width Rectangle : ";
	cin >> A;

	cout << "Enter Diagonale Rectangle : ";
	cin >> D;

}

float RectangleAreaBySideAndDiagonale(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

*/

// Problem 17

/*

void ReadNumbers(float& A, float& H)
{
	cout << "Enter Triangle Base : ";
	cin >> A;

	cout << "Enter Triangle Height : ";
	cin >> H;

}

float TriangleArea(float A, float H)
{
	float Area = (A / 2) * H;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Tringle Area = " << Area << endl;
}

*/

// Problem 18

/*

float ReadRadious()
{

	float R;

	cout << "PLease Enter Radious : " << endl;
	cin >> R;

	return R;
}

float CircleArea(float R)
{
	const double PI = 3.141592653589793238;

	float Area = pow(R, 2) * PI;

	return Area;
}

void PrintResult(float Area)
{

	cout << "\n Circle Area = " << Area << endl;

}

*/

// Problem 19

/*

float ReadDiameter()
{
	float D;
	
	cout << "Please Enter Diameter D : ";
	cin >> D;

	return D;
}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.141592653589793238;

	float Area = (pow(D, 2) * PI) / 4;

	return Area;
}

void PrintResults(float Area)
{

	cout << "\n Circle Area is : " << Area << endl;

}

*/

// Problem 20

/*

float ReadSquareSide()
{
	float A;

	cout << "Please Enter Square Side : ";
	cin >> A;

	return A;
}

float CircleAreaInscribeInSquare(float A)
{
	const float PI = 3.141592653589793238;

	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintResults(float Area)
{

	cout << "\n Circle Area is : " << Area << endl;

}

*/

// Problem 21

/*

float ReadCurcumfrence()
{
	float L;

	cout << "Please Enter Curcum frence : ";
	cin >> L;

	return L;
}

float CircleAreaByCurcumrence(float L)
{
	const float PI = 3.141592653589793238;

	float Area = pow(L , 2) / (4 * PI);

	return Area;
}

void PrintResults(float Area)
{

	cout << "\n Circle Area is : " << Area << endl;

}

*/

// Problem 22

/*

void ReadTringleData(float& A, float& B)
{

	cout << "Enter Triangle Side A : ";
	cin >> A;

	cout << "Enter Triangle Side B : ";
	cin >> B;
}

float CircleAreaByITriangle(float A, float B)
{
	const float PI = 3.141592653589793238;

	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResults(float Area)
{

	cout << "\n Circle Area is : " << Area << endl;

}

*/

// Problem 23

/*

void ReadTringleData(float& A, float& B, float& C)
{

	cout << "Enter Triangle Side A : ";
	cin >> A;

	cout << "Enter Triangle Side B : ";
	cin >> B;

	cout << "Enter Triangle Side C : ";
	cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C)
{
	const float PI = 3.141592653589793238;

	float P = (A + B + C) / 2;

	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResults(float Area)
{

	cout << "\n Circle Area is : " << Area << endl;

}

*/

// Problem 24

/*

int ReadAge()
{
	int Age;

	cout << "PLease Enter your Age : ";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";
	else
		cout << Age << " is invalidate age \n";
}

*/

// Problem 25

/*

int ReadAge()
{
	int Age;

	cout << "PLease Enter your Age : ";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int RestartQuestionInFalseNumber(int From, int To)
{
	int Age = 0;

	do {

		Age = ReadAge();

	}while (!ValidateNumberInRange(Age, From, To));
	
	return Age;
}

void PrintResult(int Age)
{
	cout << Age << " is a valid age \n";
}

*/

// Problem 26

/*

int ReadNumber()
{
	int Number;

	cout << "Please Enter Number : ";
	cin >> Number;

	return Number;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
	int Counter = 0;

	cout << "Number From 1 to "<< N << " using While : \n";

	while (Counter < N)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	int Counter = 0;

	cout << "Number From 1 to " << N << " using Do While : \n";

	do {

		Counter++;
		cout << Counter << endl;

	}while (Counter < N);

}

void PrintRangeFrom1toN_UsingForLoop(int N)
{
	int Counter = 1;

	cout << "Number From 1 to " << N << " using For Loop : \n";

	for (Counter; Counter <= N; Counter++) 
	{
		cout << Counter << endl;
	}

}

*/

// Problem 27

/*

int ReadNumber()
{
	int Number;

	cout << "Please Enter Number : ";
	cin >> Number;

	return Number;
}

void PrintRangeFromNto1_UsingWhile(int N)
{
	int Counter = N + 1;

	cout << "Number From " << N << " to 1 using While : \n";

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFromNto1_UsingDoWhile(int N)
{
	int Counter = N +1;

	cout << "Number From " << N << " to 1 using Do While : \n";

	do {

		Counter--;
		cout << Counter << endl;

	}while (Counter > 1);

}

void PrintRangeFromNto1_UsingForLoop(int N)
{
	int Counter = N;

	cout << "Number From " << N << " to 1 using For Loop : \n";

	for (Counter; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}

}

*/

// Problem 28

/*

enum enOddOrEven {Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;

	cout << "Please Enter Number : ";
	cin >> N;

	return N;
}

enOddOrEven ChekOddOrEven(int N)
{
	if (N % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

void SumOddNumber1ToN_usingWhile(int N)
{
	int Counter = 0;
	int Sum = 0;

	

	while (Counter < N)
	{
		Counter++;
		if (ChekOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}
	cout << "Total Sum Odd Number From 1 To " << N << " Using While is : " << Sum << endl;
}

void SumOddNumber1ToN_usingDoWhile(int N)
{
	int Counter = 0;
	int Sum = 0;
	
	do {
		Counter++;

		if (ChekOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}while (Counter < N);

	cout << "Total Sum Odd Number From 1 To " << N << " Using Do..While is : " << Sum << endl;
}

void SumOddNumber1ToN_usingForLoop(int N)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (ChekOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}

	cout << "Total Sum Odd Number From 1 To " << N << " Using For Loop is : " << Sum << endl;
}

*/

// Problem 29

/*

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;

	cout << "Please Enter Number : ";
	cin >> N;

	return N;
}

enOddOrEven ChekOddOrEven(int N)
{
	if (N % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

void SumEvenNumber1ToN_usingWhile(int N)
{
	int Counter = 0;
	int Sum = 0;



	while (Counter < N)
	{
		Counter++;
		if (ChekOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}
	cout << "Total Sum Even Number From 1 To " << N << " Using While is : " << Sum << endl;
}

void SumEvenNumber1ToN_usingDoWhile(int N)
{
	int Counter = 0;
	int Sum = 0;

	do {
		Counter++;

		if (ChekOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	} while (Counter < N);

	cout << "Total Sum Even Number From 1 To " << N << " Using Do..While is : " << Sum << endl;
}

void SumEvenNumber1ToN_usingForLoop(int N)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (ChekOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}

	cout << "Total Sum Even Number From 1 To " << N << " Using For Loop is : " << Sum << endl;
}

*/

// Problem 30

/*

int ReadAPositifNumber(string Message) {
	int N;
	do {

		cout << Message;
		cin >> N;

	} while (N < 0);

	return N;
};

int Factorial(int N)
{
	int F = 1;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		F = F * Counter;
	}

	return F;
}

*/

// Problem 31

/*

int ReadNumber()
{
	int N;

	cout << "Please Enter Number : ";
	cin >> N;

	return N;
}

void PowerOf2_3_4(int Number)
{
	int a, b, c;

	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;

	cout << a << " " << b << " " << c << endl;
}

*/

// Problem 32

/*

int ReadNumber()
{
	int N;

	cout << "Please Enter Number : ";
	cin >> N;

	return N;
}

int ReadNumberPower()
{
	int M;

	cout << "Please Enter Power : ";
	cin >> M;

	return M;
}

int PowerOfNumber(int N, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;

	for (int i = 0; i < M; i++)
	{
		P *= N;
	}
	return P;
}

*/

// Problem 33

/*

int ReadNumberInRange(int From , int To)
{
	int Number;
	do
	{

		cout << "PLease Enter Number : ";
		cin >> Number;

	} while (Number < From || Number > To);
	return Number;
}

char GetGradeLettre(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

*/

// Problem 34

/*

int ReadTotaleSales()
{
	int TotaleSles;

	cout << "Please Enter Your Totale Sales : ";
	cin >> TotaleSles;

	return TotaleSles;
}

float GetComissionPercentege(int TotaleSales)
{
	if (TotaleSales >= 1000000)
		return 0.01;
	else if (TotaleSales >= 500000)
		return 0.02;
	else if (TotaleSales >= 100000)
		return 0.03;
	else if (TotaleSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalComission(int TotaleSales)
{
	return GetComissionPercentege(TotaleSales) * TotaleSales;
}

*/

// Problem 35

/*

struct stPiggyBankContent
{

	int Pennies, Nickels, Dimes, Quarters, Dollars;

};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Enter your total Pennies : ";
	cin >> PiggyBankContent.Pennies;
	cout << "Enter your total Nickels : ";
	cin >> PiggyBankContent.Nickels;

	cout << "Enter your total Dimes : ";
	cin >> PiggyBankContent.Dimes;

	cout << "Enter your total Quarters : ";
	cin >> PiggyBankContent.Quarters;

	cout << "Enter your total Dollars : ";
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalePennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 +
		PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 +
		PiggyBankContent.Dollars * 100;

	return TotalePennies;
}

*/

// Problem 36

/*

enum enOperationType{Add = '+', Subtract = '-',
						Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please Enter Operation Type (+ , - , * , /) : ";
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{

	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

*/

// Problem 37

/*

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

int SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;
	
	do
	{
		Number = ReadNumber("Please Enter Number " + to_string(Counter) + " : ");

		if (Number == -99)
		{
			break;
		}
		
		Counter++;
		Sum += Number;

	} while (Number != -99);

	return Sum;	
}

*/

// Problem 38

/*

enum enPrimNotPrime{ Prime = 1, NotPrime = 2};

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
	int M = round(sqrt(Number));

	for (int Counter = 2; Counter <= M; Counter++)
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;

	return enPrimNotPrime::Prime;

}

void PrintNumberType(int Number)
{
	if (CheckPrime(Number) == enPrimNotPrime::Prime)
		cout << "\n The Number "<< Number << " is Prime" << endl;
	else
		cout << "\n The Number " << Number << " is Not Prime" << endl;
}

*/

// Problem 39

 /*

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalBill - TotalCashPaid;
}

*/

// Problem 40

/*

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}

*/

// Problem 41

/*

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float HoursToDays(float TotalHours)
{
	return (float)TotalHours / 24;
}

float HoursToWeeks(float TotalHours)
{
	return (float)TotalHours / 24 / 7;
}

float DaysToWeeks(float TotalDays)
{
	return (float)TotalDays / 7;
}

*/

// Problem 42 

/*

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	
	TaskDuration.NumberOfDays = ReadPositiveNumber("PLease Enter Number Of Days : ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("PLease Enter Number Of Hours : ");
	TaskDuration.NumberOfMinutes =  ReadPositiveNumber("PLease Enter Number Of Minutes : ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("PLease Enter Number Of Seconds : ");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int TotalSeconds = 0;

	TotalSeconds = TaskDuration.NumberOfDays * 60 * 60 * 24;
	TotalSeconds += TaskDuration.NumberOfHours * 60 * 60;
	TotalSeconds += TaskDuration.NumberOfMinutes * 60;
	TotalSeconds += TaskDuration.NumberOfSeconds;

	return TotalSeconds;
}

*/

// Problem 43

/*

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{

	strTaskDuration TaskDuration;
	int NumberPerDay = 24 * 60 * 60;
	int NumberPerHour = 60 * 60;
	int NumberPerMinutes = 60;
	
	
	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / NumberPerDay);
	Remainder = TotalSeconds % NumberPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / NumberPerHour);
	Remainder = Remainder % NumberPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / NumberPerMinutes);
	Remainder = Remainder % NumberPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;
	
	return TaskDuration;

}

void PrintTaskDuration(strTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << endl;
}

*/

// Problem 44

/*

enum  enDayOfWeek {Sun=1,Mon=2,Tue=3,Wen=4,Thu=5,Fri=6,Sat=7};

void PrintMenuDaysOfWeek()
{
	cout << "**************************************\n";
	cout << "              Days Of Week            \n";
	cout << "**************************************\n";
	cout << "(1) Sunday" << endl;
	cout << "(2) Monday" << endl;
	cout << "(3) Tuesday" << endl;
	cout << "(4) Wednesday" << endl;
	cout << "(5) Thursday" << endl;
	cout << "(6) Friday" << endl;
	cout << "(7) Saturday" << endl;
	cout << "**************************************\n";
	cout << "Please Enter A day of week ?" << endl;
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number;

	do {

		cout << Message << " [" << From << " to " << To << "] : ";
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enDayOfWeek ReadDayOfWeek()
{

	return (enDayOfWeek) ReadNumberInRange("Please Enter Number ", 1, 7);;

};

string GetDayOfWeek(enDayOfWeek Day_Week)
{
	switch (Day_Week)
	{
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wen:
		return "Wedneday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	case enDayOfWeek::Sat:
		return "Saturday";
	default:
		return "Wrong Day";
	};
};

*/

// Problem 45

/*

enum enMonthOfYear {Jan = 1, Feb = 2, Mar = 3, Apr = 4,
					May = 5, Jun = 6, July = 7, Aug = 8,
					Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

void MenuNumberMonthOfYear()
{
	cout << "********************************************\n";
	cout << "               Month Of Year                \n";
	cout << "********************************************\n";
	cout << "(1) Janury" << endl;
	cout << "(2) Febrary" << endl;
	cout << "(3) March" << endl;
	cout << "(4) April" << endl;
	cout << "(5) May" << endl;
	cout << "(6) June" << endl;
	cout << "(7) July" << endl;
	cout << "(8) August" << endl;
	cout << "(9) September" << endl;
	cout << "(10) October" << endl;
	cout << "(11) November" << endl;
	cout << "(12) December" << endl;
	cout << "********************************************\n";
}

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do {
		cout << Message << " [" << From <<  " , " << To << "]" << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthOfYear ReadMonthOfYear()
{

	return (enMonthOfYear)ReadNumberInRange("Please Enter Number ", 1, 12);

}

string GetMonthOfYear(enMonthOfYear MonthOfYear)
{

	switch (MonthOfYear)
	{
	case enMonthOfYear::Jan:
		return "Janury";
	case enMonthOfYear::Feb:
		return "Febrary";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "June";
	case enMonthOfYear::July:
		return "July";
	case enMonthOfYear::Aug:
		return "August";
	case enMonthOfYear::Sep:
		return "September";
	case enMonthOfYear::Oct:
		return "October";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default:
		return "Not Found This Month";
	};
}

*/

// Problem 46

/*

void PrintLettersAToZ()
{

	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	};

}

*/

// Problem 47

/*

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalMonths(int LoanAmount, int MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

*/

// Problem 48

/*

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float MonthlyInstallment(int LoanAmount, int HowManyMonths)
{
	return (float)LoanAmount / HowManyMonths;
}

*/

// Problem 49

/*

string ReadPINCode()
{
	string PINCode;

	cout << "Please Enter Your Code PIN : " << endl;
	cin >> PINCode;

	return PINCode;
}

bool Login()
{
	string PINCode;

	do {

		PINCode = ReadPINCode();

		if (PINCode == "1234")
		{
			return 1;
		}
		else {
			cout << "\nWrong PIN \n";
			system("Color 4F");
		}
	} while (PINCode != "1234");

	return 0;
}

*/

// Problem 50

/*

string ReadPINCode()
{
	string PINCode;

	cout << "Please Enter Your Code PIN : " << endl;
	cin >> PINCode;

	return PINCode;
}

bool Login()
{
	string PINCode;
	int Counter = 3;
	do {
		Counter--;
		PINCode = ReadPINCode();

		if (PINCode == "1234")
		{
			return 1;
		}
		else {
			system("Color 4F");
			cout << "\nWrong PIN, Youe Have " << Counter << " more train ";
		}
	} while (Counter >= 1 && PINCode != "1234");

	return 0;
}

*/

// Problem Sum All Or Odd Or Even Number

/*

enum enOddOrEven { Odd = 1, Even = 2};

void PrintMenuSumTypeNumber()
{
	cout << " - Sum Odd Number Print  : Odd" << endl;
	cout << " - Sum Even Number Print : Even" << endl;
	cout << " - Sum All Number Print  : All" << endl;
}

int ReadNumber ()
{
	int N;

	do {
		cout << "Please Enter Number : ";
		cin >> N;

	} while (N < 0);

	return N;
}

string ReadTypeSumNumber()
{
	string Type;
	do
	{
		cout << "Please Enter Type (Odd , Even , All) : ";
		cin >> Type;
	} while (Type != "Odd" && Type != "Even" && Type != "All");

	return Type;
}

enOddOrEven ChekOddOrEven(int N)
{
	if (N % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}


int SumOddNumber1ToN_usingForLoop(int N)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (ChekOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int SumEvenNumber1ToN_usingForLoop(int N)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (ChekOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int SumAllNumber1ToN_usingForLoop(int N)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		Sum += Counter;
	}

	return Sum;
}

int SumNumber1ToNInTypeEnter(int N , string Type)
{

	if (Type == "Odd")
		return SumOddNumber1ToN_usingForLoop(N);
	else if (Type == "Even")
		return SumEvenNumber1ToN_usingForLoop(N);
	else
		return SumAllNumber1ToN_usingForLoop(N);
}

void PrintResults(int Total)
{
	cout << "Total Sum number is : " << Total << endl;
}

*/

int main()
{
	// Problem 1

	/*
	
	PrintMyName("Zakaria");

	*/

	// Problem 2

	/*
	
	PrintName(ReadName());
	
	*/

	// Problem 3
	
	/*
	
	PrintNumberType(ChekNumberType(ReadNumber()));
	
	*/

	// Problem 4
	
	/*
	
	PrintResult(ReadInfo());
	
	*/

	// Problem 5

	/*
	
	PrintResult(ReadInfo());
	
	*/

	// Problem 6

	/*

	PrintFullName(GetFullNeme(ReadInfo()));

	*/

	// Problem 7 
	
	/*

	PrintResults(ReadNumber());

	*/

	// Problem 8

	/*

	PrintResults(ReadMark());

	*/

	// Problem 9

	/*

	int ArrNum[3];

	ReadNumbers(ArrNum);

	PrintResults(SumOf3Numbers(ArrNum));
	
	*/

	// Problem 10

	/*

	int ArrMark[3];

	ReadNumbers(ArrMark);

	PrintResults(CalculateAverage(ArrMark));
	
	*/

	// Problem 11

	/*

	int ArrMark[3];

	ReadNumbers(ArrMark);

	PrintResults(CalculateAverage(ArrMark));

	*/

	// Problem 12

	/*

	int Num1, Num2;

	ReadNumbers(Num1, Num2);

	PrintResults(MaxOf2Numbers(Num1, Num2));

	*/

	// Problem 13

	/*
	
	int Num[3];

	ReadNumbers(Num);

	PrintResults(MaxOf3Numbers(Num), NumberOFMaxNumber(Num));

	*/

	// Problem 14
	
	/*
	
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintNumber(Num1, Num2);
	SwapNumber(Num1, Num2);
	PrintNumber(Num1, Num2);
	
	*/

	// Problem 15

	/*

	float A , B;

	ReadNumbers(A, B);
	PrintResult(CalculateRectangleArea(A, B));

	*/

	// Problem 16

	/*

	float A, D;

	ReadNumbers(A, D);

	PrintResult(RectangleAreaBySideAndDiagonale(A, D));

	*/

	// Problem 17

	/*

	float A, H;

	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));

	*/

	// Problem 18

	/*

	PrintResult(CircleArea(ReadRadious()));

	*/
	
	// Problem 19
	
	/*

	PrintResults(CircleAreaByDiameter(ReadDiameter()));

	*/

	// Problem 20
	
	/*

	PrintResults(CircleAreaInscribeInSquare(ReadSquareSide()));
	
	*/

	// Problem 21

	/*

	PrintResults(CircleAreaByCurcumrence(ReadCurcumfrence()));

	*/

	// Problem 22

	/*

	float A, B;

	ReadTringleData(A, B);
	PrintResults(CircleAreaByITriangle(A, B));

	*/

	// Problem 23

	/*
	
	float A, B, C;

	ReadTringleData(A, B, C);
	PrintResults(CircleAreaByATriangle(A, B, C));
	
	*/

	// Problem 24

	/*

	PrintResult(ReadAge());

	*/

	// Problem 25

	/*

	PrintResult(RestartQuestionInFalseNumber(18, 45));

	*/
	
	// Problem 26

	/*

	int N = ReadNumber();

	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingForLoop(N);
	
	*/

	// Problem 27

	/*

	int N = ReadNumber();

	PrintRangeFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsingDoWhile(N);
	PrintRangeFromNto1_UsingForLoop(N);

	*/
	
	// Problem 28
	
	/*

	int N = ReadNumber();

	SumOddNumber1ToN_usingWhile(N);
	SumOddNumber1ToN_usingDoWhile(N);
	SumOddNumber1ToN_usingForLoop(N);

	*/

	// Problem 29

	/*

	int N = ReadNumber();

	SumEvenNumber1ToN_usingWhile(N);
	SumEvenNumber1ToN_usingDoWhile(N);
	SumEvenNumber1ToN_usingForLoop(N);

	*/

	// Problem 30

	/*

	cout << Factorial(ReadAPositifNumber("Enter Number : "));

	*/

	// Problem 31
	
	/*

	PowerOf2_3_4(ReadNumber());

	*/

	// Problem 32
	
	/*

	int Num = ReadNumber();

	cout << endl << "Result = " << PowerOfNumber(Num, ReadNumberPower()) << endl;

	*/
	
	// Problem 33

	/*

	cout << endl << "Result = " << GetGradeLettre(ReadNumberInRange(0, 100));

	*/

	// Problem 34

	/*

	int TotaleSales = ReadTotaleSales();

	cout << endl << "Comission Percentage = " << GetComissionPercentege(TotaleSales) << endl;
	cout << endl << "Total Comission = " << CalculateTotalComission(TotaleSales) << endl;

	*/

	// Problem 35

	/*

	int TotalPinnies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << endl << "Your Penies is : " << TotalPinnies << " Pennies" << endl;
	cout << endl << "Your Dollars is : " << (float)TotalPinnies / 100 << " Dollars " << endl;
	
	*/

	// Problem 36

	/*

	float Number1 = ReadNumber("Enter Your First Number : ");
	float Number2 = ReadNumber("Enter Your second Number : ");

	enOperationType OperatioType = ReadOpType();

	cout << "Result = " << Calculate(Number1, Number2, OperatioType) << endl;
	
	*/

	// Problem 37

	/*

	cout << " Result = " << SumNumbers() << endl;

	*/

	// Problem 38

	/*

	PrintNumberType(ReadPositiveNumber("Please Enter Positif Number : "));

	*/

	// Problem 39

	/*

	float TotalBill = ReadPositiveNumber("Please Enter Your Total Bill : ");
	float TotalCashPaid = ReadPositiveNumber("Please Enter Tour Total Cash Paid : ");


	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;
	
	cout << "*******************************************" << endl;
	cout << "Remander = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
	
	*/

	// Problem 40

	/*

	float TotalBill = ReadPositiveNumber("Please Enter Positif Number : ");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Your Total Bill Afer Fee and Tax = " 
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
	 
	*/

	// Problem 41

	/*

	float TotalHours = ReadPositiveNumber("Please Enter A Positif Number : ");
	float TotalHourToDay = HoursToDays(TotalHours);
	float TotalDaysToWeeks = HoursToWeeks(TotalHourToDay);

	cout << endl;
	cout << "Total Hours = " << TotalHours << endl;
	cout << "Total Days = " << TotalHourToDay << endl;
	cout << "Total Weeks = " << HoursToWeeks(TotalHours) << endl;

	*/

	// Problem 42

	/*

	cout << TaskDurationInSeconds(ReadTaskDuration());

	*/

	// Problem 43

	/*

	int TotalSeconds = ReadPositiveNumber("PLease Enter A Positif Number : ");

	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));

	*/

	// Problem 44

	/*

	PrintMenuDaysOfWeek();
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	*/

	// Problem 45

	/*

	MenuNumberMonthOfYear();
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
	
	*/

	// Problem 46
	
	/*

	PrintLettersAToZ();

	*/

	// Problem 47
	
	/*

	int LoanAmount = ReadPositiveNumber("Please Enter Your Loan Amount : ");
	int MonthlyInstallment = ReadPositiveNumber("Please Enter Your Monthly Installment : ");

	cout << "Total Month to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	*/

	// Problem 48

	/*

	int LoanAmount = ReadPositiveNumber("Please Enter Your Loan Amount : ");
	int HowManyMonths = ReadPositiveNumber("Please Enter Your Monthly Installment : ");

	cout << " Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;

	*/

	// Problem 49

	/*

	if (Login())
	{
		system("Color 2F");
		cout << "\nTour account balance = 7500" << endl;
	}

	*/

	// Problem 50

	/*

	if (Login())
	{
		system("Color 2F");
		cout << "\nTour account balance = 7500" << endl;
	}
	else
	{
		cout << "\nYour Card is Blocked call the banck for help. \n";
	}

	*/

		// Problem Sum All Or Odd Or Even
	
	/*

	int Number = ReadNumber();

	PrintMenuSumTypeNumber();
	PrintResults(SumNumber1ToNInTypeEnter(Number, ReadTypeSumNumber()));

	*/

		// Problem me : force Attractif In Physique

	/*
	float Masse1Num, MasseNum1Pow, Masse2Num, MasseNum2Pow, distance, distancePow ;


	cout << "PLease Enter Masse1 : ";
	cin >> Masse1Num;

	cout << "PLease Enter MasseNum1Pow : ";
	cin >> MasseNum1Pow;

	cout << "PLease Enter Masse2 : ";
	cin >> Masse2Num;

	cout << "PLease Enter MasseNum2Pow : ";
	cin >> MasseNum2Pow;

	cout << "PLease Enter distance : ";
	cin >> distance;

	cout << "PLease Enter distancePow : ";
	cin >> distancePow;

	const float Gravitaion = 6.67 * pow(10, -11);

	float total_Masse1 = Masse1Num * pow(10, MasseNum1Pow);
	float total_Masse2 = Masse2Num * pow(10, MasseNum2Pow);
		  
	float total_distance = pow((distance * pow(10, distancePow)), 2) ;


	float forceAttractif = (Gravitaion * total_Masse1 * total_Masse2) / total_distance;

	cout << "La  Force Attractif de deux corps est : " << forceAttractif << " N" << endl;

	*/

		// Problem me : Number Prime 1To Number Inter



	int Number;
	string PrimNotPrime;

	cout << "PLease Enter Number : ";
	cin >> Number;

	int n = 1;

	for (int i = 1; i < Number; i++)
	{
		for (int j = sqrt(i); j > 1; j--)
		{
			if (i % j == 1)
			{
				PrimNotPrime = "Prime";
			}
			else if (i % j == 0)
			{
				PrimNotPrime = "Not Prime";
				break;
			};
		}
		if (PrimNotPrime == "Prime")
		{
			cout << "- Number " << n << " : " << i << endl;
			n++;
		}
		else if (PrimNotPrime == "Not Prime")
		{
			continue;
		}
	}
	

	return 0;
}