#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum = 0, i;

    int values[5];
    for (i = 0; i < 5; i++)
    {
        cin >> values[i];
        sum = sum + values[i];
        
    }
    cout<<sum<<endl;
    cout<<sum/5.0;

    return 0;
}
