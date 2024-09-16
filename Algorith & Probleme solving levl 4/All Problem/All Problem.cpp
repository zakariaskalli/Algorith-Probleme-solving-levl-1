
#pragma warning (disable : 4996)

#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

// Problem 1

/*

int EnterNumber()
{
	int Number;

	cout << "Enter a Number? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Enter a Number? ";
		cin >> Number;
	}

	return Number;
}

string NumberToText(int Number)
{
	if (Number == 0)
		return "";

	if (Number >= 1 && Number <= 19)
	{
		string NumberOneTo20[20] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
									"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
									"Seventeen", "Eighteen", "Nineteen" };

		return NumberOneTo20[Number] + " ";
	}
	else if (Number >= 20 && Number <= 99)
	{
		string NumberDiazene[10] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

		return NumberDiazene[Number / 10] + " " + NumberToText(Number % 10);
	}
	else if (Number >= 100 && Number <= 199)
	{
		return "One Hundred " + NumberToText(Number % 100);
	}
	else if (Number >= 200 && Number <= 999)
	{
		return NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100);
	}
	else if (Number >= 1000 && Number <= 1999)
	{
		return "One Thousand " + NumberToText(Number % 100);
	}
	else if (Number >= 2000 && Number <= 999999)
	{
		return NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);
	}
	else if (Number >= 1000000 && Number <= 1999999)
	{
		return "One Million " + NumberToText(Number % 1000000);
	}
	else if (Number >= 2000000 && Number <= 999999999)
	{
		return NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
	}
	else if (Number >= 1000000000 && Number <= 1999999999)
	{
		return "One Billion " + NumberToText(Number % 1000000000);
	}
	else
	{
		return NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
	}
}

*/

// Problem 2

/*

int ReadYear()
{
	int Year;

	cout << "Please enter a year ? ";
	cin >> Year;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Year;
	}

	return Year;
}

bool IsLeapYear(int Year)
{
	if (Year % 400 == 0)
		return true;
	else if (Year % 100 == 0)
		return false;
	else if (Year % 4 == 0)
		return true;
	else
		return false;
}

*/

// Problem 3

/*

int ReadYear()
{
	int Year;

	cout << "Please enter a year ? ";
	cin >> Year;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Year;
	}

	return Year;
}

bool IsLeapYear(int Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

*/

// Problem 4

/*

short ReadYear()
{
	short Year;

	cout << "Please enter a year ? ";
	cin >> Year;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Year;
	}

	return Year;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAYear(short Year)
{
	return (IsLeapYear(Year)) ? 366 : 365;

}

short NumberOfHoursInAYear(short Year)
{
	return NumberOfDaysInAYear(Year) * 24;
}

int NumberOfMinutesInAYear(short Year)
{
	return NumberOfHoursInAYear(Year) * 60;
}

int NumberOfSecondsInAYear(short Year)
{
	return NumberOfMinutesInAYear(Year) * 60;
}

*/

// Problem 5

/*

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	if (Month == 2)
		return IsLeapYear(Year) ? 29 : 28;

	short Arr31Month[7] = { 1,3,5,7,8,10,12 };

	for (short i = 1; i <= 7; i++)
	{
		if (Arr31Month[i - 1] == Month)
			return 31;
	}

	return 30;
}

short NumberOfHoursInAMonth(short Month, short Year)
{
	return NumberOfDaysInAMonth(Month, Year) * 24;
}

int NumberOfMinutesInAMonth(short Month, short Year)
{
	return NumberOfHoursInAMonth(Month, Year) * 60;
}

int NumberOfSecondsInAMonth(short Month, short Year)
{
	return NumberOfMinutesInAMonth(Month, Year) * 60;
}

*/

// Problem 6

/*

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

*/

// Problem 7

/*

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

*/

// Problem 8

/*

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

string MonthShortName(short MonthOfYearOrder)
{
	string Months[12] = { "Jan", "Feb", "Mar",
								"Apr" , "May", "Jun",
								"Jul", "Aug", "Sep",
								"Oct", "Nov", "Dec"};

	return Months[MonthOfYearOrder - 1];
}

void PrintMonthCalendar(short Month, short Year)
{
	int NumberOfDays;

	int current = DayOfWeekOrder(1, Month, Year);

	NumberOfDays = NumberOfDaysInAMonth(Month, Year);


	printf("\n  ________________%s________________\n\n",
		MonthShortName(Month).c_str());

	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int i;
	for (i = 0; i < current; i++)
		printf("     ");

	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			cout << "\n";
		}
	}

	printf("\n  ___________________________________\n");
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

*/

// Problem 9

