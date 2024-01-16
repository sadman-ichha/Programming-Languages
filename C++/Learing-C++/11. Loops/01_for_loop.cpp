// C++ For Loop
// When you know exactly how many times you want to loop through a block of code,
// use the for loop instead of a while loop:

#include <iostream>
using namespace std;

int main()
{
    // int i, j;
    // for (i = 1; i <= 5; i += 1)
    // {
    //     for (j = 1; j <= 3; j++)
    //         cout << "(i=" << i << ", j=" << j << ") ";
    // }

    // int i = 1, j = 1;
    // while (i <= 10)
    // {
    //     while (j <= 5)
    //     {
    //         cout << "j=" << j ;
    //         j++;
    //     }

    //     cout <<"i= "<<i << endl;
    //     i++;
    // }

    int i = 6;
    do
    {
        cout << i << ". Sadman" << endl;
        i-=1;
    } while (i >= 1);

    cout << "end of loop\n";
    return 0;
}