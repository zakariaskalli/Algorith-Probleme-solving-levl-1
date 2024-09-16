#pragma once
#include <iostream>
#include "clsMyStack.h"

using namespace std;

class clsMyString
{
private:
	clsMyStack <string> _Undo;
	clsMyStack <string> _Redo;
	string _Value;
public:

	void Set(string value)
	{
		_Undo.push(_Value);
		_Value = value;
	}
	string Get()
	{
		return _Value;
	}
	__declspec (property(get = Get, put = Set)) string Value;

	void Undo()
	{

		if (!_Undo.IsEmpty())
		{
			_Redo.push(_Value);
			_Value = _Undo.Top();
			_Undo.pop();
		}


	}

	void Redo()
	{
		
		if (!_Redo.IsEmpty())
		{
			_Undo.push(_Value);
			_Value = _Redo.Top();
			_Redo.pop();
		}

	}
};