/*

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

string MonthShortName(short MonthOfYearOrder)
{
	string Months[12] = { "Jan", "Feb", "Mar",
								"Apr" , "May", "Jun",
								"Jul", "Aug", "Sep",
								"Oct", "Nov", "Dec"};

	return Months[MonthOfYearOrder - 1];
}

void PrintMonthCalendar(short Month, short Year)
{
	int NumberOfDays;

	int current = DayOfWeekOrder(1, Month, Year);

	NumberOfDays = NumberOfDaysInAMonth(Month, Year);


	printf("\n  ________________%s________________\n\n",
		MonthShortName(Month).c_str());

	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int i;
	for (i = 0; i < current; i++)
		printf("     ");

	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			cout << "\n";
		}
	}

	printf("\n  ___________________________________\n");
}

void PrintYearCalendar(short Year)
{
	printf("\n  ___________________________________\n\n");
	printf("           Calendar - %d\n", Year);
	printf("\n  ___________________________________\n");

	for (int i = 1; i <= 12; i++)
		PrintMonthCalendar(i, Year);
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

*/

// Problem 10

/*

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

short NumberOfDaysFromTheBeginningOfTheYear(short Year, short Month, short Day)
{
	short TotalDay = 0;

	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDay += NumberOfDaysInAMonth(i, Year);
	}

	TotalDay += Day;

	return TotalDay;
}

*/

// Problem 11

/*

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

short NumberOfDaysFromTheBeginningOfTheYear(short Year, short Month, short Day)
{
	short TotalDay = 0;

	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDay += NumberOfDaysInAMonth(i, Year);
	}

	TotalDay += Day;

	return TotalDay;
}

struct stDate
{
	short Year;
	short Month;
	short Day;
};

stDate GetDataFromDayOrderInYear(short DateOrderInYear, short Year)
{
	stDate Date;
	short RemainingNumber = DateOrderInYear;
	short MonthDays = 0;

	Date.Year = Year;
	Date.Month = 1;


	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Date.Month, Year);

		if (RemainingNumber > MonthDays)
		{
			RemainingNumber -= MonthDays;
			Date.Month++;
		}
		else
		{
			Date.Day = RemainingNumber;
			break;
		}
	}
	
	return Date;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

*/

// Problem 12

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

short NumberOfDaysFromTheBeginningOfTheYear(short Year, short Month, short Day)
{
	short TotalDay = 0;

	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDay += NumberOfDaysInAMonth(i, Year);
	}

	TotalDay += Day;

	return TotalDay;
}

sDate DateAddDays(short AddDays, sDate Date)
{

	int RemainingNumber = AddDays + NumberOfDaysFromTheBeginningOfTheYear(Date.Year, Date.Month, Date.Day);
	short MonthDays = 0;

	Date.Month = 1;


	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);

		if (RemainingNumber > MonthDays)
		{
			RemainingNumber -= MonthDays;
			Date.Month++;

			if (Date.Month > 12)
			{
				Date.Month = 1;
				Date.Year++;
			}
		}
		else
		{
			Date.Day = RemainingNumber;
			break;
		}
	}

	return Date;

}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

short ReadDaysToAdd()
{
	short AddDays;

	cout << "Please enter a Day ? ";
	cin >> AddDays;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> AddDays;
	}

	return AddDays;
}

*/

// Problem 13

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
		Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 14

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{

	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;

}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 15

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 16

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;
	
	return Date;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 17

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1,Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 18

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

sDate GetSystemDate()
{
	sDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;

	return Date;
}

*/

// Problem 19

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

void SwapDates(sDate & Date1, sDate & Date2)
{
	sDate Temporary;

	Temporary.Year = Date1.Year;
	Temporary.Month = Date1.Month;
	Temporary.Day = Date1.Day;

	Date1.Year = Date2.Year;
	Date1.Month = Date2.Month;
	Date1.Day = Date2.Day;

	Date2.Year = Temporary.Year;
	Date2.Month = Temporary.Month;
	Date2.Day = Temporary.Day;

}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	short SwapFlagValue = 1;

	if (!IsDate1BeforeDate2(Date1, Date2))
	{
		SwapDates(Date1, Date2);
		SwapFlagValue = -1;
	}

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days * SwapFlagValue : Days * SwapFlagValue;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}


*/

// Problem 20 to 32

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

sDate IncreaseDateByXDays(sDate Date, short NumberDaysAdd)
{

	for (short i = 0; i < NumberDaysAdd; i++)
		Date = IncreaseDateByOneDay(Date);

	return Date;
}

sDate IncreaseDateByOneWeek(sDate Date)
{

	for (short i = 0; i < 7; i++)
		Date = IncreaseDateByOneDay(Date);

	return Date;
}

