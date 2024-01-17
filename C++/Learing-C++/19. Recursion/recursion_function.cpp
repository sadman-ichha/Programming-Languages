#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of a number
int factorial(int n);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the recursive function to calculate factorial
    int result = factorial(num);

    cout << "Factorial of " << num << "! is: " << result << endl;

    return 0;
}

// Recursive function definition
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else
    {
        return n * factorial(n - 1);
    }
}
