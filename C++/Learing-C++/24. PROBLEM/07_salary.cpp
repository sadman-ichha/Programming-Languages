// Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour.
// Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{

    int employee, hour;
    float salary, monthSalary;
    cin >> employee >> hour >> salary;
    monthSalary = hour * salary;
    cout << "NUMBER = " << employee << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << monthSalary << endl;

    return 0;
}