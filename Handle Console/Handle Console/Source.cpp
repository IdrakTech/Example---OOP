#include <iostream>
#include <Windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

class Figure
{
public:

    void Rectangle()
    {
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        short x, y;
        int i;
        cout << "i = ";     cin >> i;
        cout << "x = ";     cin >> x;
        cout << "y = ";     cin >> y;
        
        //SetConsoleCursorPosition(console, pos);
        // WriteConsole(console, &i, 20, NULL, NULL);
        
        for (int j = 1; j <= i; ++j)
        {
            COORD pos = { x, ++y };
            SetConsoleCursorPosition(console, pos);
            cout << "*";
            for (int k = 1; k <= i - 1; ++k)
            {
                cout << "*";
                
            }
            cout << "\n";

            //COORD pos = { x, y };
            
        }

        //char array[][];

    }
};


int main()
{
    Figure rt;
    rt.Rectangle();

    return 0;
}