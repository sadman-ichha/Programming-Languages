#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    // Check if the number of test cases is within the valid ranges
    if (t < 1 || t > 100)
    {
        cerr << "Number of test cases must be between 1 and 100" << endl;
        return 1;
    }

    for (int i = 0; i < t; i += 1)
    {
        int a, b, result;
        cin >> a >> b;

        if (a < 0 || a > 9 || b < 0 || b > 9)
        {
            cout << "Invalid input! Both a and b should be between 0 and 9." << endl;
            return 1;
        }
        else
        {
            result = a + b;
            cout << a << "+" << b << "=" << result << endl;
        }
    }

    return 0;
}
