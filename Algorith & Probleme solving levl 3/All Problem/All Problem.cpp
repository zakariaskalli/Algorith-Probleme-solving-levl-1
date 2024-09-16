
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>


using namespace std;


// Problem 1

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

*/

// Problem 2

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

int RowSum(int arr[3][3], int NumRow, int Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[NumRow][j];
    }

    return Sum;
}

void PrintEachRowSum(int arr[3][3], int Rows, int Cols)
{
    cout << "The following are the sum of each row in the matrix : " << endl;
    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
    }
}

*/

// Problem 3

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

int RowSum(int arr[3][3], int NumRow, int Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[NumRow][j];
    }

    return Sum;
}

void SumMatrixRowsInarray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        arrSum[i] = RowSum(arr, i, Cols);
    }
}

void PrintRowsSumarray(int arr[3], int Rows)
{
    cout << "The following are the sum of each row in the matrix : " << endl;

    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << arr [i] << endl;
    }
}

*/

// Problem 4

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;

    for (short j = 0; j < Rows; j++)
    {
        Sum += arr[j][ColNumber];
    }

    return Sum;
}

void PrintEachColSum(int arr[3][3], int Rows, int Cols)
{
    cout << "The following are the sum of each col in the matrix : " << endl;
    for (short i = 0; i < Cols; i++)
    {
        cout << "Col " << i + 1 << " Sum = " << ColSum(arr, Rows, i) << endl;
    }
}

*/

// Problem 5

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

int ColSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;

    for (short j = 0; j < Rows; j++)
    {
        Sum += arr[j][ColNumber];
    }

    return Sum;
}

void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Cols; i++)
    {

        arrSum[i] = ColSum(arr, Rows, i);

    }
}

void PrintColsSumArray(int arr[3], int length)
{
    cout << "The following are the sum of each col in the matrix : " << endl;

    for (short i = 0; i < length; i++)
    {
        cout << "Col " << i + 1 << " Sum = " << arr[i] << endl;
    }
}

*/

// Problem 6

/*

void FillMatrixWithOrderedNumbers(int arr[3][3], int Rows, int Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

*/

// Problem 7

/*

void FillMatrixWithOrderedNumbers(int arr[3][3], int Rows, int Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], int Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrTransposed[i][j] = arr[j][i];
        }
    }

}

*/

// Problem 8

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],
    int MatrixResults[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            MatrixResults[j][i] = Matrix1[j][i] * Matrix2[j][i];
        }
    }

}

*/

// Problem 9

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}

void PrintMiddleRowOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;

    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d   ", 2, Matrix1[MiddleRow][j]);
    }
    cout << "\n";
}

void PrintMiddleColOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{

    short MiddleCols = Cols / 2;

    for (short j = 0; j < Rows; j++)
    {
        printf(" %0*d   ", 2, Matrix1[j][MiddleCols]);
    }
    cout << "\n";
}

*/

// Problem 10

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
    }

    return Sum;
}

*/

// Problem 11

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
    }

    return Sum;
}

bool AreEqualMatrix(int arr1[3][3], int arr2[3][3],int Rows,int Cols)
{
    return (SumOfMatrix(arr1, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols));
}

*/

// Problem 12

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}

bool AreTypicalMatrices(int arr1[3][3], int arr2[3][3],int Rows,int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                return false;
        }
    }

    return true;
}

*/

// Problem 13

/*

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 1, arr[i][j]);
        }
        cout << "\n";
    }

}

bool IsIdentityMatrix(int arr1[3][3],int Rows,int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && arr1[i][j] != 1)
            {
                return false;
            }
            else if (i != j && arr1[i][j] != 0)
            {
                return false;
            }

        }
    }

    return true;
}

*/

// Problem 14

/*
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 1, arr[i][j]);
        }
        cout << "\n";
    }

}

bool IsScalarMatrix(int Matrix1[3][3],int Rows,int Cols)
{
    int FirstDiagonalElement = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][j] != FirstDiagonalElement)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }

        }
    }

    return true;
}

*/

// Problem 15

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix1[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

short CountNumberInMatrix(int Matrix1[3][3],int Number,int Rows, int Cols)
{
    short NumberCount = 0;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Number)
                NumberCount++;
        }
    }

    return NumberCount;
}

*/

// Problem 16

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix1[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

short CountNumberInMatrix(int Matrix1[3][3], int Number, int Rows, int Cols)
{
    short NumberCount = 0;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Number)
                NumberCount++;
        }
    }

    return NumberCount;
}

