#include <iostream>
#include <cmath>
#include <iomanip>
#include "var.h"
#include "sum.h"
using namespace std;
using namespace nsVar;
using namespace nsSum;
int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << endl;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "arcctgx" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;

    while (x <= xk) {
        n = 0;
        a = x;
        s = a;
        sum();
        pi = 3.14159265358979323846;
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << pi / 2 + s << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    cin.get();
   return 0;
}