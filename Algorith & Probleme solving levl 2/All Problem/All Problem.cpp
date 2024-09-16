
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

// #1

/*

void PrintTableHeader()
{
	cout << "\n\n\t\t\t Multiplacation Table From 1 To 10 \n\n\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	
	for (int x = 1; x <= 85; x++)
	{
		cout << "_";
	}
	cout << endl;
}

string ColumSperator(int i)
{
	if (i < 10)
		return "   |";
	else 
		return "  |";
}

void PrintMultiplactionTable()
{
	PrintTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumSperator(i) << "  ";
		for (int j = 1; j <= 10; j++)
		{
			cout << j * i << "\t";
		}
		cout << endl;
	}
}

*/

// #2

/*

enum enPrimNotPrim { Prim = 0, NotPrim = 1 };

int PrintNumberPositif()
{
	int Number;

	do 
	{
		cout << "Please Enter Number Positif : ";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimNotPrim CheckPrimNumber(int Number)
{
	int M = round(sqrt(Number));

	for (int i = 2; i <= M; i++)
		if (Number % i == 0)
			return enPrimNotPrim::NotPrim;

	return enPrimNotPrim::Prim;
}

void PrintPrimeNumber1ToN(int Number)
{
	cout << "\nPrim Number From 1 To " << Number
		<< " is : " << endl;

	int Counter = 1;
	for (int j = 1; j <= Number; j++)
	{
		if (CheckPrimNumber(j) == enPrimNotPrim::Prim)
		{
			cout << Counter << ")  " << j << endl;
			Counter++;
		}
		
	}
}

*/

// #3

/*

int ReadNumberPositif(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int IsPerfectNumber(int Number)
{
	int M = round(Number / 2);
	int Sum = 0;

	for (int i = 1; i <= M; i++)
	{
		if ( Number % i == 0)
		{
			Sum += i;
		}
	}

	return Number == Sum;

}

void PrintPerfectNotPerfect(int Number)
{
	cout << endl;
	if (IsPerfectNumber(Number))
		cout << Number << " is Perfect.\n";
	else
		cout << Number << " is Not Perfect.\n";

} 

*/

// #4

/*

int ReadNumberPositif(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool IsPerfectNumber(int Number)
{
	int M = round(Number / 2);
	int Sum = 0;

	for (int i = 1; i <= M; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}

	return Number == Sum;

}

void NumberPerfect1ToN(int Number)
{
	int Counter = 1;

	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << Counter << ") " << i << endl;
			Counter++;
		}
	}
}

*/

// #5

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintDegits(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

*/

// #6

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int PrintDegits(int Number)
{
	int Sum = 0, Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}
	return Sum ;
}

*/

// #7

/*

int ReadPositifNumber(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

*/

// #8

/*

int ReadPositifNumber(string Message)
{
	int Number;

	cout << Message;
	cin >> Number;


	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreCount = 0, Remainder = 0;

	for (int i = 0; i <= Number; i++)
	{
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;

			if (DigitToCheck == Remainder)
			{
				FreCount++;
			}
		}
	}

	return FreCount;

}

*/

// #9

/*

int ReadPositifNumber(string Message)
{
	int Number;

	cout << Message;
	cin >> Number;


	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreCount = 0, Remainder = 0;

	for (int i = 0; i <= Number; i++)
	{
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;

			if (DigitToCheck == Remainder)
			{
				FreCount++;
			}
		}
	}

	return FreCount;

}

void PrintNumberForDigits(int Number)
{

	for (int i = 0; i < 10; i++)
	{
		short NumberForDigit = 0;
		NumberForDigit = CountDigitFrequency(i, Number);

		if (NumberForDigit > 0)
		{
			cout << "Digit " << i << " Frequency is "
				<< NumberForDigit << " Time(s).\n";
		}
	}
}

*/

// #10

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void PrintDegits(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

*/

// #11

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

bool IsPalindromNumber(int Number)
{

	return Number == ReverseNumber(Number);

}

*/

// #12

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintInvertedNumberPattern(int Number)
{
	cout << "\n";
	for (int i = Number; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << i;
		}
		cout << "\n";
	}
}

*/

