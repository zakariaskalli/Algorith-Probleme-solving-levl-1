#pragma once
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray <T> _MyArr;

public:


	void push(T Item)
	{
		_MyArr.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyArr.DeleteFirstItem();
	}

	void Print()
	{
		_MyArr.PrintList();
	}

	int Size()
	{
		return _MyArr.Size();
	}

	bool IsEmpty()
	{
		return _MyArr.IsEmpty();
	}

	T front()
	{
		return _MyArr.GetItem(0);
	}

	T back()
	{
		return _MyArr.GetItem(Size() - 1);
	}

	T GetItem(int Item)
	{
		return _MyArr.GetItem(Item);
	}

	void Reverse()
	{
		_MyArr.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyArr.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyArr.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T value)
	{
		_MyArr.InsertAtBeginning(value);
	}

	void InsertAtBack(T value)
	{
		_MyArr.InsertAtEnd(value);
	}


	void Clear()
	{
		_MyArr.Clear();
	}
};

