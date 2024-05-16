// Read three values (variables A, B and C), which are the three student's grades.
// Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5.
// Consider that each grade can go from 0 to 10.0, always with one decimal place.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C, result;
    cin >> A >> B >> C;
    A *= 2;
    B *= 3;
    C *= 5;
    result = (A + B + C) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << result << endl;

    return 0;
}