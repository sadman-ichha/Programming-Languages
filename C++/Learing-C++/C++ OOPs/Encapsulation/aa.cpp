#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 10, 22, 14};
    int *ptr;
    ptr = arr;
    cout << "Array Memory Address: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << &ptr[i] << " "<<endl;
    }

    return 0;
}
