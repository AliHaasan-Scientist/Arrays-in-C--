#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    int values[10];
    for ( i = 0; i < 10; i++)
    {
        cin >> values[i];
    }
    for (int j = 0; j < 10; j++)
    {
        cout << values[j];
    }

    return 0;
}
