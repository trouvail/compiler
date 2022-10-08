#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (!(a > 100))
        cout << "your number is below 100!\n";
    else
        cout << "your number is greater than 100!\n";
    return 0;
}
