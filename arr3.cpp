#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int total, day, month;
    int var[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter Month";
    cin >> month;
    cout << "Enter day";
    cin >> day;
    total = day;
    for (int i = 0; i < month - 1; i++)
    {
        total +=var[i];
    }
cout<<total;
    return 0;
}