bool IsSparseMatrix(int Matrix1[3][3], int Rows, int Cols)
{
    short MatrixSize = Rows * Cols;

    return (CountNumberInMatrix(Matrix1, 0, 3, 3) >= (MatrixSize / 2));
}

*/

// Problem 17

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix1[3][3],int Rows,int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

bool IsExistsInMatrix(int Matrix1[3][3],int Number,int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Number)
                return true;
        }
    }
    return false;
}

*/

// Problem 18

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << "\n";
    }

}

bool IsExistsInMatrix(int Matrix1[3][3], int Number, int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Number)
                return true;
        }
    }
    return false;
}

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3],
    short Rows, short Cols)
{
    int Number;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];

            if (IsExistsInMatrix(Matrix2, Number, Rows, Cols))
                cout << setw(3) << Number << "     ";
        }
    }
}

*/

// Problem 19

/*

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix1[3][3], int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix1[i][j] = RandomNumber(1, 10);
        }
    }

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

int MinNumberInMatrix(int Matrix1[3][3], int Rows, int Cols)
{
    int Min = Matrix1[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] < Min )
                Min = Matrix1[i][j];
        }
    }
    return Min;

}

int MaxNumberInMatrix(int Matrix1[3][3], int Rows, int Cols)
{
    int Max = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Max < Matrix1[i][j])
                Max = Matrix1[i][j];
        }
    }

    return Max;
}

*/

// Problem 20

/*

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << endl;
    }

}

bool IsPalindromeMatrix(int Matrix1[3][3], int Rows, int Cols)
{


    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols / 2; j++)
        {
            if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
                return false;
        }
    }
    return true;
}

*/

// Problem 21

/*

void PrintFibonacciUsingLoop(int Number)
{
    int FebNum = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << " 1   ";
    for (int i = 2; i <= Number; ++i)
    {
        FebNum = Prev1 + Prev2;
        cout << FebNum << "    ";
        Prev2 = Prev1;
        Prev1 = FebNum;
    }
}

*/

// Problem 22

/*

void PrintFibonacciUsingRecursion(int Number, int Prev1, int Prev2)
{
    int FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout << FebNumber << "    ";

        PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
    }
}

*/

// Problem 23

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

void PrintFirstLetterOfEachWord(string S1)
{
    bool IsFirstLetter = true;

    cout << "\nFirst letters of this string: \n";

    for (short i = 0; i < S1.length(); i++)
    {

        if (S1[i] != ' ' && IsFirstLetter == true)
        {
            cout << S1[i] << endl;
        }

        IsFirstLetter = (S1[i] == ' ' ? true : false);
    }
}

*/

// Problem 24

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

string UpperFirstLetterOfEachWord(string S1)
{
    bool IsFirstLetter = true;


    for (short i = 0; i < S1.length(); i++)
    {

        if (S1[i] != ' ' && IsFirstLetter == true)
        {
            S1[i] = toupper(S1[i]);
        }

        IsFirstLetter = (S1[i] == ' ' ? true : false);
    }

    return S1;
}

*/

// Problem 25

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

string LowerFirstLetterOfEachWord(string S1)
{
    bool IsFirstLetter = true;

    for (short i = 0; i < S1.length(); i++)
    {

        if (S1[i] != ' ' && IsFirstLetter == true)
        {
            S1[i] = tolower(S1[i]);
        }

        IsFirstLetter = (S1[i] == ' ' ? true : false);
    }

    return S1;
}

*/

// Problem 26

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

string UpperAllWord(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = toupper(S1[i]);
    }
    return S1;
}

string LowerAllWord(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}

*/

// Problem 27

/*

char ReadChar()
{
    char Ch1;

    cout << "Please Enter Your a Character?\n";
    cin >> Ch1;

    return Ch1;
}

char InvertLetterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);

}

*/

// Problem 28

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

char InvertLetterCase(char Char1)
{
    return isupper(Char1) ? tolower(Char1) : toupper(Char1);

}

string InvertAllStringLettersCase(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = InvertLetterCase(S1[i]);
    }
    return S1;
}

*/

// Problem 29

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3};

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
        return S1.length();

    short Counter = 0;


    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
            Counter++;
        else if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
            Counter++;
    }

    return Counter;
}

short CountCapitalLetters(string S1)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {

        if (isupper(S1[i]))
            Counter++;

    }

    return Counter;
}

