#include <iostream>
#include <Windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
short x, y;
COORD pos = { x, y };

class Figure
{
public:
	void Rectangle()
	{
		// characters for function
		int i, j, FirstAnDLastLine;


		// SetConsoleCursorPosition for first and last lines
		cout << "CORRD X = ";		cin >> x;
		cout << "CORRD Y = ";		cin >> y;


		// First line for Rectangle
		cout << "FirstAnDLastLine = ";		cin >> FirstAnDLastLine;
		pos = {x, y };
		SetConsoleCursorPosition(console, pos);
		for (i = 1; i <= FirstAnDLastLine; ++i)
		{
			cout << "@";
		}
		cout << "\n";
		
		// Empty part of Rectangle
		for (i = 2; i < FirstAnDLastLine; ++i)
		{
			pos = { x, ++y };
			SetConsoleCursorPosition(console, pos);
			cout << "*";									// first pointer
			for (j = 2; j < FirstAnDLastLine; ++j)
			{
				cout << " ";								// empty part if line
			}
			cout << "*" << "\n";							// last pointer
		}

		//Last line for Rectangle
		pos = {x, ++y};
		SetConsoleCursorPosition(console, pos);
		for (i = 1; i <= FirstAnDLastLine; ++i)
		{
			cout << "#";
		}
	}
};

int main()
{
	Figure rt;			// Initialize a class 
	rt.Rectangle();	

	return 0;
}