sDate IncreaseDateByXWeeks(sDate Date, short NumberWeeksAdd)
{

	for (short i = 0; i < NumberWeeksAdd; i++)
		Date = IncreaseDateByOneWeek(Date);

	return Date;
}

sDate IncreaseDateByOneMonth(sDate Date)
{

	if (IsLastMonthInYear(Date.Month))
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
		Date.Month++;

	short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDaysInCurrentMonth)
		Date.Day = NumberOfDaysInCurrentMonth;

	return Date;
}

sDate IncreaseDateByXMonths(sDate Date, short NumberMonthsAdd)
{

	for (short i = 0; i < NumberMonthsAdd; i++)
		Date = IncreaseDateByOneMonth(Date);

	return Date;
}

sDate IncreaseDateByOneYear(sDate Date)
{
	Date.Year++;

	return Date;
}

sDate IncreaseDateByXYears(sDate Date, short NumberYearsAdd)
{

	for (short i = 0; i < NumberYearsAdd; i++)
		Date = IncreaseDateByOneYear(Date);

	return Date;
}

sDate IncreaseDateByXYearsFaster(sDate Date, short NumberYearsAdd)
{
	Date.Year += NumberYearsAdd;

	return Date;
}

sDate IncreaseDateByOneDecade(sDate Date)
{
	Date.Year += 10;

	return Date;
}

sDate IncreaseDateByXDecades(sDate Date, short NumberDecadesAdd)
{

	for (short i = 0; i < NumberDecadesAdd * 10; i++)
		Date = IncreaseDateByOneYear(Date);

	return Date;
}

sDate IncreaseDateByXDecadesFaster(sDate Date, short NumberDecadesAdd)
{
	Date.Year +=  NumberDecadesAdd * 10;

	return Date;
}

sDate IncreaseDateByOneCentury(sDate Date)
{
	Date.Year += 100;

	return Date;
}

sDate IncreaseDateByOneMillennium(sDate Date)
{
	Date.Year += 1000;

	return Date;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 33 to 46

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

sDate DecreaseDateByOneDay(sDate Date)
{

	if (Date.Day == 1)
	{
		if (Date.Month == 1)
		{
			Date.Month = 12;
			Date.Day = 31;
			Date.Year--;
		}
		else
		{
			Date.Month--;
			Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
		}
	}
	else
		Date.Day--;

	return Date;
}

sDate DecreaseDateByXDays(sDate Date, short NumberDaysSub)
{

	for (short i = 0; i < NumberDaysSub; i++)
		Date = DecreaseDateByOneDay(Date);

	return Date;
}

sDate DecreaseDateByOneWeek(sDate Date)
{

	for (short i = 0; i < 7; i++)
		Date = DecreaseDateByOneDay(Date);

	return Date;
}

sDate DecreaseDateByXWeeks(sDate Date, short NumberWeeksSub)
{
	for (short i = 0; i < NumberWeeksSub; i++)
		Date = DecreaseDateByOneWeek(Date);

	return Date;
}
sDate DecreaseDateByOneMonth(sDate Date)
{

	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
		Date.Month--;

	short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDaysInCurrentMonth)
		Date.Day = NumberOfDaysInCurrentMonth;

	return Date;
}

sDate DecreaseDateByXMonths(sDate Date, short NumberMonthsSub)
{

	for (short i = 0; i < NumberMonthsSub; i++)
		Date = DecreaseDateByOneMonth(Date);

	return Date;
}

sDate DecreaseDateByOneYear(sDate Date)
{
	Date.Year--;
	return Date;
}

sDate DecreaseDateByXYears(sDate Date, short NumberYearsSub)
{

	for (short i = 0; i < NumberYearsSub; i++)
		Date = DecreaseDateByOneYear(Date);

	return Date;
}

sDate DecreaseDateByXYearsFaster(sDate Date, short NumberYearsSub)
{
	Date.Year -= NumberYearsSub;

	return Date;
}

sDate DecreaseDateByOneDecade(sDate Date)
{
	Date.Year -= 10;

	return Date;
}

sDate DecreaseDateByXDecades(sDate Date, short NumberDecadesSub)
{

	for (short i = 0; i < NumberDecadesSub * 10; i++)
		Date = DecreaseDateByOneYear(Date);

	return Date;
}

sDate DecreaseDateByXDecadesFaster(sDate Date, short NumberDecadesSub)
{
	Date.Year -= NumberDecadesSub * 10;

	return Date;
}

sDate DecreaseDateByOneCentury(sDate Date)
{
	Date.Year -= 100;

	return Date;
}