short CountSmallLetters(string S1)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {

        if (islower(S1[i]))
            Counter++;

    }

    return Counter;
}

*/

// Problem 30

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

char ReadChar()
{
    char Ch1;

    cout << "Please Enter Your a Character?\n";
    cin >> Ch1;

    return Ch1;
}

short CountLetter(string S1, char Char1)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == Char1)
            Counter++;
    }

    return Counter;
}

*/

// Problem 31

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

char ReadChar()
{
    char Ch1;

    cout << "Please Enter Your a Character?\n";
    cin >> Ch1;

    return Ch1;
}

char InvertLetterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);

}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter)
                Counter++;
        }
        else
        {
            if (tolower(S1[i]) == tolower(Letter))
                Counter++;
        }
    }

    return Counter;
}

*/

// Problem 32

/*

char ReadChar()
{
    char Ch1;

    cout << "Please Enter Your a Character?\n";
    cin >> Ch1;

    return Ch1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

*/

// Problem 33

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowels(string S1)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            Counter++;
    }

    return Counter;
}

*/

// Problem 34

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

void PrintVowels(string S1)
{
    cout << "Vowels in string are: ";

    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            cout << S1[i] << "     ";
    }

}

*/

// Problem 35

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

void PrintEachWordInString(string S1)
{
    string delim = " ";

    cout << "\n\nYour string words are:\n\n";
    short pos = 0;
    string sWorld;


    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWorld = S1.substr(0, pos);

        if (sWorld != "")
            cout << sWorld << endl;

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
        cout << S1 << endl;
}

*/

// Problem 36

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

short CountWords(string S1)
{
    string delim = " ";
    short Counter = 0;
    short pos = 0;
    string sWorld;


    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWorld = S1.substr(0, pos);

        if (sWorld != "")
            Counter++;

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
        Counter++;

    return Counter;
}

*/

// Problem 37

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

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
        vString.push_back(sWorld);

    return vString;
}

*/

// Problem 38

/*

string TrimLeft(string S1)
{

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
            return S1.substr(i, S1.length() - 1);
    }

    return "";
}

string TrimRight(string S1)
{

    for (int i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
            return S1.substr(0, i + 1);
    }

    return "";
}

string Trim(string S1)
{
    return TrimLeft(TrimRight(S1));
}

*/

// Problem 39

/*

string JoinString(vector <string> vString, string delim)
{
    string S1 = "";

    for (string &s : vString)
    {
        S1 = S1 + s + delim;
    }

    return S1.substr(0, S1.length() - delim.length());
}

*/

// Problem 40

/*

string JoinString(vector <string> vString, string delim)
{
    string S1 = "";

    for (string &s : vString)
    {
        S1 = S1 + s + delim;
    }

    return S1.substr(0, S1.length() - delim.length());
}

string JoinString(string ArrString[], short length, string delim)
{
    string S1 = "";

    for (int i = 0; i < length; i++)
    {
        S1 = S1 + ArrString[i] + delim;
    }

    return S1.substr(0, S1.length() - delim.length());
}

*/

// Problem 41

/*

string ReadString()
{
    string S1;

    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

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

string ReverseWordsInString(string S1)
{
    vector <string> vString;

    string S2 = "";

    vString = SplitString(S1, " ");

    vector <string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;

        S2 += *iter + " ";
    }

    S2 = S2.substr(0, S2.length() - 1);

    return S2;
}

*/

// Problem 42

/*

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo)
{
    int pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);
        pos = S1.find(StringToReplace);
    }

    return S1;
}

*/

// Problem 43

/*

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
        vString.push_back(sWorld);

    return vString;
}

string JoinString(vector <string> vString, string delim)
{
    string S1 = "";

    for (string& s : vString)
    {
        S1 = S1 + s + delim;
    }

    return S1.substr(0, S1.length() - delim.length());
}

string LowerAllWord(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}

string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string sReplaceTo, bool MatchCase = true)
{
    vector <string> vString = SplitString(S1, " ");

    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
                s = sReplaceTo;
        }
        else
        {
            if (LowerAllWord(s) == LowerAllWord(StringToReplace))
                s = sReplaceTo;
        }
    }

    return JoinString(vString, " ");
}

*/

// Problem 44

/*

string RemovePunctuationsFromString(string S1)
{
    string S2 = "";

    for (int i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }
    }

    return S2;
}

*/

// Problem 45