// #13

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintNumberPattern(int Number)
{
	cout << "\n";
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

*/

// #14

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintInvertedLetterPattern(int Number)
{
	cout << "\n";
	for (int i = 65 + Number - 1; i >= 65; i--)
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

*/

// #15

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintLetterPattern(int Number)
{
	cout << "\n";
	for (int i = 65 - 1; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

*/

// #16

/*

void PrintWordsFromAAAtoZZZ()
{
	cout << "\n";
	string word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << word << endl;

				word = "";
			}
		}
		cout << "---------------------------------------" << endl;
	}
}

*/

// #17

/*

string ReadPassword()
{
	string Password;

	cout << "PLease Enter A 3-Letter Password (All Capital) : ";
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	string word = "";
	int Counter = 0;
	cout << "\n";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				Counter++;

				cout << "Trial [" << Counter << "]: ";
				cout << word << endl;

				if (word == OriginalPassword)
				{
					cout << "\nPassword is : " << word << endl;
					cout << "Found After ";
					cout << Counter << " Trial(s)" << endl;

					return true;
				}

				word = "";
			}
		}
	}
	return false;
}

*/

// #18

/*

string ReadText()
{
	string Text;

	cout << "Please Enter Mot : ";
	getline(cin, Text);

	return Text;
}

string ConvertTextToEncryption(string Text, int EncryptedKey)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptedKey);
	}
	return Text;
}
	
string ConvertEncryptionToText(string Text, int EncryptedKey)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptedKey);
	}
	return Text;
}

*/

// #19

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

*/

// #20

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

enum enRandom { SmallLetter = 1, CapitallLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enRandom Random)
{
	switch (Random)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitallLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialCharacter:
		return char(RandomNumber(32, 47));
		break;
	case Digit:
		return char(RandomNumber(48, 57));
		break;
	}

}

*/

// #21

/*

enum enCharType { SmallLetter = 1, CapitallLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

char GetRandomCharacter(enCharType Random)
{
	switch (Random)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitallLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialCharacter:
		return char(RandomNumber(32, 47));
		break;
	case Digit:
		return char(RandomNumber(48, 57));
		break;
	}

}

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

string GeneratorWord(enCharType CharType, int Lenght)
{
	string word;

	for (int i = 1; i <= Lenght; i++)
	{
		word += GetRandomCharacter(CharType);
	}
	return word;
}

string Generatorkey()
{
	string key = "";

	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4);

	return key;
}

void Generatorkeys(short NumberOFKeys)
{
	for (int i = 1; i <= NumberOFKeys; i++)
	{
		cout << "Key [" << i << "]: ";
		cout << Generatorkey() << endl;
	}
}

*/

// #22

/*

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void ReadArray(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Number of elements : \n";
	cin >> ArrLenght;
	
	cout << "\nEnter Array elements : \n";
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> Arr[i];
	}
	cout << endl;
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int TimesRepeats(int Arr[100], int ArrLenght, int NumberCheck)
{
	int Count = 0;

	for (int i = 0; i <= ArrLenght - 1; i++)
	{
		if (Arr[i] == NumberCheck)
		{
			Count++;
		}
	}
	return Count;
}

*/

// #23

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

*/

// #24

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int MaxNumberInArray(int Arr[100], int ArrLenght)
{
	int MaxNumber = 0;

	for (int i = 0; i < ArrLenght; i++)
	{
		if ( MaxNumber < Arr[i])
		{
			MaxNumber = Arr[i];
		}
		
	}
	return MaxNumber;
}

*/

// #25

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int MinNumberInArray(int Arr[100], int ArrLenght)
{
	int MinNumber = Arr[0];

	for (int i = 1; i < ArrLenght; i++)
	{
		if (MinNumber > Arr[i])
		{
			MinNumber = Arr[i];
		}

	}
	return MinNumber;
}

*/

// #26

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int SumArray(int Arr[100], int ArrLenght)
{
	int Sum = 0;

	for (int i = 0; i < ArrLenght; i++)
	{
		Sum += Arr[i];

	}
	return Sum;
}

*/

// #27

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int SumArray(int Arr[100], int ArrLenght)
{
	int Sum = 0;

	for (int i = 0; i < ArrLenght; i++)
	{
		Sum += Arr[i];

	}
	return Sum;
}

float AvergeArray(int Arr[100], int ArrLenght)
{
	return (float) SumArray(Arr, ArrLenght) / ArrLenght;
}

*/

// #28

/*


int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void CopyArray(int ArrSource[100], int ArrDestination[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
		ArrDestination[i] = ArrSource[i];
}

*/

// #29

/*

enum enPrimNotPrim { Prim = 0, NotPrim = 1 };

enPrimNotPrim CheckPrimNumber(int Number)
{
	int M = round(sqrt(Number));

	for (int i = 2; i <= M; i++)
		if (Number % i == 0)
			return enPrimNotPrim::NotPrim;

	return enPrimNotPrim::Prim;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void CopyOnlyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int ArrLenght, int& Array2Lenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		if (CheckPrimNumber(ArrSource[i]) == enPrimNotPrim::Prim)
		{
			ArrDestination[Counter] = ArrSource[i] ;
			Counter++;
		}
	}
	Array2Lenght = --Counter;
}

*/

// #30

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int ArrLenght)
{

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);

}

void SumOf2Array(int Arr[100] ,int Arr2[100] ,int ArrSum[100],int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];
	}
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

