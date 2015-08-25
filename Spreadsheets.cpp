//1B//to do :translate
#include <iostream>
#include <string>
using namespace std;
//judge which coordinates is use
bool isRC(const string& strcoor)
{
	if (strcoor[0] != 'R')
	{
		return false;
	}
	else if (strcoor[1] == 'C')
	{
		return false;
	}
	else
	{
		size_t found = strcoor.find('C');
		if (found != string::npos)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
//RC translate to otherr
string RCtoExe(const string& RCstr)
{
	unsigned int col = 0, row = 0;
	bool bcol = false;
	//size_t found = RCstr.find('C');
	for (auto c:RCstr)
	{
		if (isdigit(c))
		{
			if (bcol)
			{
				col = col * 10 + c - '0';
			}
			else
			{
				row = row * 10 + c - '0';
			}
			
		}
		else if (c == 'C')
		{
			bcol = true;
		}
	}
	unsigned int quotient = col;
	string retstring;
	while (quotient != 0)
	{
		unsigned int reminder = quotient % 26;
		quotient = quotient / 26;		
		switch (reminder)
		{
		case 0:
		{
			quotient--;
			retstring += "Z";
			break;
		}
		case  1:
			retstring += "A";
			break;
		case  2:
			retstring += "B";
			break;
		case  3:
			retstring += "C";
			break;
		case  4:
			retstring += "D";
			break;
		case  5:
			retstring += "E";
			break;
		case  6:
			retstring += "F";
			break;
		case  7:
			retstring += "G";
			break;
		case  8:
			retstring += "H";
			break;
		case  9:
			retstring += "I";
			break;
		case  10:
			retstring += "G";
			break;
		case 11:
			retstring += "K";
			break;
		case  12:
			retstring += "L";
			break;
		case  13:
			retstring += "M";
			break;
		case  14:
			retstring += "N";
			break;
		case  15:
			retstring += "0";
			break;
		case  16:
			retstring += "P";
			break;
		case  17:
			retstring += "Q";
			break;
		case  18:
			retstring += "R";
			break;
		case  19:
			retstring += "S";
			break;
		case 20:
			retstring += "T";
			break;
		case  21:
			retstring += "U";
			break;
		case  22:
			retstring += "V";
			break;
		case  23:
			retstring += "W";
			break;
		case  24:
			retstring += "X";
			break;
		case  25:
			retstring += "Y";
			break;

		}
	}
	//todo
	return retstring;

	
	
}
//other translate to RC
string ExetoRC(const string& Exestr)
{
	//todo

}

int main()
{
	unsigned int count = 0;
	string input;
	cin >> count;
	for (unsigned int i = 0; i < count; i++)
	{
		cin >> input;
		if (isRC(input))
		{
			cout << RCtoExe(input);
		}
		else
		{
			cout << ExetoRC(input);
		}

	}
	return 0;
}