/*

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient()
{
    sClient Client;

    cout << "Please Enter Client Data:\n\n";

    cout << "Enter Account Number? ";
    getline(cin, Client.AccountNumber);

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter Account Balance? ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

*/

// Problem 46

/*

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector <string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

void PrintClientRecord(sClient Client)
{

    cout << "\n\nThe following is the extracted client record\n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;

}

*/

// Problem 47

/*

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient()
{
    sClient Client;

    cout << "Please Account Number?\n\n";

    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.AccountNumber);

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter Account Balance? ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

void AddDataToFile(string FileName, string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << stDataLine << endl;

        MyFile.close();
    }

}

void AddNewClient()
{
    sClient Client;
    Client = ReadNewClient();
    AddDataToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddClients()
{
    char AddClient;

    do
    {
        system("cls");
        cout << "Adding New Client:\n\n";

        AddNewClient();
        cout << "Client Added Successfully, do you want to mere client? Y/N? ";
        cin >> AddClient;

    } while (toupper(AddClient) == 'Y');
}

*/

// Problem 48

/*

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector <string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector <sClient> LoadClientsDataFromFile(string FileName)
{
    vector <sClient> vClients;
    fstream MyFile;
    MyFile.open(ClientsFileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);

            vClients.push_back(Client);
        }

        MyFile.close();
    }
    return vClients;
}

void PrintClientRecord(sClient Client)
{
    cout << " | " << setw(15) << left << Client.AccountNumber;
    cout << " | " << setw(10) << left << Client.PinCode;
    cout << " | " << setw(40) << left << Client.Name;
    cout << " | " << setw(12) << left << Client.Phone;
    cout << " | " << setw(12) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector <sClient> vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << " | " << left << setw(15) << "Account Number";
    cout << " | " << left << setw(10) << "Pin Code";
    cout << " | " << left << setw(40) << "Client Name";
    cout << " | " << left << setw(12) << "Phone";
    cout << " | " << left << setw(12) << "Balance";

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    for (sClient Client : vClients)
    {

        PrintClientRecord(Client);
        cout << endl;

    }
    cout << "\n____________________________________________________________________";
    cout << "____________________________\n\n";
}

*/

// Problem 49

/*

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector <string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector <sClient> LoadClientsDataFromFile(string FileName)
{
    vector <sClient> vClients;
    fstream MyFile;
    MyFile.open(ClientsFileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);

            vClients.push_back(Client);
        }

        MyFile.close();
    }
    return vClients;
}

void PrintClientCard(sClient Client)
{

    cout << "\n\nThe following is the extracted client record\n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;

}

bool FindClientByAccountNumber(string AccountNumber, sClient & Client)
{
    vector <sClient> Clients = LoadClientsDataFromFile(ClientsFileName);

    for (sClient C : Clients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "Please Enter AccountNumber ? ";
    cin >> AccountNumber;

    return AccountNumber;
}

*/

// Problem 50

/*

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector <string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

vector <sClient> LoadClientsDataFromFile(string FileName)
{
    vector <sClient> vClients;
    fstream MyFile;
    MyFile.open(ClientsFileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }
    return vClients;
}

void PrintClientCard(sClient Client)
{

    cout << "\n\nThe following is the extracted client record\n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;

}

bool FindClientByAccountNumber(string AccountNumber, vector <sClient>& vClients, sClient& Client)
{
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
    for (sClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

vector <sClient> SaveClientsDataToFile(string FileName, vector <sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    string DataLine;


    if (MyFile.is_open())
    {
        for (sClient & C : vClients)
        {
            if (C.MarkForDelete == false)
            {
                DataLine = ConvertRecordToLine(C);

                MyFile << DataLine << endl;

            }
        }
        MyFile.close();
    }

    return vClients;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);


        cout << "Are you sure you want deleted this client? y/n? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveClientsDataToFile(ClientsFileName, vClients);

            vClients = LoadClientsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
        else
            cout << "Client Is Not Deleted." << endl;
    }
    else
    {
        cout << "Client With Account Number (" << AccountNumber << ") Not Found!" << endl;
        return false;
    }
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "Please Enter AccountNumber ? ";
    cin >> AccountNumber;

    return AccountNumber;
}

*/

// Problem 51

