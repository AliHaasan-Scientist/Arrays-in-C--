#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    cout << "Enter a number:";
    int input, i;
    cin >> input;
    int arr[input];

    for (i = 0; i < input; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < input - 1; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}