*/

// #31

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayNumbers1ToN(int Arr[100], int ArrLenght)
{

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = i + 1;

}

int SwapNumber(int& A, int& B)
{
	int Swap;

	Swap = A;
	A = B;
	B = Swap;
	return Swap;
}

void RandomNumber1ToN(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		SwapNumber(Arr[RandomNumber(1, ArrLenght ) -1], Arr[RandomNumber(1, ArrLenght) - 1]);
	}
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

*/

// #32

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int ArrLenght)
{

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);

}

int SwapNumber(int& A, int& B)
{
	int Swap;

	Swap = A;
	A = B;
	B = Swap;
	return Swap;
}

void ReverseRandomNumber(int ArrSource[100], int ArrDestination[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		ArrDestination[i] = ArrSource[ArrLenght - 1 - i];
	}
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

*/

// #33

/*

enum enCharType { SmallLetter = 1, CapitallLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

char GetRandomCharacter(enCharType Random)
{
	switch (Random)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitallLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialCharacter:
		return char(RandomNumber(32, 47));
		break;
	case Digit:
		return char(RandomNumber(48, 57));
		break;
	}

}

int ReadNumberPositif(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

string GeneratorWord(enCharType CharType, int Lenght)
{
	string word;
	int i = 0;
	for (i; i <= Lenght; i++)
	{
		word += GetRandomCharacter(CharType);
	}
	return word;
}

string Generatorkey()
{
	string key = "";

	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4) + "-";
	key += GeneratorWord(enCharType::CapitallLetter, 4);

	return key;
}

void FillArraysWithKeys(string Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		Arr[i] = Generatorkey();
	}
}

void PrintArrayKeys(string Arr[100], int ArrLenght)
{
	cout << "\nArray element : \n";

	for (int i = 0; i < ArrLenght; i++)
	{
		cout << "Array [" << i + 1 << "]: "
			<< Arr[i] << endl;
	}
}

*/

// #34

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

int ReadNumber()
{
	int Number;

	cout << "\nPlease Enter Number To Search : ";
	cin >> Number;

	return Number;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPositionInArray(int Arr[100], int ArrLenght, int NumberSearch)
{
	for (int i = 0; i < NumberSearch; i++)
	{
		if (Arr[i] == NumberSearch)
			return i;
	}
	return -1;
}

*/

// #35

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

int ReadNumber()
{
	int Number;

	cout << "\nPlease Enter Number To Search : ";
	cin >> Number;

	return Number;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPositionInArray(int Arr[100], int ArrLenght, int NumberSearch)
{
	for (int i = 0; i < NumberSearch; i++)
	{
		if (Arr[i] == NumberSearch)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int Arr[100], int ArrLenght, int NumberSearch)
{

	return FindNumberPositionInArray(Arr, ArrLenght, NumberSearch) != -1;

}

*/

// #36

/*

int ReadNumber()
{
	int Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

void AddArrayElement(int Number, int Arr[100], int &ArrLenght)
{

	ArrLenght++;
	Arr[ArrLenght - 1] = Number;

}

void InputNumberInArray(int Arr[100], int &ArrLenght)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(ReadNumber(), Arr, ArrLenght);

		cout << "Do you want to add more number? [0]:No,[1]:Yes? ";
		cin >> AddMore;
	} while (AddMore);

}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

*/

// #37

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void AddArrayElement(int Number, int Arr[100], int& ArrLenght)
{

	ArrLenght++;
	Arr[ArrLenght - 1] = Number;

}

void CopyArrayUsingAddArrayElement(int ArrSource[100], int ArrDestination[100], int ArrLenght, int &ArrDestinationLenght)
{
	for (int i = 0; i < ArrLenght; i++)
		AddArrayElement(ArrSource[i], ArrDestination, ArrDestinationLenght);
}

*/

// #38

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void AddArrayElement(int Number, int Arr[100], int& ArrLenght)
{

	ArrLenght++;
	Arr[ArrLenght - 1] = Number;

}

void CopyOddNumber(int ArrSource[100], int ArrDestination[100], int ArrLenght, int &ArrDestinationLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		if ((ArrSource[i] % 2) != 0)
			AddArrayElement(ArrSource[i], ArrDestination, ArrDestinationLenght);
	}
}

*/

// #39

/*

enum enPrimNotPrim { Prim = 0, NotPrim = 1 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

enPrimNotPrim CheckPrimNumber(int Number)
{
	int M = round(sqrt(Number));

	for (int i = 2; i <= M; i++)
		if (Number % i == 0)
			return enPrimNotPrim::NotPrim;

	return enPrimNotPrim::Prim;
}

void AddArrayElement(int Number, int Arr[100], int& ArrLenght)
{

	ArrLenght++;
	Arr[ArrLenght - 1] = Number;

}

void CopyPrimeNumber(int ArrSource[100], int ArrDestination[100], int ArrLenght, int& ArrDestinationLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		if (CheckPrimNumber(ArrSource[i]) == enPrimNotPrim::Prim )
			AddArrayElement(ArrSource[i], ArrDestination, ArrDestinationLenght);
	}
}

*/

// #40

/*

void FillArray(int Arr[100], int& ArrLenght)
{
	ArrLenght = 10;
	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 10;
	Arr[3] = 50;
	Arr[4] = 50;
	Arr[5] = 70;
	Arr[6] = 70;
	Arr[7] = 70;
	Arr[8] = 70;
	Arr[9] = 90;



}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}

short FindNumberPositionInArray(int Arr[100], int ArrLenght, int NumberSearch)
{
	for (int i = 0; i < NumberSearch; i++)
	{
		if (Arr[i] == NumberSearch)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int Arr[100], int ArrLenght, int NumberSearch)
{

	return FindNumberPositionInArray(Arr, ArrLenght, NumberSearch) != -1;

}

void AddArrayElement(int Number, int Arr[100], int& ArrLenght)
{

	ArrLenght++;
	Arr[ArrLenght - 1] = Number;

}

void CopyDistinctNumbersToArray(int ArrSource[100], int ArrDestination[100], int ArrLenght, int& ArrDestinationLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		if (!IsNumberInArray(ArrDestination, i, ArrSource[i]))
			AddArrayElement(ArrSource[i], ArrDestination, ArrDestinationLenght);
	}
}

*/

// #41

/*

void FillArray(int Arr[100], int& ArrLenght)
{

	ArrLenght = 6;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;

}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindromNumber(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{

		if (Arr[i] != Arr[ArrLenght - 1 - i])
			return false;

	}

	return true;
}

*/

// #42

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int CountOdd(int Arr[100], int ArrLenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		if ((Arr[i] % 2) != 0)
		{
			Counter++;
		}
	}
	return Counter;
}

*/

// #43

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int CountEven(int Arr[100], int ArrLenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		if ((Arr[i] % 2) == 0)
		{
			Counter++;
		}
	}
	return Counter;
}

*/

// #44

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int CountPositif(int Arr[100], int ArrLenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		if (Arr[i] >= 0)
		{
			Counter++;
		}
	}
	return Counter;
}