/*

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkToUpdate = false;
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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector <string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

vector <sClient> LoadClientsDataFromFile(string FileName)
{
    vector <sClient> vClients;
    fstream MyFile;
    MyFile.open(ClientsFileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }
    return vClients;
}

void PrintClientCard(sClient Client)
{

    cout << "\n\nThe following is the extracted client record\n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;

}

bool FindClientByAccountNumber(string AccountNumber, vector <sClient>& vClients, sClient& Client)
{
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

sClient ChangeClientData(string AccountNumber)
{
    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "Enter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter Account Balance? ";
    cin >> Client.AccountBalance;

    return Client;
}

vector <sClient> SaveClientsDataToFile(string FileName, vector <sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    string DataLine;


    if (MyFile.is_open())
    {
        for (sClient& C : vClients)
        {
            DataLine = ConvertRecordToLine(C);
            MyFile << DataLine << endl;

        }
        MyFile.close();
    }

    return vClients;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector <sClient> &vClients)
{
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);
        cout << "Are you sure you want Update this client? y/n? ";
        
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            for (sClient & C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientData(AccountNumber);
                    break;
                }
            }

            SaveClientsDataToFile(ClientsFileName, vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }
        else
            cout << "Client Is Not Update." << endl;
    }
    else
    {
        cout << "Client With Account Number (" << AccountNumber << ") Not Found!" << endl;
        return false;
    }
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "Please Enter AccountNumber ? ";
    cin >> AccountNumber;

    return AccountNumber;
}

*/