sDate DecreaseDateByOneMillennium(sDate Date)
{
	Date.Year -= 1000;

	return Date;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 47 to 53

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(sDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

bool IsEndOfWeek(sDate Date)
{
	return DayOfWeekOrder(Date) == 6;
}

bool IsWeekEnd(sDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(sDate Date)
{
	return !IsWeekEnd(Date);
}

short DaysUntilTheEndOfWeek(sDate Date)
{
	return 6 - DayOfWeekOrder(Date);
}

short DaysUntilTheEndOfMonth(sDate Date1)
{
	sDate EndOfMonthDate;

	EndOfMonthDate.Day = NumberOfDaysInAMonth(Date1.Month, Date1.Year);
	EndOfMonthDate.Month = Date1.Month;
	EndOfMonthDate.Year = Date1.Year;


	return GetDifferenceInDays(Date1, EndOfMonthDate, true);
}

short DaysUntilTheEndOfYear(sDate Date1)
{
	sDate EndOfMonthDate;

	EndOfMonthDate.Day = 31;
	EndOfMonthDate.Month = 23;
	EndOfMonthDate.Year = Date1.Year;

	return GetDifferenceInDays(Date1, EndOfMonthDate, true);
}

sDate GetSystemDate()
{
	sDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;

	return Date;
}

*/

// Problem 54

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(sDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

bool IsWeekEnd(sDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(sDate Date)
{
	return !IsWeekEnd(Date);
}

short CalculateVacationDays(sDate DateFrom, sDate DateTo)
{
	short DaysCount = 0;

	while (IsDate1BeforeDate2(DateFrom, DateTo))
	{
		if (IsBusinessDay(DateFrom))
			DaysCount++;
		
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	return DaysCount;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 55

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(sDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder)
{
	string NameDayOfWeek[] = { "Sun", "Mon", "Tue", "Wed" , "Thu", "Fri", "Sat" };

	return NameDayOfWeek[DayOfWeekOrder];
}

bool IsWeekEnd(sDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(sDate Date)
{
	return !IsWeekEnd(Date);
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

sDate CalculateVacationReturnDate(sDate DateFrom, short VacationDays)
{
	short WeekEndCounter = 0;

	while (IsWeekEnd(DateFrom))
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	for (int i = 1; i <= VacationDays + WeekEndCounter; i++)
	{
		if (IsWeekEnd(DateFrom))
			WeekEndCounter++;

		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	while (IsWeekEnd(DateFrom))
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	return DateFrom;
}

short ReadVacationDays()
{
	short VacationDays;

	cout << "Please enter Vacation Days? ";
	cin >> VacationDays;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter Vacation Days? ";
		cin >> VacationDays;
	}

	return VacationDays;
}

*/

// Problem 56

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate1(Date1, Date2));
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 57

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate1(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1};

enDateCompare CompareDate(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	
	if (IsDate1EqualDate1(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 58

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

struct stPeriod
{
	sDate DateStart;
	sDate DateEnd;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate1(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDate(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;

	if (IsDate1EqualDate1(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2)
{
	if (CompareDate(Period1.DateStart, Period2.DateEnd) == enDateCompare::After
		||
		CompareDate(Period1.DateEnd, Period2.DateStart) == enDateCompare::Before)
	{
		return false;
	}
	else
		return true;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "\nEnter Start Date:\n";
	Period.DateStart = ReadFullDate();
	
	cout << "\nEnter End Date:\n";
	Period.DateEnd = ReadFullDate();

	return Period;
}

*/

// Problem 59

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

struct stPeriod
{
	sDate DateStart;
	sDate DateEnd;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDay = false)
{
	return GetDifferenceInDays(Period.DateStart, Period.DateEnd, IncludeEndDay);
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "\nEnter Start Date:\n";
	Period.DateStart = ReadFullDate();

	cout << "\nEnter End Date:\n";
	Period.DateEnd = ReadFullDate();

	return Period;
}

*/

// Problem 60

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

struct stPeriod
{
	sDate DateStart;
	sDate DateEnd;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate1(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDate(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;

	if (IsDate1EqualDate1(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

bool IsWithinInPeriod(stPeriod Period1, sDate Date1)
{
	return !(CompareDate(Date1, Period1.DateStart) == enDateCompare::Before
		
		||

			CompareDate(Date1, Period1.DateEnd) == enDateCompare::After);

}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "\nEnter Start Date:\n";
	Period.DateStart = ReadFullDate();

	cout << "\nEnter End Date:\n";
	Period.DateEnd = ReadFullDate();

	return Period;
}

*/

// Problem 61

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

struct stPeriod
{
	sDate DateStart;
	sDate DateEnd;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (12 == Month);
}

sDate IncreaseDateByOneDay(sDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day += 1;

	return Date;
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeEndDay ? ++Days : Days;
}

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDay = false)
{
	return GetDifferenceInDays(Period.DateStart, Period.DateEnd, IncludeEndDay);
}

bool IsDate1EqualDate1(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate1(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDate(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;

	if (IsDate1EqualDate1(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2)
{
	if (CompareDate(Period1.DateStart, Period2.DateEnd) == enDateCompare::After
		||
		CompareDate(Period1.DateEnd, Period2.DateStart) == enDateCompare::Before)
	{
		return false;
	}
	else
		return true;
}

bool isDateInPeriod(sDate Date, stPeriod Period) 
{ 
	return !(CompareDate(Date, Period.DateStart) == enDateCompare::Before 
		||
			CompareDate(Date, Period.DateEnd) == enDateCompare::After); 
}

int CountOverlapDays(stPeriod Period1, stPeriod Period2, bool IncludeEndDay = false)
{
	int Period1Length = PeriodLengthInDays(Period1, true);
	int Period2Length = PeriodLengthInDays(Period2, true);
	int OverlapDays = 0;

	if (!IsOverlapPeriods(Period1, Period2))
		return 0;


	if (Period1Length < Period2Length)
	{
		while (IsDate1BeforeDate2(Period1.DateStart, Period1.DateEnd))
		{
			if (isDateInPeriod(Period1.DateStart, Period2))
				OverlapDays++;

			Period1.DateStart = IncreaseDateByOneDay(Period1.DateStart);
		}
	}

	else
	{
		while (IsDate1BeforeDate2(Period2.DateStart, Period2.DateEnd))
		{
			if (isDateInPeriod(Period2.DateStart, Period1))
				OverlapDays++;

			Period2.DateStart = IncreaseDateByOneDay(Period2.DateStart);
		}
	}

	return OverlapDays;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "\nEnter Start Date:\n";
	Period.DateStart = ReadFullDate();

	cout << "\nEnter End Date:\n";
	Period.DateEnd = ReadFullDate();

	return Period;
}

*/

// Problem 62

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 0 || Month > 12)
		return 0;

	short NumberOfYear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfYear[Month - 1];
}

bool IsValidateDate(sDate Date)
{
	if (Date.Day < 1 || Date.Day > 31)
		return false;

	if (Date.Month < 1 || Date.Month > 12)
		return false;

	if (Date.Month == 2)
	{
		if (IsLeapYear(Date.Year))
		{
			if (Date.Day > 29)
				return false;
		}
		else
		{
			if (Date.Day > 28)
				return false;
		}
	}

	short DaysInMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > DaysInMonth)
		return false;

	return true;
}

short ReadDay()
{
	short Day;

	cout << "Please enter a Day ? ";
	cin >> Day;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Day ? ";
		cin >> Day;
	}

	return Day;
}

short ReadMonth()
{
	short Month;

	cout << "Please enter a Month ? ";
	cin >> Month;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a Month ? ";
		cin >> Month;
	}

	return Month;
}

short ReadYear()
{
	short Number;

	cout << "Please enter a year ? ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a year ? ";
		cin >> Number;
	}

	return Number;
}

sDate ReadFullDate()
{
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

*/

// Problem 63 & 64

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;

	short pos = 0;
	string sWorld;


	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWorld = S1.substr(0, pos);

		if (sWorld != "")
			vString.push_back(sWorld);

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
		vString.push_back(S1);

	return vString;
}

string DateToString(sDate Date)
{

	return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);

}

sDate StringToDate(string DateString)
{
	sDate Date;
	vector <string> vDate;

	vDate = SplitString(DateString, "/");
	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);


	return Date;
}

string ReadDateInString(string Message)
{
	string DateString;

	cout << Message;
	getline(cin >> ws, DateString);

	return DateString;
}

*/

// Problem 65

/*

struct sDate
{
	short Year;
	short Month;
	short Day;
};

vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;

	short pos = 0;
	string sWorld;


	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWorld = S1.substr(0, pos);

		if (sWorld != "")
			vString.push_back(sWorld);

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
		vString.push_back(S1);

	return vString;
}

string ReplaceWordInString(string S1, string StringToReplace, string sReplaceTo) 
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);
		pos = S1.find(StringToReplace);
	} 
	
	return S1; 
}

sDate StringToDate(string DateString)
{
	sDate Date;
	vector <string> vDate;

	vDate = SplitString(DateString, "/");
	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);


	return Date;
}

string FormatDate(sDate Date, string DateFormat = "dd/mm/yyyy")
{
	string FormatTodDateString = "";

	FormatTodDateString = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day));
	FormatTodDateString = ReplaceWordInString(FormatTodDateString, "mm", to_string(Date.Month));
	FormatTodDateString = ReplaceWordInString(FormatTodDateString, "yyyy", to_string(Date.Year));

	return FormatTodDateString;
}

string ReadDateInString(string Message)
{
	string DateString;

	cout << Message;
	getline(cin >> ws, DateString);

	return DateString;
}

*/

int main()
{
	// Problem 1

	/*

	int Number = EnterNumber();

	cout << NumberToText(Number) << endl;

	*/

	// Problem 2

	/*

	int Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "Yes, Year [" << Year << "] is a leap year\n";
	else
		cout << "No, Year [" << Year << "] is NOT leap year\n";

	*/

	// Problem 3

	/*

	int Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "Yes, Year [" << Year << "] is a leap year\n";
	else
		cout << "No, Year [" << Year << "] is NOT leap year\n";

	*/

	// Problem 4

	/*

	short Year = ReadYear();

	cout << "\nNumber of Days    in Year [" << Year << "] is "
		<< NumberOfDaysInAYear(Year);
	cout << "\nNumber of Hours   in Year [" << Year << "] is "
		<< NumberOfHoursInAYear(Year);
	cout << "\nNumber of Minutes in Year [" << Year << "] is "
		<< NumberOfMinutesInAYear(Year);
	cout << "\nNumber of Seconds in Year [" << Year << "] is "
		<< NumberOfSecondsInAYear(Year);

	*/

	// Problem 5

	/*

	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days    in Month [" << Year << "] is "
		<< NumberOfDaysInAMonth(Month, Year);
	cout << "\nNumber of Hours   in Month [" << Year << "] is "
		<< NumberOfHoursInAMonth(Month, Year);
	cout << "\nNumber of Minutes in Month [" << Year << "] is "
		<< NumberOfMinutesInAMonth(Month, Year);
	cout << "\nNumber of Seconds in Month [" << Year << "] is "
		<< NumberOfSecondsInAMonth(Month, Year);

	*/

	// Problem 6

	/*

	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days    in Month [" << Year << "] is "
		<< NumberOfDaysInAMonth(Month, Year);

	*/

	// Problem 7

	/*

	short Year = ReadYear();
	short Month = ReadMonth();
	short Day = ReadDay();

	cout << "\nDate      :" << Day << "/" << Month << "/" << Year;
	cout << "\nDay Order :" << DayOfWeekOrder(Day, Month, Year);
	cout << "\nDay Name  :" << DayShortName(DayOfWeekOrder(Day, Month, Year));

	*/

	// Problem 8

	/*

	short Year = ReadYear();
	short Month = ReadMonth();

	PrintMonthCalendar(Month, Year);

	*/

	// Problem 9

	/*

	PrintYearCalendar(ReadYear());

	*/

	// Problem 10

	/*

	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();

	cout << "Number of Days from the beginning of the year is "
		<< NumberOfDaysFromTheBeginningOfTheYear(Year, Month, Day) << endl;

	*/

	// Problem 11

	/*

	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();

	short DaysOrderInYear = NumberOfDaysFromTheBeginningOfTheYear(Year, Month, Day);

	cout << "Number of Days from the beginning of the year is "
		<< DaysOrderInYear << endl;

	stDate Date;
	Date = GetDataFromDayOrderInYear(DaysOrderInYear, Year);
	cout << "\nDate for [" << DaysOrderInYear << "] is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	*/

	// Problem 12

	/*

	sDate Date = ReadFullDate();
	short Days = ReadDaysToAdd();


	Date = DateAddDays(Days, Date);
	cout << "\nDate after adding [" << Days << "] days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	*/

	// Problem 13

	/*

	sDate Date1 = ReadFullDate();
	cout << endl;
	sDate Date2 = ReadFullDate();

	if (IsDate1BeforeDate2(Date1, Date2))
		cout << "\nYes, Date1 is Less than Date2\n";
	else
		cout << "\nNo, Date1 is Not Less than Date2\n";

	*/

	// Problem 14

	/*

	sDate Date1 = ReadFullDate();
	cout << endl;
	sDate Date2 = ReadFullDate();

	if (IsDate1EqualDate1(Date1, Date2))
		cout << "\nYes, Date1 is Equal to Date2\n";
	else
		cout << "\nNo, Date1 is Not Equal to Date2\n";

	*/

	// Problem 15

	/*

	sDate Date1 = ReadFullDate();

	if (IsLastDayInMonth(Date1))
		cout << "\nYes, Day is Last Day in Month.\n";
	else
		cout << "\nNo, Day is NOT Last Day in Month.\n";



	if (IsLastMonthInYear(Date1.Month))
		cout << "Yes, Month is Last Day in Month.\n";
	else
		cout << "No, Month is NOT Last Day in Month.\n";

	*/

	// Problem 16

	/*

	sDate Date = ReadFullDate();

	Date = IncreaseDateByOneDay(Date);

	cout << "\nDate after adding one day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	*/

	// Problem 17

	/*

	sDate Date1 = ReadFullDate();
	cout << endl;
	sDate Date2 = ReadFullDate();


	cout << "\n\nDifference is: "
		<< GetDifferenceInDays(Date1, Date2) << " Day(s).\n";

	cout << "Difference (Including End Day) is: "
		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).\n";

	*/

	// Problem 18

	/*

	cout << "\nPlease Enter Your Date of Birth:\n\n";

	sDate Date1 = ReadFullDate();

	sDate Date2 = GetSystemDate();

	cout << "\nYour Age is : "
		<< GetDifferenceInDays(Date1, Date2) << " Day(s).\n";

	*/

	// Problem 19

	/*

	sDate Date1 = ReadFullDate();
	cout << endl;
	sDate Date2 = ReadFullDate();


	cout << "\n\nDiffrence is: "
		<< GetDifferenceInDays(Date1, Date2) << " Day(s).\n";

	cout << "\n\nDiffrence (Including End Day) is: "
		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).\n";

	*/

	// Problem 20 to 32

	/*

	sDate Date = ReadFullDate();

	cout << "\nDate After:\n";


	Date = IncreaseDateByOneDay(Date);
	cout << "\n01-Adding day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXDays(Date, 10);
	cout << "\n02-Adding 10 days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneWeek(Date);
	cout << "\n03-Adding one week is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXWeeks(Date, 10);
	cout << "\n04-Adding 10 weeks is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneMonth(Date);
	cout << "\n05-Adding one month is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXMonths(Date, 5);
	cout << "\n06-Adding 5 months is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneYear(Date);
	cout << "\n07-Adding one year is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXYears(Date, 10);
	cout << "\n08-Adding 10 Years is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXYearsFaster(Date, 10);
	cout << "\n09-Adding 10 Years (faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneDecade(Date);
	cout << "\n10-Adding one Decade is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXDecades(Date, 10);
	cout << "\n11-Adding 10 Decades is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByXDecadesFaster(Date, 10);
	cout << "\n12-Adding 10 Decades (faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneCentury(Date);
	cout << "\n13-Adding One Century is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = IncreaseDateByOneMillennium(Date);
	cout << "\n14-Adding One Millennium is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	*/

	// Problem 33 to 46

	/*

	sDate Date = ReadFullDate();

	cout << "\nDate After:\n";

	Date = DecreaseDateByOneDay(Date);
	cout << "\n01-Substracting day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXDays(Date, 10);
	cout << "\n02-Substracting 10 days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneWeek(Date);
	cout << "\n03-Substracting one week is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXWeeks(Date, 10);
	cout << "\n04-Substracting 10 weeks is: ";
	cout<< Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneMonth(Date);
	cout << "\n05-Substracting one month is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXMonths(Date, 5);
	cout << "\n06-Substracting 5 months is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneYear(Date);
	cout << "\n07-Substracting one year is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXYears(Date, 10);
	cout << "\n08-Substracting 10 Years is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXYearsFaster(Date, 10);
	cout << "\n09-Substracting 10 Years (faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneDecade(Date);
	cout << "\n10-Substracting one Decade is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXDecades(Date, 10);
	cout << "\n11-Substracting 10 Decades is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByXDecadesFaster(Date, 10);
	cout << "\n12-Substracting 10 Decades (faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneCentury(Date);
	cout << "\n13-Substracting One Century is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;


	Date = DecreaseDateByOneMillennium(Date);
	cout << "\n14-Substracting One Millennium is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	*/

	// Problem 47 to 53

	/*

	sDate Date1 = GetSystemDate();

	cout << "Today is " << DayShortName(DayOfWeekOrder(Date1)) << " , "
		<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	cout << "\nIs it End of Week?\n";
	if (IsEndOfWeek(Date1))
		cout << "Yes, it is Saturday, it's of Week.\n";
	else
		cout << "No Not end of week.\n";


	cout << "\nIs it Weekend?\n";
	if (IsWeekEnd(Date1))
		cout << "Yes, it is a week end.\n";
	else
		cout << "No is Not week end.\n";


	cout << "\nIs it Business Day?\n";
	if (IsBusinessDay(Date1))
		cout << "Yes, it is a business  day.\n";
	else
		cout << "No it is NOT a business  day.\n";

	cout << "\nDays until end of week : "
		<< DaysUntilTheEndOfWeek(Date1) << " Day(s).";

	cout << "\nDays until end of month : "
		<< DaysUntilTheEndOfMonth(Date1) << " Day(s).";

	cout << "\nDays until end of Year : "
		<< DaysUntilTheEndOfYear(Date1) << " Day(s).";

	*/

	// Problem 54

	/*

	cout << "\nVacation Starts:\n";
	sDate DateFrom = ReadFullDate();

	cout << "\nVacation Ends:\n";
	sDate DateTo = ReadFullDate();

	cout << "\nVacation From: " << DayShortName(DayOfWeekOrder(DateFrom)) << " , "
		<< DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;

	cout << "Vacation To: " << DayShortName(DayOfWeekOrder(DateTo)) << " , "
		<< DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year << endl;


	cout << "\n\nActual Vacation Days is: "
		<< CalculateVacationDays(DateFrom, DateTo);

	*/

	// Problem 55

	/*

	cout << "\nVacation Starts:\n";
	sDate DateFrom = ReadFullDate();

	short VacationDays = ReadVacationDays();

	sDate ReturnDate = CalculateVacationReturnDate(DateFrom, VacationDays);

	cout << "\nReturn Date: " << DayShortName(DayOfWeekOrder(DateFrom)) << " , "
	<< ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;

	*/

	// Problem 56

	/*

	cout << "\nEnter Date1:\n";
	sDate Date1 = ReadFullDate();

	cout << "\nEnter Date2:\n";
	sDate Date2 = ReadFullDate();


	if (IsDate1AfterDate2(Date1, Date2))
		cout << "\nYes, Date1 is After Date2\n";
	else
		cout << "\nNO, Date1 is NOT After Date2\n";

	*/

	// Problem 57

	/*

	cout << "\nEnter Date1:\n";
	sDate Date1 = ReadFullDate();

	cout << "\nEnter Date2:\n";
	sDate Date2 = ReadFullDate();


	cout << "\nCompare Result = " << CompareDate(Date1, Date2);

	*/

	// Problem 58

	/*

	cout << "\nEnter Period 1:";
	stPeriod Period1 = ReadPeriod();

	cout << "\nEnter Period 2:";
	stPeriod Period2 = ReadPeriod();

	if (IsOverlapPeriods(Period1, Period2))
		cout << "\nYes, Periods Overlap\n";
	else
		cout << "\nNO, Periods do NOT Overlap\n";

	*/

	// Problem 59

	/*

	cout << "\nEnter Period 1:";
	stPeriod Period1 = ReadPeriod();


	cout << "\n\nPeriod Length is: "
	<< PeriodLengthInDays(Period1) << " Day(s).\n";

	cout << "Period Length (Including End Day) is: "
	<< PeriodLengthInDays(Period1, true) << " Day(s).\n";

	*/

	// Problem 60

	/*

	cout << "\nEnter Period 1:";
	stPeriod Period1 = ReadPeriod();

	cout << "\nEnter Date to check:\n";
	sDate Date1 = ReadFullDate();

	if (IsWithinInPeriod(Period1, Date1))
		cout << "\nYes, Date is within period\n";
	else
		cout << "\nNO, Date do NOT within period\n";

	*/

	// Problem 61

	/*

	cout << "\nEnter Period 1:";
	stPeriod Period1 = ReadPeriod();

	cout << "\nEnter Period 2:";
	stPeriod Period2 = ReadPeriod();

	cout << "\n\nPeriod Length is: "
		<< CountOverlapDays(Period1, Period2) << " Day(s).\n";

	*/

	// Problem 62

	/*

	sDate Date1 = ReadFullDate();

	if (IsValidateDate(Date1))
		cout << "\nYes, Date is a valide date.\n";
	else
		cout << "\nNo, Date is a NOT valide date.\n";

	*/

	// Problem 63 & 64

	/*

	string DateString = ReadDateInString("\nPlease Enter Date dd/mm/yyyy? ");

	sDate Date = StringToDate(DateString);

	cout << "\nDay : " << Date.Day << endl;
	cout << "Month : " << Date.Month << endl;
	cout << "Year : " << Date.Year << endl;

	cout << "\n\nYou Entered : " << DateToString(Date) << endl;

	*/

	// Problem 65

	/*

	string DateString = ReadDateInString("\nPlease Enter Date dd/mm/yyyy? ");

	sDate Date = StringToDate(DateString);


	cout << "\n" << FormatDate(Date) << "\n";

	cout << "\n" << FormatDate(Date, "yyyy/dd/mm") << "\n";

	cout << "\n" << FormatDate(Date, "mm/dd/yyyy") << "\n";

	cout << "\n" << FormatDate(Date, "mm-dd-yyyy") << "\n";

	cout << "\n" << FormatDate(Date, "dd-mm-yyyy") << "\n";

	cout << "\n" << FormatDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

	*/





	/*

	system("pause>0");
	return 0;

	*/
}