*/

// #45

/*

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLenght)
{
	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	for (int i = 0; i < ArrLenght; i++)
		Arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int Arr[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int CountNegatif(int Arr[100], int ArrLenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		if (Arr[i] < 0)
		{
			Counter++;
		}
	}
	return Counter;
}

*/

// #46

/*

int ReadNumber()
{
	int Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

int MyABS(int Number)
{
	if (Number > 0)
		return Number;
	else
		return Number * -1;
}

*/

// #47

/*

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float FractionsPart = GetFractionPart(Number);

	if (abs(FractionsPart) >= .5)
		if (IntPart > 0)
			return ++IntPart;
		else
			return --IntPart;
	else
		return IntPart;
}

float ReadNumber()
{
	float Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

*/

// #48

/*

int MyFloor(float Number)
{
	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;

}

float ReadNumber()
{
	float Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

*/

// #49

/*

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	return Number;
}

float ReadNumber()
{
	float Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

*/

// #50

/*

float MySqrt(float Number)
{

	return pow(Number, 0.5);

}

float ReadNumber()
{
	float Number;

	cout << "Please Enter A Number : ";
	cin >> Number;

	return Number;
}

*/

int main()
{
	// #1

	/*

	PrintMultiplactionTable();

	*/

	// #2

	/*

	PrintPrimeNumber1ToN(PrintNumberPositif());

	*/

	// #3

	/*

	PrintPerfectNotPerfect(ReadNumberPositif("PLease Enter Positif Number : "));

	*/

	// #4

	/*

	NumberPerfect1ToN(ReadNumberPositif("PLease Enter Positif Number : "));

	*/

	// #5

	/*

	PrintDegits(ReadNumberPositif("Please Enter Positif Number : "));
	
	*/

	// #6

	/*

	cout <<"\nSum Of Digits = "
		<< PrintDegits(ReadNumberPositif("Please Enter Positif Number : "))
		<< "\n";

	*/

	// #7

	/*

	cout << "\nReverse Number is : \n"
		<< ReverseNumber(ReadPositifNumber("Please Enter Positif Number : "))
		<< endl;

	*/

	// #8

	/*

	int Number = ReadPositifNumber("Please Enter The main Number : ");
	short DigitToCheck = ReadPositifNumber("Please Enter one digit to Check : ");

	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

	*/

	// #9

	/*

	int Number = ReadPositifNumber("Please Enter A Positif Number : ");
	PrintNumberForDigits(Number);

	*/

	// #10

	/*

	PrintDegits(ReverseNumber(ReadNumberPositif("Please Enter The Positif Number : ")));

	*/

	// #11

	/*

	if (IsPalindromNumber(ReadNumberPositif("Please Enter A positif Number : ")))
		cout << "\nYes ,it is a Palindrome Number.\n";
	else
		cout << "\nNo ,it is Not a Palindrome Number.\n";

	*/

	// #12

	/*

	PrintInvertedNumberPattern(ReadNumberPositif("PLease Enter A Positif Number : "));

	*/

	// #13
	
	/*

	PrintNumberPattern(ReadNumberPositif("PLease Enter A Positif Number : "));

	*/

	// #14

	/*

	PrintInvertedLetterPattern(ReadNumberPositif("PLease Enter A Positif Number : "));

	*/

	// #15

	/*

	PrintLetterPattern(ReadNumberPositif("PLease Enter A Positif Number : "));

	*/

	// #16

	/*

	PrintWordsFromAAAtoZZZ();

	*/

	// #17

	/*

	GuessPassword(ReadPassword());

	*/

	// #18

	/*

	int const EncryptedKey = 2;

	string Text = ReadText();
	string TextEncription = ConvertTextToEncryption(Text, EncryptedKey);
	string TextDecryption = ConvertEncryptionToText(TextEncription, EncryptedKey);

	cout << "\nText Before Encryption : " << Text << endl;
	cout << "\nText After Encryption : " << TextEncription << endl;
	cout << "\nText After Decryption : " << TextDecryption << endl;

	*/

	// #19

	/*

	srand((unsigned)time(NULL));

	cout << RandomNumber(1 , 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

	*/

	// #20

	/*

	srand((unsigned)time(NULL));

	// { SmallLetter = 1, CapitallLetter = 2, SpecialCharacter = 3, DigitInOrder = 4 }
	cout << GetRandomCharacter(SmallLetter) << endl; 
	cout << GetRandomCharacter(CapitallLetter) << endl;
	cout << GetRandomCharacter(SpecialCharacter) << endl;
	cout << GetRandomCharacter(Digit) << endl;

	*/

	// #21

	/*

	srand((unsigned)time(NULL));

	Genaretorkeys(ReadNumberPositif("PLease Enter Number Keys : "));

	*/

	// #22

	/*

	int Arr[100], ArrLenght, NumberCheck;

	ReadArray(Arr, ArrLenght);

	NumberCheck = ReadNumberPositif("Enter the number you want to check : ");

	cout << "Original Array : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nNumber " << NumberCheck
		<< " is repeated ";
	cout << TimesRepeats(Arr, ArrLenght, NumberCheck) 
		<< " Time(s)\n";

	*/

	// #23

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray Elements : ";
	PrintArray(Arr, ArrLenght);

	*/

	// #24

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray Elements : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nThe Max Of Array is : ";
	cout << MaxNumberInArray(Arr, ArrLenght);

	*/

	// #25
	
	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray Elements : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nThe Minumium Of Array is : ";
	cout << MinNumberInArray(Arr, ArrLenght);

	*/

	// #26

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray Elements : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nSum of all number is : ";
	cout << SumArray(Arr, ArrLenght);

	*/

	// #27

	/*
	
	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray Elements : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nAverage of all number is : ";
	cout << AvergeArray(Arr,ArrLenght);

	*/

	// #28

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	int Arr2[100];
	CopyArray(Arr, Arr2, ArrLenght);

	cout << "\nArray 1 elements  : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 elements after copy : ";
	PrintArray(Arr2, ArrLenght);

	*/

	// #29

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	int Arr2[100], Array2Lenght = 0;
	CopyOnlyPrimeNumbers(Arr, Arr2, ArrLenght, Array2Lenght);

	cout << "\nArray 1 elements  : ";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 elements after copy : ";
	PrintArray(Arr2, Array2Lenght);

	*/

	// #30

	/*

	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrSum[100], ArrLenght;

	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	FillArrayWithRandomNumbers(Arr ,ArrLenght);
	FillArrayWithRandomNumbers(Arr2, ArrLenght);

	SumOf2Array(Arr, Arr2, ArrSum, ArrLenght);

	cout << "\nArray 1 elements: \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 elements after copy: \n";
	PrintArray(Arr2, ArrLenght);

	cout << "\nSum of Array1 and Array2 element: \n";
	PrintArray(ArrSum, ArrLenght);

	*/

	// #31

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	FillArrayNumbers1ToN(Arr, ArrLenght);
	
	cout << "\nArray elements Before Shuffle: \n";
	PrintArray(Arr, ArrLenght);


	RandomNumber1ToN(Arr, ArrLenght);

	cout << "\nArray elements After Shuffle: \n";
	PrintArray(Arr, ArrLenght);

	*/

	// #32

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	cout << "Please Enter Lenght For Element : ";
	cin >> ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray elements Before Shuffle: \n";
	PrintArray(Arr, ArrLenght);

	int Arr2[100];
	ReverseRandomNumber(Arr, Arr2, ArrLenght);

	cout << "\nArray elements After Shuffle: \n";
	PrintArray(Arr2, ArrLenght);

	*/

	// #33

	/*

	srand((unsigned)time(NULL));

	string Arr[100];
	int ArrLenght;

	ArrLenght = ReadNumberPositif("Please Enter Number Keys : ");

	FillArraysWithKeys(Arr, ArrLenght);

	PrintArrayKeys(Arr, ArrLenght);

	*/

	// #34

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;
	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray 1 Elements : ";
	PrintArray(Arr, ArrLenght);

	int Number = ReadNumber();

	cout << "Number you are looking for is: " << Number << endl;

	short Numberposition = FindNumberPositionInArray(Arr, ArrLenght, Number);
	
	if (Numberposition  == -1)
	{
		cout << "\nThe number is not found:-( " << endl;
	}
	else
	{
		cout << "\nThe number found position: " << Numberposition << endl;
		cout << "The number found its order: " << Numberposition + 1 << endl;
	}

	*/

	// #35

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;
	FillArrayWithRandomNumbers(Arr, ArrLenght);

	cout << "\nArray 1 Elements : ";
	PrintArray(Arr, ArrLenght);

	int Number = ReadNumber();

	cout << "\nNumber you are looking for is: " << Number << endl;

	if (!IsNumberInArray(Arr, ArrLenght, Number))
	{
		cout << "\nNo, The number is Not found :-( \n";
	}
	else
	{
		cout << "\nYes, The number is found :-) \n";
	}

	*/

	// #36
	
	/*

	int Arr[100], ArrLenght = 0;

	InputNumberInArray(Arr, ArrLenght);

	cout << "\nArray Lenght : " << ArrLenght << endl;
	cout << "\nArray Element : ";
	PrintArray(Arr, ArrLenght);

	*/

	// #37

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght, Arr2Lenght = 0;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	int Arr2[100];
	CopyArrayUsingAddArrayElement(Arr, Arr2, ArrLenght, Arr2Lenght);

	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 elements after copy : \n";
	PrintArray(Arr2, Arr2Lenght);

	*/

	// #38

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght, Arr2Lenght = 0;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	int Arr2[100];
	CopyOddNumber(Arr, Arr2, ArrLenght, Arr2Lenght);

	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 Odd Numbers : \n";
	PrintArray(Arr2, Arr2Lenght);

	*/

	// #39

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght, Arr2Lenght = 0;

	FillArrayWithRandomNumbers(Arr, ArrLenght);

	int Arr2[100];
	CopyPrimeNumber(Arr, Arr2, ArrLenght, Arr2Lenght);
	
	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 Prime Numbers : \n";
	PrintArray(Arr2, Arr2Lenght);

	*/

	// #40

	/*

	int Arr[100], ArrLenght, Arr2Lenght = 0;

	FillArray(Arr, ArrLenght);

	int Arr2[100];
	CopyDistinctNumbersToArray(Arr, Arr2, ArrLenght, Arr2Lenght);

	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nArray 2 Number Not Repeat : \n";
	PrintArray(Arr2, Arr2Lenght);

	*/

	// #41

	/*

	int Arr[100], ArrLenght = 0;

	FillArray(Arr, ArrLenght);


	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	if (IsPalindromNumber(Arr, ArrLenght))
		cout << "\nYes Array Is Palindrom\n";
	else
		cout << "\nNo Array Is Not Palindrom\n";

	*/

	// #42

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);


	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nCounter Odd Numbers : \n";
	cout << CountOddNumber(Arr, ArrLenght) << endl;

	*/

	// #43

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);


	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nCounter Even Numbers : \n";
	cout << CountEven(Arr, ArrLenght) << endl;

	*/

	// #44

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);


	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nCounter Posif Numbers : \n";
	cout << CountPositif(Arr, ArrLenght) << endl;

	*/

	// #45

	/*

	srand((unsigned)time(NULL));

	int Arr[100], ArrLenght;

	FillArrayWithRandomNumbers(Arr, ArrLenght);


	cout << "\nArray 1 elements : \n";
	PrintArray(Arr, ArrLenght);

	cout << "\nCounter Negatif Numbers : \n";
	cout << CountNegatif(Arr, ArrLenght) << endl;

	*/

	// #46

	/*

	int Number = ReadNumber();

	cout << "My abs Result : " << MyABS(Number) << endl;
	cout << "C++ abs Result : " << abs(Number) << endl;

	*/

	// #47

	/*

	float Number = ReadNumber();

	cout << "My Round Result : " << MyRound(Number) << endl;
	cout << "C++ Round Result : " << round(Number) << endl;

	*/

	// #48

	/*

	float Number = ReadNumber();

	cout << "My Floor Result : " << MyFloor(Number) << endl;
	cout << "C++ Floor Result : " << floor(Number) << endl;

	*/

	// #49

	/*

	float Number = ReadNumber();

	cout << "My Ceil Result : " << MyCeil(Number) << endl;
	cout << "C++ Ceil Result : " << ceil(Number) << endl;

	*/

	// #50

	/*

	float Number = ReadNumber();

	cout << "My Sqrt Result : " << MySqrt(Number) << endl;
	cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

	*/
	
	return 0;
}