int main()
{

    // Problem 1

    /*

    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is 3x3 random matrix:" << endl;

    PrintMatrix(arr, 3, 3);

    */

    // Problem 2
    
    /*

    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is 3x3 random matrix:" << endl;

    PrintMatrix(arr, 3, 3);


    PrintEachRowSum(arr, 3, 3);

    */

    // Problem 3

    /*

    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr, 3, 3);

    SumMatrixRowsInarray(arr, arrSum, 3, 3);

    PrintRowsSumarray(arrSum,3);

    */

    // Problem 4

    /*

    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr, 3, 3);


    PrintEachColSum(arr, 3, 3);

    */

    // Problem 5

    /*

    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr, 3, 3);

    SumMatrixColsInArray(arr, arrSum, 3, 3);

    PrintColsSumArray(arrSum,3);

    */

    // Problem 6

    /*

    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout << "The following is 3x3 with orders numbers:" << endl;

    PrintMatrix(arr, 3, 3);

    */

    // Problem 7

    /*

    int arr[3][3], arrTransposed[3][3];

    FillMatrixWithOrderedNumbers(arr, 3, 3);
    cout << "The following is 3x3 with orders numbers:" << endl;

    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTransposed, 3, 3);

    cout << "\n\nThe following is 3x3 with Transpose numbers:" << endl;
    PrintMatrix(arrTransposed, 3, 3);

    */

    // Problem 8

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);


    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix2, 3, 3);

    MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);

     cout << "Results:" << endl;
    PrintMatrix(MatrixResults, 3, 3);

    */

    // Problem 9

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);


    cout << "\nMiddle Row of Matrix1 is:\n";
    PrintMiddleRowOfMatrix(Matrix1, 3, 3);


    cout << "\nMiddle Col of Matrix1 is:\n";
    PrintMiddleColOfMatrix(Matrix1, 3, 3);

    */

    // Problem 10

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nSum Of Matrix1 is: " << SumOfMatrix(Matrix1, 3, 3) << endl;

    */

    // Problem 11

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix2:\n" << endl;
    PrintMatrix(Matrix2, 3, 3);

    if (AreEqualMatrix(Matrix1, Matrix2, 3, 3))
        cout << "\nYES: both martices are equal.";
    else
        cout << "\nNo: martices are NOT equal.";

    */

    // Problem 12

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];


    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix2:\n" << endl;
    PrintMatrix(Matrix2, 3, 3);

    if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYES: both martices are equal.";
    else
        cout << "\nNo: martices are NOT equal.";

    */

    // Problem 13

    /*

    srand((unsigned)time(NULL));

    //int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Matrix1[3][3] = { { 1,0,0 }, {0,1,0}, {0,0,1} };


    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);


    if (IsIdentityMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is identity.";
    else
        cout << "\nNo: Matrix is NOT identity.";

    */

    // Problem 14 

    /*

    srand((unsigned)time(NULL));

    //int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Matrix1[3][3] = { { 9,0,0 }, {0,9,0}, {0,0,9} };


    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);


    if (IsScalarMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is scalar.";
    else
        cout << "\nNo: Matrix is NOT scalar.";

    */

    // Problem 15

    /*

    int Matrix1[3][3] = { {9,1,12},{0,9,1},{0,9,9} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "Enter The Number to count in matrix? ";
    cin >> Number;

    cout << "Number " << Number << " count in matrix is "
        << CountNumberInMatrix(Matrix1, Number, 3, 3) << endl;

    */

    // Problem 16

    /*

    int Matrix1[3][3] = { {0,0,0},{0,9,1},{0,9,9} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    if (IsSparseMatrix(Matrix1, 3, 3))
        cout << "\nYES: It is Sparse\n";
    else
        cout << "\No: It NOT Sparse\n";

    */

    // Problem 17

    /*

    int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "Please Enter The Number to look for in matrix? ";
    cin >> Number;

    if (IsExistsInMatrix(Matrix1, Number, 3, 3))
        cout << "Yes it is there." << endl;
    else
        cout << "No it is Not there." << endl;

    */

    // Problem 18

    /*

    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {77,5,12}, {22,20,1}, {1,0,9} };
    int Matrix2[3][3] = { {5,80,90}, {22,77,1}, {10,8,33} };

    cout << "\nMatrix1:\n" << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2:\n" << endl;
    PrintMatrix(Matrix2, 3, 3);

    cout << "\n\nIntersected Numbers are :\n\n";
    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

    */

    // Problem 19

    /*

    int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMin Number is: ";
    cout << MinNumberInMatrix(Matrix1, 3, 3) << endl;

    cout << "\nMax Number is: ";
    cout << MaxNumberInMatrix(Matrix1, 3, 3) << endl;

    */

    // Problem 20

    /*

    int Matrix1[3][3] = { {1,0,1},{5,5,5},{7,3,7} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromeMatrix(Matrix1, 3, 3))
        cout << "Yes: Matrix is Palindrome" << endl;
    else
        cout << "No: Matrix is Not Palindrome" << endl;

    */

    // Problem 21

    /*

    PrintFibonacciUsingLoop(10);

    */

    // Problem 22

    /*

    PrintFibonacciUsingRecursion(10,0,1);

    */

    // Problem 23

    /*

    PrintFirstLetterOfEachWord(ReadString());

    */

    // Problem 24

    /*

    string S1 = ReadString();
    cout << "\nString after conversion:\n";

    S1 = UpperFirstLetterOfEachWord(S1);

    cout << S1 << endl;

    */

    // Problem 25

    /*

    string S1 = ReadString();
    cout << "\nString after conversion:\n";

    S1 = LowerFirstLetterOfEachWord(S1);

    cout << S1 << endl;

    */

    // Problem 26 // Small Or Capital Letters

    /*

    string S1 = ReadString();

    cout << "\nString after Upper:\n";
    S1 = UpperAllWord(S1);
    cout << S1 << endl;

    cout << "\nString after Lower:\n";
    S1 = LowerAllWord(S1);
    cout << S1 << endl;

    */

    // Problem 27

    /*

    char Ch1 = ReadChar();

    cout << "\nchar after inverting case:\n";
    Ch1 = InvertLetterCase(Ch1);

    cout << Ch1 << endl;

    */

    // Problem 28

    /*

    string S1 = ReadString();

    cout << "\nString after Inverting All Letters Case:\n";
    S1 = InvertAllStringLettersCase(S1);
    cout << S1 << endl;

    */

    // Problem 29

    /*

    string S1 = ReadString();

    cout << "\nString Length = " << S1.length();
    cout << "\nCapital Letters Count = " << CountCapitalLetters(S1);
    cout << "\nSmall Letters Count = " << CountSmallLetters(S1);

    cout << "\n\nMethod 2\n";

    cout << "\nString Length = " << CountLetters(S1);
    cout << "\nCapital Letters Count = " << CountLetters(S1, enWhatToCount::CapitalLetters);
    cout << "\nSmall Letters Count = " << CountLetters(S1, enWhatToCount::SmallLetters);

    */

    // Problem 30

    /*

    string S1 = ReadString();
    char Char1 = ReadChar();

    cout << "Letter \'" << Char1 << "\' Count = " << CountLetter(S1, Char1);

    */

    // Problem 31

    /*

    string S1 = ReadString();
    char Char1 = ReadChar();

    cout << "Letter \'" << Char1 << "\' Count = " << CountLetter(S1, Char1);

    cout << "\nLetter \'" << Char1 << "\'";
    cout << " Or \'" << InvertLetterCase(Char1) << "\' ";
    cout << "Count = " << CountLetter(S1, Char1, false);

    */

    // Problem 32

    /*

    char Char1 = ReadChar();


    if (IsVowel(Char1))
        cout << "Yes Letter \'" << Char1 << "\' is vowel" << endl;
    else
        cout << "NO Letter \'" << Char1 << "\' is NOT vowel" << endl;

    */

    // Problem 33

    /*

    string S1 = ReadString();

    cout << "\nNumber of vowels is: " << CountVowels(S1);

    */

    // Problem 34

    /*

    string S1 = ReadString();

    PrintVowels(S1);

    */

    // Problem 35

    /*

    PrintEachWordInString(ReadString());

    */

    // Problem 36

    /*

    string S1 = ReadString();

    cout << "The number of words in your string is : ";
    cout << CountWords(S1) ;

    */

    // Problem 37

    /*

    vector <string> vString;

    vString = SplitString(ReadString(), " ");

    cout << "Tokens = " << vString.size() << endl;

    for (string & s : vString)
    {
        cout << s << endl;
    }

    */

    // Problem 38

    /*

    string S1 = "      Mohammed Abu-Hahdoud      ";

    cout << "String      = " << S1;
    cout << "\n\nTrim Left  = " << TrimLeft(S1);
    cout << "\nTrim Right = " << TrimRight(S1);
    cout << "\nTrim       = " << Trim(S1);

    */

    // Problem 39

    /*

    vector <string> vString = { "Zakaria", "Maher", "Fadi", "Zin" };

    cout << "Vector after join:" << endl;
    cout << JoinString(vString, " ") << endl;

    */

    // Problem 40

    /*

    vector <string> vString = { "Zakaria", "Maher", "Faid", "Zin" };
    string ArrString[] = {"Zakaria", "Maher", "Faid", "Zin"};


    cout << "Vector after join:" << endl;
    cout << JoinString(vString, "###");

    cout << "\n\nArray after join:" << endl;
    cout << JoinString(ArrString, 4, " ") << endl;

    */

    // Problem 41

    /*

    string S2 = ReadString();
    cout << "\n\nString after reversing words:\n";
    cout << ReverseWordsInString(S2) << endl;

    */

    // Problem 42

    /*

    string S1 = "Welcome to Morocco , Morocco is a nice country";
    string StringToReplace = "Morocco";
    string ReplaceTo = "USA";

    cout << "\nOrigin String\n" << S1;
    cout << "\n\nString After Replace:\n";
    cout << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

    */

    // Problem 43

    /*

    string S1 = "Welcome to Morocco , Morocco is a nice country";
    string StringToReplace = "morocco";
    string ReplaceTo = "USA";

    cout << "\nOrigin String\n" << S1;
    cout << "\n\nReplace with match case:\n";
    cout << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);

    cout << "\n\nReplace with dont match case:\n";
    cout << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);

    */

    // Problem 44

    /*

    string S1 = "Welcome to Morocco, Morocco is a nice country; it's amazing";

    cout << "\nOrigin String\n" << S1;
    cout << "\n\nReplace with match case:\n";
    cout << RemovePunctuationsFromString(S1);


    */

    // Problem 45

    /*

    cout << "\nPlease Enter Client Data; \n\n";

    sClient Client;
    Client = ReadNewClient();

    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client);

    */

    // Problem 46

    /*

    string StLine = "A150#//#1234#//#Zakaria Skalli#//#02344123#//#5270.000000";
    cout << "\nLine Record is:\n";
    cout << StLine;

    sClient Client = ConvertLineToRecord(StLine);

    PrintClientRecord(Client);

    */

    // Problem 47

    /*

    AddClients();

    */

    // Problem 48

    /*

    vector <sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    PrintAllClientsData(vClients);

    */

    // Problem 49

    /*

    sClient Client;
    string AccountNumber = ReadClientAccountNumber();

    if (FindClientByAccountNumber(AccountNumber, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";

    */

    // Problem 50

    /*

    vector <sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    string AccountNumber = ReadClientAccountNumber();
    
    DeleteClientByAccountNumber(AccountNumber, vClients);

    */

    // Problem 51

    /*

    vector <sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    UpdateClientByAccountNumber(AccountNumber, vClients);

    */


    system("pause>0");
    return 0;

}

