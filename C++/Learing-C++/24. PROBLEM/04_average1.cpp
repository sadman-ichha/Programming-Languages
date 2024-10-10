#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, result, avg = 0;
    cin >> A >> B;
    A = A * 3.5;
    B = B * 7.5;
    result = A + B;
    avg = result / (3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << avg << endl;
    return 0;
}
