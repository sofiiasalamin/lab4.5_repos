#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double x, y, R;

    srand((unsigned)time(NULL));

    cout << "R = "; cin >> R;

    // 1 спосіб: координати вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y >= 0 && (x - R) * (x - R) + y * y <= R * R) ||
            (x >= -R && x <= 0 && y >= -R && y <= 0 &&
                (x + R) * (x + R) + (y + R) * (y + R) >= R * R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: випадкові координати з інтервалу [-2R; 2R]
    for (int i = 0; i < 10; i++)
    {
        x = 4. * R * rand() / RAND_MAX - 2 * R;
        y = 4. * R * rand() / RAND_MAX - 2 * R;

        if ((y >= 0 && (x - R) * (x - R) + y * y <= R * R) ||
            (x >= -R && x <= 0 && y >= -R && y <= 0 &&
                (x + R) * (x + R) + (y + R) * (y + R) >= R * R))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}