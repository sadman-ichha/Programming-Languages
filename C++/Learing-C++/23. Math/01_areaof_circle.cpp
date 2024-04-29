/* The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.*/

#include <iostream>
#include <iomanip> // Include the header file for fixed and setprecision
using namespace std;

int main()
{
    double R, A;
    cin >> R;
    A = 3.14159 * R * R;
    cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}
