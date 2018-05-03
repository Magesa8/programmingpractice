#include <iostream>
#include <math.h>
using namespace std;

int main() {

    char confirmRun = 'y';

    while (confirmRun == 'y' || confirmRun == 'Y')
    {

        float a = 0, b = 0, c = 0;
        cout << "Please enter a, b, and c, as in ax^2 + bx + c:\n";
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "c:";
        cin >> c;
        float r1 = 0, r2 = 0;

        while (a == 0)
        {
            cout << "Please enter a nonzero value for 'a':";
            cin >> a;
        }

        float d = pow(b, 2) - 4 * a * c;

        if (d < 0)
        {
            cout << "There are no real roots.\n";
        }
        else
        {
            r1 = sqrt((-b + d) / (2 * a));
            r2 = sqrt((-b - d) / (2 * a));
            if (d == 0)
            {
                cout << "There is one root: " << r1 << ".\n";
            }
            else
            {
                cout << "There are two real roots, " << r1 << " and " << r2 << ".\n";
            }
        }

        cout << "Do you want to run the program again? (y/n):";
        cin >> confirmRun;
    }

    return 0;
}